// Author(s): Muck van Weerdenburg
// Copyright: see the accompanying file COPYING.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
/// \file lpstrans.h

#include <stdbool.h>
#include "aterm2.h"

ATermAppl translate(ATermAppl spec, bool convert_bools, bool convert_funcs);
//Pre: spec is an mCRL LPE
//Ret: an equivalent mCRL2 LPS, in which sort Bool is converted based on the
//     values of convert_bools and convert_funcs

bool is_mCRL_spec(ATermAppl spec);
//Ret: spec is a mCRL LPE
