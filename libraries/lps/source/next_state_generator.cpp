// Author(s): Ruud Koolen
// Copyright: see the accompanying file COPYING or copy at
// https://svn.win.tue.nl/trac/MCRL2/browser/trunk/COPYING
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
/// \file next_state_generator.cpp

#include "mcrl2/lps/next_state_generator.h"

#include <algorithm>
#include <set>
#include "mcrl2/utilities/stack_alloc.h"

using namespace mcrl2;
using namespace mcrl2::data;
using namespace mcrl2::lps;
using namespace mcrl2::lps::detail;

next_state_generator::next_state_generator(
  const specification& spec,
  const data::rewriter &rewriter,
  bool use_enumeration_caching,
  bool use_summand_pruning)
  : m_specification(spec),
    m_rewriter(rewriter),
    m_enumerator(m_specification.data(), m_rewriter),
    m_use_enumeration_caching(use_enumeration_caching)
{
  declare_constructors();

  m_process_parameters = data::variable_vector(m_specification.process().process_parameters().begin(), m_specification.process().process_parameters().end());
  m_state_function = atermpp::function_symbol("STATE", m_process_parameters.size());

  if(m_specification.process().has_time())
  {
    mCRL2log(log::warning) << "specification uses time, which is (currently) not supported; ignoring timing" << std::endl;
  }

  for (action_summand_vector::iterator i = m_specification.process().action_summands().begin(); i != m_specification.process().action_summands().end(); i++)
  {
    summand_t summand;
    summand.summand = &(*i);
    summand.variables = i->summation_variables();
    summand.condition = m_rewriter.convert_to(i->condition());
    // summand.result_state = atermpp::aterm_cast<atermpp::aterm_appl>(get_internal_state(i->next_state(m_specification.process().process_parameters())));
    summand.result_state = get_internal_state(i->next_state(m_specification.process().process_parameters()));

    for (action_list::iterator j = i->multi_action().actions().begin(); j != i->multi_action().actions().end(); j++)
    {
      action_internal_t action_label;
      action_label.label = j->label();

      for (data_expression_list::iterator k = j->arguments().begin(); k != j->arguments().end(); k++)
      {
        action_label.arguments.push_back(m_rewriter.convert_to(*k));
      }

      summand.action_label.push_back(action_label);
    }

    for (size_t j = 0; j < m_process_parameters.size(); j++)
    {
      if (data::search_free_variable(i->condition(), m_process_parameters[j]))
      {
        summand.condition_parameters.push_back(j);
      }
    }
    summand.condition_arguments_function = atermpp::function_symbol("condition_arguments", summand.condition_parameters.size());
    std::vector<atermpp::aterm_int> dummy(summand.condition_arguments_function.arity(), atermpp::aterm_int(static_cast<size_t>(0)));
    summand.condition_arguments_function_dummy = atermpp::aterm_appl(summand.condition_arguments_function, dummy.begin(), dummy.end());

    m_summands.push_back(summand);
  }

  state initial_state_raw = m_specification.initial_process().state(m_specification.process().process_parameters());
  state initial_state;
  for (size_t i = 0; i < initial_state_raw.size(); i++)
  {
    initial_state.push_back(m_rewriter(initial_state_raw[i]));
  }
  m_initial_state = get_internal_state(initial_state);

  m_all_summands = summand_subset_t(this, use_summand_pruning);
}

next_state_generator::~next_state_generator()
{}

void next_state_generator::declare_constructors()
{
  // Declare all constructors to the rewriter to prevent unnecessary compilation.
  // This can be removed if the jittyc or innerc compilers are not in use anymore.
  // In certain cases it could be useful to add the mappings also, but this appears to
  // give a substantial performance penalty, due to the addition of symbols to the
  // rewriter that are not used.

  std::set<variable> variables = mcrl2::lps::find_variables(m_specification);
  std::set<variable> free_variables = mcrl2::lps::find_free_variables(m_specification);
  std::set<variable> nonfree_variables;
  std::set_difference(free_variables.begin(), free_variables.end(), variables.begin(), variables.end(), std::inserter(nonfree_variables, nonfree_variables.begin()));

  std::set<sort_expression> bounded_sorts;
  for (std::set<variable>::const_iterator i = nonfree_variables.begin(); i != nonfree_variables.end(); i++)
  {
    bounded_sorts.insert(i->sort());
  }
  for (std::set<sort_expression>::const_iterator i = bounded_sorts.begin(); i != bounded_sorts.end(); i++)
  {
    const function_symbol_vector constructors(m_specification.data().constructors(*i));
    for (function_symbol_vector::const_iterator j = constructors.begin(); j != constructors.end(); j++)
    {
      m_rewriter.convert_to(data_expression(*j));
    }
  }

  const function_symbol_vector constructors(m_specification.data().constructors());
  for (function_symbol_vector::const_iterator i = constructors.begin(); i != constructors.end(); i++)
  {
    m_rewriter.convert_to(data_expression(*i));
  }
}

next_state_generator::internal_state_t next_state_generator::get_internal_state(const state &s) const
{
  const size_t len=s.size();
  typedef std::vector < internal_state_argument_t > vector_t;
  vector_t arguments;
  arguments.reserve(len);
  for (size_t i = 0; i < len; i++)
  {
    arguments.push_back(get_internal_state_argument(s[i]));
  }
  return get_internal_state(arguments);
}

state next_state_generator::get_state(const next_state_generator::internal_state_t &internal_state) const
{
  state s;
  for (internal_state_t::const_iterator i = internal_state.begin(); i != internal_state.end(); i++)
  {
    s.push_back(get_state_argument(*i));
  }
  return s;
}



next_state_generator::summand_subset_t::summand_subset_t(next_state_generator *generator, bool use_summand_pruning)
  : m_generator(generator),
    m_use_summand_pruning(use_summand_pruning)
{
  m_false = m_generator->m_rewriter.convert_to(data::sort_bool::false_());

  if (m_use_summand_pruning)
  {
    m_pruning_tree.summand_subset = atermpp::shared_subset<summand_t>(generator->m_summands);
    build_pruning_parameters(generator->m_specification.process().action_summands());
  }
  else
  {
    for (size_t i = 0; i < generator->m_summands.size(); i++)
    {
      m_summands.push_back(i);
    }
  }
}

bool next_state_generator::summand_subset_t::summand_set_contains(const std::set<action_summand> &summand_set, const next_state_generator::summand_t &summand)
{
  return summand_set.count(*summand.summand) > 0;
}

next_state_generator::summand_subset_t::summand_subset_t(next_state_generator *generator, const action_summand_vector &summands, bool use_summand_pruning)
  : m_generator(generator),
    m_use_summand_pruning(use_summand_pruning)
{
  m_false = m_generator->m_rewriter.convert_to(data::sort_bool::false_());

  std::set<action_summand> summand_set;
  for (action_summand_vector::const_iterator i = summands.begin(); i != summands.end(); i++)
  {
    summand_set.insert(*i);
  }

  if (m_use_summand_pruning)
  {
    atermpp::shared_subset<summand_t> full_set(generator->m_summands);
    m_pruning_tree.summand_subset =  atermpp::shared_subset<summand_t>(full_set, boost::bind(next_state_generator::summand_subset_t::summand_set_contains, summand_set, _1));
    build_pruning_parameters(summands);
  }
  else
  {
    for (size_t i = 0; i < generator->m_summands.size(); i++)
    {
      if (summand_set.count(*generator->m_summands[i].summand) > 0)
      {
        m_summands.push_back(i);
      }
    }
  }
}

static float condition_selectivity(const data_expression &e, const variable &v)
{
  if (sort_bool::is_and_application(e))
  {
    return condition_selectivity(data::binary_left(atermpp::aterm_cast<data::application>(e)), v)
        +  condition_selectivity(data::binary_right(atermpp::aterm_cast<data::application>(e)), v);
  }
  else if (sort_bool::is_or_application(e))
  {
    float sum = 0;
    size_t count = 0;
    std::list<data_expression> terms;
    terms.push_back(e);
    while (!terms.empty())
    {
      data_expression expression = terms.front();
      terms.pop_front();
      if (sort_bool::is_or_application(expression))
      {
        terms.push_back(data::binary_left(atermpp::aterm_cast<data::application>(e)));
        terms.push_back(data::binary_right(atermpp::aterm_cast<data::application>(e)));
      }
      else
      {
        sum += condition_selectivity(expression, v);
        count++;
      }
    }
    return sum / count;
  }
  else if (is_equal_to_application(e))
  {
    data_expression left = data::binary_left(atermpp::aterm_cast<data::application>(e));
    data_expression right = data::binary_right(atermpp::aterm_cast<data::application>(e));

    if (is_variable(left) && variable(left) == v)
    {
      return 1;
    }
    else if(is_variable(right) && variable(right) == v)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
}

struct parameter_score
{
  size_t parameter_id;
  float score;
};

static bool parameter_score_compare(const parameter_score &left, const parameter_score &right)
{
  return left.score > right.score;
}

void next_state_generator::summand_subset_t::build_pruning_parameters(const action_summand_vector &summands)
{
  typedef std::vector<parameter_score, mcrl2::utilities::stack_alloc< parameter_score, 64 > > vector_t;
  vector_t parameters(m_generator->m_process_parameters.size());

  for (size_t i = 0; i < m_generator->m_process_parameters.size(); i++)
  {
    parameters[i].parameter_id = i;
    parameters[i].score = 0;

    for (action_summand_vector::const_iterator j = summands.begin(); j != summands.end(); j++)
    {
      parameters[i].score += condition_selectivity(j->condition(), m_generator->m_process_parameters[i]);
    }
  }

  std::sort(parameters.begin(), parameters.end(), parameter_score_compare);

  for (size_t i = 0; i < m_generator->m_process_parameters.size(); i++)
  {
    if (parameters[i].score > 0)
    {
      m_pruning_parameters.push_back(parameters[i].parameter_id);
      mCRL2log(log::verbose) << "using pruning parameter " << m_generator->m_process_parameters[parameters[i].parameter_id].name() << std::endl;
    }
  }
}

bool next_state_generator::summand_subset_t::is_not_false(const next_state_generator::summand_t &summand)
{
  return m_generator->m_rewriter.rewrite_internal(summand.condition, m_pruning_substitution) != m_false;
}

atermpp::shared_subset<next_state_generator::summand_t>::iterator next_state_generator::summand_subset_t::begin(const internal_state_t &state)
{
  assert(m_use_summand_pruning);

  for (size_t i = 0; i < m_pruning_parameters.size(); i++)
  {
    const variable &v=m_generator->m_process_parameters[m_pruning_parameters[i]];
    m_pruning_substitution[v] = v;
  }

  pruning_tree_node_t *node = &m_pruning_tree;
  for (size_t i = 0; i < m_pruning_parameters.size(); i++)
  {
    size_t parameter = m_pruning_parameters[i];
    internal_state_argument_t argument = state[parameter];
    m_pruning_substitution[m_generator->m_process_parameters[parameter]] = argument;
    std::map<internal_state_argument_t, pruning_tree_node_t>::iterator position = node->children.find(argument);
    if (position == node->children.end())
    {
      pruning_tree_node_t child;
      child.summand_subset = atermpp::shared_subset<summand_t>(node->summand_subset, boost::bind(&next_state_generator::summand_subset_t::is_not_false, this, _1));
      node->children[argument] = child;
      node = &node->children[argument];
    }
    else
    {
      node = &position->second;
    }
  }

  return node->summand_subset.begin();
}



next_state_generator::iterator::iterator(next_state_generator *generator, const next_state_generator::internal_state_t &state, next_state_generator::substitution_t *substitution, summand_subset_t &summand_subset)
  : m_generator(generator),
    m_state(state),
    m_substitution(substitution),
    m_single_summand(false),
    m_use_summand_pruning(summand_subset.m_use_summand_pruning),
    m_summand(0),
    m_caching(false)
{
  if (m_use_summand_pruning)
  {
    m_summand_subset_iterator = summand_subset.begin(state);
  }
  else
  {
    m_summand_iterator = summand_subset.m_summands.begin();
    m_summand_iterator_end = summand_subset.m_summands.end();
  }

  m_transition.m_generator = m_generator;

  for (size_t i = 0; i < generator->m_process_parameters.size(); i++)
  {
    (*m_substitution)[generator->m_process_parameters[i]] = state[i];
  }

  increment();
}

next_state_generator::iterator::iterator(next_state_generator *generator, const next_state_generator::internal_state_t &state, next_state_generator::substitution_t *substitution, size_t summand_index)
  : m_generator(generator),
    m_state(state),
    m_substitution(substitution),
    m_single_summand(true),
    m_single_summand_index(summand_index),
    m_use_summand_pruning(false),
    m_summand(0),
    m_caching(false)
{
  m_transition.m_generator = m_generator;

  for (size_t i = 0; i < generator->m_process_parameters.size(); i++)
  {
    (*m_substitution)[generator->m_process_parameters[i]] = state[i];
  }

  increment();
}

struct action_argument_converter
{
  const data::detail::legacy_rewriter &m_rewriter;
  next_state_generator::substitution_t *m_substitution;

  action_argument_converter(const data::detail::legacy_rewriter &rewriter, next_state_generator::substitution_t *substitution):
        m_rewriter(rewriter),
        m_substitution(substitution)
  {}
  
  data_expression operator()(const atermpp::aterm_appl &t) const
  {
    return atermpp::aterm_cast<data_expression>(m_rewriter.convert_from(m_rewriter.rewrite_internal(t, *m_substitution)));
  }
};

struct state_argument_rewriter
{
  const data::detail::legacy_rewriter &m_rewriter;
  next_state_generator::substitution_t *m_substitution;

  state_argument_rewriter(const data::detail::legacy_rewriter &rewriter, next_state_generator::substitution_t *substitution):
        m_rewriter(rewriter),
        m_substitution(substitution)
  {}
  
  next_state_generator::internal_state_argument_t operator()(const atermpp::aterm &t) const
  {
    return atermpp::aterm_cast<next_state_generator::internal_state_argument_t>(
                m_rewriter.rewrite_internal(atermpp::aterm_cast<atermpp::aterm_appl>(t), *m_substitution));
  }
};

struct condition_converter
{
  const next_state_generator::internal_state_t &m_state;

  condition_converter(const next_state_generator::internal_state_t &state):m_state(state)
  {}

  const next_state_generator::rewriter_expression_t &operator()(const size_t parameter) const
  {
    return m_state[parameter];
  }
};

void next_state_generator::iterator::increment()
{
  std::vector < rewriter_expression_t > condition_arguments;
  while (!m_summand ||
    (m_cached && m_enumeration_cache_iterator == m_enumeration_cache_end) ||
    (!m_cached && m_enumeration_iterator == enumerator_t::iterator_internal()))
  {
    if (m_caching)
    {
      m_summand->enumeration_cache[m_enumeration_cache_key] = m_enumeration_log;
    }

    if (m_single_summand)
    {
      if (m_summand)
      {
        m_generator = 0;
        return;
      }
      m_summand = &(m_generator->m_summands[m_single_summand_index]);
    }
    else if (m_use_summand_pruning)
    {
      if (!m_summand_subset_iterator)
      {
        m_generator = 0;
        return;
      }
      m_summand = &(*m_summand_subset_iterator++);
    }
    else
    {
      if (m_summand_iterator == m_summand_iterator_end)
      {
        m_generator = 0;
        return;
      }
      m_summand = &(m_generator->m_summands[*m_summand_iterator++]);
    }

    if (m_generator->m_use_enumeration_caching)
    {
      condition_arguments.resize(m_summand->condition_parameters.size());

      for (size_t i = 0; i < m_summand->condition_parameters.size(); i++)
      {
        condition_arguments[i] = m_state[m_summand->condition_parameters[i]];
      }
      m_enumeration_cache_key = condition_arguments_t(m_summand->condition_arguments_function, condition_arguments.begin(), condition_arguments.end());
      std::map<condition_arguments_t, summand_enumeration_t>::iterator position = m_summand->enumeration_cache.find(m_enumeration_cache_key);
      if (position == m_summand->enumeration_cache.end())
      {
        m_cached = false;
        m_caching = true;
        m_enumeration_log.clear();
      }
      else
      {
        m_cached = true;
        m_caching = false;
        m_enumeration_cache_iterator = position->second.begin();
        m_enumeration_cache_end = position->second.end();
      }
    }
    else
    {
      m_cached = false;
      m_caching = false;
    }
    if (!m_cached)
    {
      for (data::variable_list::iterator i = m_summand->variables.begin(); i != m_summand->variables.end(); i++)
      {
        (*m_substitution)[*i] = *i;  // Reset the variable.
      }
      m_enumeration_iterator = m_generator->m_enumerator.begin_internal(m_summand->variables, m_summand->condition, *m_substitution);
    }
  }

  valuation_t valuation;
  if (m_cached)
  {
    valuation = *m_enumeration_cache_iterator;
    m_enumeration_cache_iterator++;
  }
  else
  {
    valuation = *m_enumeration_iterator;

    // If we failed to exactly rewrite the condition to true, nextstate generation fails.
    if(!m_enumeration_iterator.solution_is_exact())
    {
      // Integrate the valuation in the substitution, to generate a more meaningful error message.
      valuation_t::iterator v = valuation.begin();
      for (variable_list::iterator i = m_summand->variables.begin(); i != m_summand->variables.end(); i++, v++)
      {
        (*m_substitution)[*i] = *v;
      }

      // Reduce condition as much as possible, and give a hint of the original condition in the error message.
      rewriter_expression_t reduced_condition(m_generator->m_rewriter.rewrite_internal(m_summand->condition, *m_substitution));
      std::string printed_condition(data::pp(m_generator->m_rewriter.convert_from(m_summand->condition)).substr(0, 80));

      throw mcrl2::runtime_error("Expression " + data::pp(m_generator->m_rewriter.convert_from(reduced_condition)) +
                                 " does not rewrite to true or false in the condition "
                                 + printed_condition
                                 + (printed_condition.size() > 80?"...":""));
    }

    m_enumeration_iterator++;
  }

  if (m_caching)
  {
    m_enumeration_log.push_back(valuation);
  }

  assert(valuation.size() == m_summand->variables.size());
  valuation_t::iterator v = valuation.begin();
  for (variable_list::iterator i = m_summand->variables.begin(); i != m_summand->variables.end(); i++, v++)
  {
    (*m_substitution)[*i] = *v;
  }

  const state_argument_rewriter sar(m_generator->m_rewriter,m_substitution);
  // const atermpp::aterm_appl &state_args=m_summand->result_state;
  const internal_state_t &state_args=m_summand->result_state;
  // m_transition.m_state = internal_state_t(m_generator->m_state_function, state_args.begin(), state_args.end(), sar);
  m_transition.m_state.clear();
  for(internal_state_t::const_iterator i=state_args.begin(); i!=state_args.end(); ++i)
  {
    m_transition.m_state.push_back(sar(*i));
  }

  std::vector <action> actions;
  actions.resize(m_summand->action_label.size());
  std::vector < data_expression> arguments;
  for (size_t i = 0; i < m_summand->action_label.size(); i++)
  {
    arguments.resize(m_summand->action_label[i].arguments.size());
    for (size_t j = 0; j < m_summand->action_label[i].arguments.size(); j++)
    {
      arguments[j] = m_generator->m_rewriter.convert_from(m_generator->m_rewriter.rewrite_internal(m_summand->action_label[i].arguments[j], *m_substitution));
    }
    actions[i] = action(m_summand->action_label[i].label, data_expression_list(arguments.begin(), arguments.end()));
  }
  m_transition.m_action = multi_action(action_list(actions.begin(), actions.end())); 

  m_transition.m_summand_index = (m_summand - &m_generator->m_summands[0]);

  m_transition.m_summand_index = (m_summand - &m_generator->m_summands[0]);

  for (variable_list::iterator i = m_summand->variables.begin(); i != m_summand->variables.end(); i++)
  {
    (*m_substitution)[*i] = *i;  // Reset the variable.
  }
}
