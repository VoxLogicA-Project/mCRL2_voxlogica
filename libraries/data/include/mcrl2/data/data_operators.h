// Author(s): Wieger Wesselink
// Copyright: see the accompanying file COPYING.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
/// \file mcrl2/data/data_operators.h
/// \brief Some operators for list concatenation.

#ifndef MCRL2_DATA_DATA_OPERATORS_H
#define MCRL2_DATA_DATA_OPERATORS_H

#include "mcrl2/data/data.h"

namespace mcrl2 {

namespace data {

/// \brief Returns the concatenation of the lists l and m
inline
data_expression_list operator+(data_expression_list l, data_variable_list m)
{ return data_expression_list(ATconcat(l, m)); }

/// \brief Returns the concatenation of the lists l and m.
inline
data_expression_list operator+(data_variable_list l, data_expression_list m)
{ return data_expression_list(ATconcat(l, m)); }

/// \brief Returns the concatenation of [v] and the list l.
inline
data_expression_list operator+(data_variable v, data_expression_list l)
{
  return data_expression(aterm_appl(v)) + l;
}

/// \brief Returns the concatenation of the list l and [v].
inline
data_expression_list operator+(data_expression_list l, data_variable v)
{
  return l + data_expression(aterm_appl(v));
}

} // namespace data

} // namespace mcrl2

#endif // MCRL2_DATA_DATA_OPERATORS_H
