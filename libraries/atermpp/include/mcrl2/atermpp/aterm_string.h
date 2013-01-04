// Author(s): Wieger Wesselink
// Copyright: see the accompanying file COPYING or copy at
// https://svn.win.tue.nl/trac/MCRL2/browser/trunk/COPYING
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
/// \file mcrl2/atermpp/aterm_string.h
/// \brief Term containing a string.

#ifndef MCRL2_ATERMPP_ATERM_STRING_H
#define MCRL2_ATERMPP_ATERM_STRING_H

#include <string>
#include "mcrl2/atermpp/aterm.h"
#include "mcrl2/atermpp/aterm_appl.h"

namespace atermpp
{

/// \brief Term containing a string.
class aterm_string: public aterm_appl
{
  public:
    /// \brief Default constructor.
    aterm_string()
    {}

    /// \brief Constructor.
    /// \param t A term without arguments of type AT_APPL
    explicit aterm_string(const aterm &t)
      : aterm_appl(t)
    {
      assert(size() == 0);
    }

    /// \brief Constructor that allows construction from a string.
    /// \param s A string.
    aterm_string(const std::string& s)
      : aterm_appl(function_symbol(s,0))
    {
      assert(size() == 0);
    }

    /// Assignment operator.
    /// \param t An aterm_string.
    aterm_string& operator=(const aterm_string &t)
    {
      copy_term(t);
      return *this;
    }

    /// \brief Conversion operator
    /// \return The term converted to string
    operator std::string() const
    {
      return function().name();
    }
};

} // namespace atermpp

#endif // MCRL2_ATERMPP_ATERM_STRING_H
