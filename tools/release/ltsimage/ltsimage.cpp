// Author(s): Davide Trotta
// Copyright: see the accompanying file COPYING or copy at
// https://github.com/mCRL2org/mCRL2/blob/master/COPYING
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
/// \file ltsinfo.cpp

#include "mcrl2/utilities/input_tool.h"
#include "mcrl2/lts/lts_io.h"
#include "mcrl2/lts/lts_algorithm.h"

#include "mcrl2/process/action_label.h"
#include "mcrl2/process/process_expression.h"
#include "mcrl2/lts/detail/liblts_bisim_dnj.h"

using namespace mcrl2::utilities::tools;
using namespace mcrl2::utilities;
using namespace mcrl2::process;
using namespace mcrl2::core;
using namespace mcrl2::log;

// Maurice: This tool class is just a way to parse input arguments, you can have whatever main (at the end) that you want.

class ltsinfo_tool : public input_tool
{

  private:

    std::string                 infilename;

  public:

    ltsinfo_tool() :
      input_tool("ltsimage", "Davide Trotta",
                   "help short",
                   "help long"
                  )
    {}

  protected:

    void add_options(interface_description& desc)
    {
      using namespace mcrl2::lts;

      input_tool::add_options(desc);
    }

    void parse_options(const command_line_parser& parser)
    {
      using namespace mcrl2::lts;

      input_tool::parse_options(parser);

      if (0 < parser.arguments.size())
      {
        infilename = parser.arguments[0];
      }
    }

  public:

    bool run()
    {
      // Load your image with simpleitk

      // Convert the lts
      mcrl2::lts::lts_lts_t result;

      // Every add_state will give us a state number.
      std::size_t s = result.add_state();
      std::size_t t = result.add_state();

      // Necessary or it will crash later on.
      result.set_initial_state(s);

      // Add action labels. This is a bit convoluted, but we need to make a multi action from 
      // an action_list, and then add the label. Then from add_action get the index of the label.
      action a(mcrl2::process::action_label("a", mcrl2::data::sort_expression_list()), mcrl2::data::data_expression_list());
      mcrl2::process::action_list list;
      list.push_front(a);
      mcrl2::lps::multi_action omega(list);

  std::size_t a_index = result.add_action(mcrl2::lts::action_label_lts(omega));
      // Now we can make a transition from the state indices and the action index.
      result.add_transition(mcrl2::lts::transition(s, a_index, t));

      // Reduce modulo branching bisimulation, modifies the input lts.
      mcrl2::lts::detail::bisim_partitioner_dnj<mcrl2::lts::lts_lts_t> bisim_part(result, true, false);
      bisim_part.finalize_minimized_LTS();

      // Print information by inspecting the resulting LTS.
      const auto& trans = result.get_transitions()[0];

      mCRL2log(mcrl2::log::info) << trans.from() << " -[" << result.action_label(trans.label()) << "]-> " << trans.to() << std::endl;

      // Write the reduced lts to disk.
      result.save("test.lts");
      mCRL2log(mcrl2::log::info) << this->infilename;
      return true;
    }
};

int main(int argc, char** argv)
{
  return ltsinfo_tool().execute(argc, argv);
}

