
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison GLR parsers in C
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0


/* Substitute the variable and function names.  */
#define yyparse mcrl2yyparse
#define yylex   mcrl2yylex
#define yyerror mcrl2yyerror
#define yylval  mcrl2yylval
#define yychar  mcrl2yychar
#define yydebug mcrl2yydebug
#define yynerrs mcrl2yynerrs
#define yylloc  mcrl2yylloc

/* Copy the first part of user declarations.  */

/* Line 172 of glr.c  */
#line 18 "mcrl2parser.yy"


#include <stdio.h>
#include <string.h>

#include <aterm2.h>
#include "mcrl2/core/aterm_ext.h"
#include "mcrl2/core/messaging.h"
#include "mcrl2/core/detail/struct.h"

using namespace mcrl2::core;
using namespace mcrl2::core::detail;

//Global precondition: the ATerm library has been initialised

//external declarations from mcrl2lexer.ll
void mcrl2yyerror(const char *s);
int mcrl2yylex(void);
extern ATerm spec_tree;
extern ATermIndexedSet parser_protect_table;

#ifdef _MSC_VER
#define yyfalse 0
#define yytrue 1
#endif

#define YYMAXDEPTH 640000

//local declarations
ATermAppl gsDataSpecEltsToSpec(ATermList SpecElts);
//Pre: SpecElts contains zero or more occurrences of sort, constructor,
//     operation and data equation specifications.
//Ret: data specification containing one sort, constructor, operation,
//     and data equation specification, in that order.

ATermAppl gsProcSpecEltsToSpec(ATermList SpecElts);
//Pre: SpecElts contains one process initialisation and zero or more
//     occurrences of sort, constructor, operation, data equation, action and
//     process equation specifications.
//Ret: process specification containing one sort, constructor, operation,
//     data equation, action and process equation specification, and one
//     process initialisation, in that order.

ATermAppl gsActionRenameEltsToActionRename(ATermList SpecElts);
//Pre: ActionRenameElts contains zero or more occurrences of
//     sort, constructor, operation, equation, action and action rename
//     rules.
//Ret: specification containing one sort, constructor, operation, equation,
//     action and action rename rules in that order.

ATermAppl gsPBESSpecEltsToSpec(ATermList SpecElts);
//Pre: SpecElts contains one parameterised boolean initialisation and zero or
//     more occurrences of sort, constructor, operation, data equation, action
//     and parameterised boolean equation specifications.
//Ret: BPES specification containing one sort, constructor, operation,
//     data equation, action and parameterised boolean equation specification,
//     and one parameterised boolean initialisation, in that order.

#define safe_assign(lhs, rhs) { ATbool b; lhs = rhs; ATindexedSetPut(parser_protect_table, (ATerm) lhs, &b); }


/* Line 172 of glr.c  */
#line 130 "mcrl2parser.cpp"



#include "mcrl2parser.hpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 243 of glr.c  */
#line 165 "mcrl2parser.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif


#ifdef __cplusplus
# define YYOPTIONAL_LOC(Name) /* empty */
#else
# define YYOPTIONAL_LOC(Name) Name __attribute__ ((__unused__))
#endif

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  163
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1757

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  168
/* YYNRULES -- Number of rules.  */
#define YYNRULES  405
/* YYNRULES -- Number of states.  */
#define YYNSTATES  854
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 7
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    36,    38,    40,    44,    46,    48,    52,
      54,    56,    59,    61,    65,    68,    74,    75,    78,    80,
      84,    86,    90,    92,    94,    96,   100,   102,   104,   106,
     108,   110,   115,   120,   125,   127,   129,   134,   136,   140,
     144,   146,   151,   156,   161,   163,   167,   171,   173,   177,
     179,   184,   189,   191,   195,   199,   201,   206,   211,   213,
     217,   221,   223,   228,   233,   235,   239,   243,   247,   251,
     255,   257,   261,   263,   267,   269,   273,   275,   279,   283,
     285,   289,   293,   297,   299,   303,   307,   309,   312,   315,
     318,   320,   325,   330,   332,   337,   339,   343,   345,   347,
     349,   351,   355,   357,   359,   361,   363,   365,   369,   373,
     377,   379,   383,   387,   393,   397,   399,   401,   404,   406,
     408,   410,   412,   415,   418,   422,   424,   428,   430,   434,
     436,   440,   443,   446,   449,   453,   457,   459,   462,   467,
     470,   474,   478,   484,   487,   491,   493,   495,   497,   501,
     503,   508,   510,   512,   516,   518,   523,   525,   529,   533,
     535,   540,   542,   546,   548,   553,   555,   559,   565,   567,
     572,   574,   578,   580,   584,   586,   591,   595,   601,   603,
     608,   610,   614,   616,   620,   622,   626,   628,   632,   634,
     639,   643,   649,   651,   656,   658,   660,   662,   664,   668,
     670,   672,   676,   681,   688,   695,   702,   709,   716,   718,
     722,   724,   728,   730,   734,   738,   740,   744,   746,   750,
     752,   756,   760,   764,   766,   770,   772,   776,   778,   782,
     784,   786,   788,   791,   793,   795,   797,   799,   802,   805,
     809,   811,   815,   818,   821,   825,   829,   836,   840,   842,
     844,   849,   854,   860,   866,   867,   871,   873,   877,   883,
     885,   889,   891,   896,   901,   907,   913,   915,   919,   923,
     925,   930,   935,   941,   947,   949,   952,   957,   962,   966,
     970,   972,   977,   982,   988,   994,   999,  1001,  1003,  1005,
    1007,  1009,  1013,  1015,  1017,  1019,  1023,  1025,  1029,  1031,
    1035,  1037,  1041,  1043,  1046,  1049,  1051,  1054,  1057,  1059,
    1063,  1065,  1067,  1071,  1073,  1075,  1080,  1085,  1087,  1091,
    1093,  1098,  1103,  1105,  1109,  1113,  1115,  1120,  1125,  1127,
    1131,  1133,  1136,  1138,  1143,  1148,  1150,  1155,  1157,  1159,
    1163,  1165,  1167,  1170,  1172,  1174,  1176,  1178,  1181,  1186,
    1189,  1193,  1199,  1203,  1205,  1207,  1209,  1211,  1216,  1221,
    1223,  1227,  1229,  1234,  1239,  1241,  1245,  1249,  1251,  1256,
    1261,  1263,  1266,  1268,  1273,  1278,  1283,  1285,  1287,  1289,
    1293,  1295,  1297,  1300,  1302,  1304,  1306,  1309,  1314,  1317,
    1321,  1326,  1334,  1336,  1338,  1342
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
      97,     0,    -1,     3,    94,    -1,     4,    98,    -1,     5,
     112,    -1,     6,   143,    -1,     7,   160,    -1,     8,   163,
      -1,     9,   198,    -1,    11,   208,    -1,    13,   239,    -1,
      10,   256,    -1,    12,   159,    -1,    99,    -1,   103,    -1,
     100,    15,    99,    -1,   101,    -1,   102,    -1,   101,    40,
     102,    -1,   103,    -1,   109,    -1,    61,   104,    -1,   105,
      -1,   104,    41,   105,    -1,    94,   106,    -1,    94,    42,
     107,    43,   106,    -1,    -1,    37,    94,    -1,   108,    -1,
     107,    34,   108,    -1,    98,    -1,    94,    35,    98,    -1,
      94,    -1,   110,    -1,   111,    -1,    42,    98,    43,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    42,    98,    43,    -1,    68,    42,    98,    43,    -1,
      69,    42,    98,    43,    -1,   113,    -1,   116,    -1,   113,
      78,   114,    79,    -1,   115,    -1,   114,    34,   115,    -1,
      94,    32,   112,    -1,   119,    -1,    75,   117,    33,   116,
      -1,    76,   117,    33,   116,    -1,    77,   117,    33,   116,
      -1,   118,    -1,   117,    34,   118,    -1,   149,    35,    98,
      -1,   121,    -1,   121,    25,   120,    -1,   119,    -1,    76,
     117,    33,   120,    -1,    77,   117,    33,   120,    -1,   123,
      -1,   123,    23,   122,    -1,   123,    24,   122,    -1,   121,
      -1,    76,   117,    33,   122,    -1,    77,   117,    33,   122,
      -1,   125,    -1,   125,    21,   124,    -1,   125,    22,   124,
      -1,   123,    -1,    76,   117,    33,   124,    -1,    77,   117,
      33,   124,    -1,   126,    -1,   126,    17,   126,    -1,   126,
      16,   126,    -1,   126,    48,   126,    -1,   126,    47,   126,
      -1,   126,    74,   126,    -1,   127,    -1,   129,    18,   126,
      -1,   128,    -1,   127,    19,   129,    -1,   129,    -1,   128,
      20,   129,    -1,   130,    -1,   129,    30,   130,    -1,   129,
      31,   130,    -1,   131,    -1,   130,    72,   131,    -1,   130,
      73,   131,    -1,   130,    28,   131,    -1,   132,    -1,   131,
      29,   132,    -1,   131,    33,   132,    -1,   134,    -1,    38,
     133,    -1,    31,   132,    -1,    40,   132,    -1,   132,    -1,
      76,   117,    33,   133,    -1,    77,   117,    33,   133,    -1,
     136,    -1,   134,    42,   135,    43,    -1,   112,    -1,   135,
      34,   112,    -1,    94,    -1,   137,    -1,   138,    -1,   141,
      -1,    42,   112,    43,    -1,    70,    -1,    71,    -1,    95,
      -1,    44,    -1,    49,    -1,    45,   135,    46,    -1,    50,
     135,    51,    -1,    50,   139,    51,    -1,   140,    -1,   139,
      34,   140,    -1,   112,    35,   112,    -1,    50,   142,    41,
     112,    51,    -1,    94,    35,    98,    -1,   144,    -1,   145,
      -1,   144,   145,    -1,   146,    -1,   151,    -1,   152,    -1,
     155,    -1,    52,   147,    -1,   148,    36,    -1,   147,   148,
      36,    -1,   149,    -1,    94,    32,    98,    -1,    94,    -1,
     149,    34,    94,    -1,   100,    -1,   100,    15,    98,    -1,
      53,   153,    -1,    54,   153,    -1,   154,    36,    -1,   153,
     154,    36,    -1,   149,    35,    98,    -1,   156,    -1,    56,
     157,    -1,    55,   159,    56,   157,    -1,   158,    36,    -1,
     157,   158,    36,    -1,   112,    32,   112,    -1,   112,    15,
     112,    32,   112,    -1,   118,    36,    -1,   159,   118,    36,
      -1,   161,    -1,    81,    -1,   162,    -1,   161,    41,   162,
      -1,    94,    -1,    94,    42,   135,    43,    -1,   164,    -1,
     165,    -1,   165,    30,   164,    -1,   166,    -1,    82,   117,
      33,   165,    -1,   168,    -1,   168,    24,   167,    -1,   168,
      14,   167,    -1,   166,    -1,    82,   117,    33,   167,    -1,
     170,    -1,   168,    26,   169,    -1,   170,    -1,    82,   117,
      33,   169,    -1,   172,    -1,   132,    15,   171,    -1,   132,
      15,   175,    27,   171,    -1,   170,    -1,    82,   117,    33,
     171,    -1,   176,    -1,   176,    33,   174,    -1,   177,    -1,
     176,    33,   175,    -1,   172,    -1,    82,   117,    33,   174,
      -1,   132,    15,   174,    -1,   132,    15,   175,    27,   174,
      -1,   173,    -1,    82,   117,    33,   175,    -1,   178,    -1,
     176,    39,   132,    -1,   179,    -1,   177,    39,   132,    -1,
     182,    -1,   182,    41,   180,    -1,   182,    -1,   182,    41,
     181,    -1,   178,    -1,    82,   117,    33,   180,    -1,   132,
      15,   180,    -1,   132,    15,   181,    27,   180,    -1,   179,
      -1,    82,   117,    33,   181,    -1,   183,    -1,   162,    -1,
     184,    -1,   185,    -1,    42,   163,    43,    -1,    80,    -1,
      81,    -1,    94,    42,    43,    -1,    94,    42,   114,    43,
      -1,    83,    42,   186,    34,   163,    43,    -1,    85,    42,
     186,    34,   163,    43,    -1,    86,    42,   187,    34,   163,
      43,    -1,    87,    42,   190,    34,   163,    43,    -1,    84,
      42,   195,    34,   163,    43,    -1,    49,    -1,    50,   149,
      51,    -1,    49,    -1,    50,   188,    51,    -1,   189,    -1,
     188,    34,   189,    -1,    94,    15,    94,    -1,    49,    -1,
      50,   191,    51,    -1,   192,    -1,   191,    34,   192,    -1,
     193,    -1,   193,    15,    81,    -1,   193,    15,    94,    -1,
      94,    41,   194,    -1,    94,    -1,   194,    41,    94,    -1,
      49,    -1,    50,   196,    51,    -1,   197,    -1,   196,    34,
     197,    -1,   194,    -1,   199,    -1,   200,    -1,   199,   200,
      -1,   145,    -1,   201,    -1,   204,    -1,   207,    -1,    57,
     202,    -1,   203,    36,    -1,   202,   203,    36,    -1,   149,
      -1,   149,    35,   150,    -1,    58,   205,    -1,   206,    36,
      -1,   205,   206,    36,    -1,    94,    32,   163,    -1,    94,
      42,   117,    43,    32,   163,    -1,    60,   163,    36,    -1,
     209,    -1,   213,    -1,    76,   117,    33,   209,    -1,    77,
     117,    33,   209,    -1,    90,    94,   210,    33,   209,    -1,
      89,    94,   210,    33,   209,    -1,    -1,    42,   211,    43,
      -1,   212,    -1,   211,    34,   212,    -1,    94,    35,    98,
      32,   112,    -1,   215,    -1,   215,    25,   214,    -1,   213,
      -1,    76,   117,    33,   214,    -1,    77,   117,    33,   214,
      -1,    90,    94,   210,    33,   214,    -1,    89,    94,   210,
      33,   214,    -1,   217,    -1,   217,    23,   216,    -1,   217,
      24,   216,    -1,   215,    -1,    76,   117,    33,   216,    -1,
      77,   117,    33,   216,    -1,    90,    94,   210,    33,   216,
      -1,    89,    94,   210,    33,   216,    -1,   219,    -1,    38,
     218,    -1,    45,   220,    46,   218,    -1,    47,   220,    48,
     218,    -1,    92,    39,   132,    -1,    91,    39,   132,    -1,
     217,    -1,    76,   117,    33,   218,    -1,    77,   117,    33,
     218,    -1,    90,    94,   210,    33,   218,    -1,    89,    94,
     210,    33,   218,    -1,    88,    42,   112,    43,    -1,   162,
      -1,    70,    -1,    71,    -1,    92,    -1,    91,    -1,    42,
     208,    43,    -1,   229,    -1,   221,    -1,   223,    -1,   224,
      30,   222,    -1,   224,    -1,   224,    30,   222,    -1,   225,
      -1,   226,    33,   224,    -1,   226,    -1,   226,    33,   224,
      -1,   227,    -1,   226,    29,    -1,   226,    30,    -1,   228,
      -1,   226,    29,    -1,   226,    30,    -1,    93,    -1,    42,
     221,    43,    -1,   229,    -1,    93,    -1,    42,   221,    43,
      -1,   230,    -1,   231,    -1,    76,   117,    33,   230,    -1,
      77,   117,    33,   230,    -1,   233,    -1,   233,    25,   232,
      -1,   231,    -1,    76,   117,    33,   232,    -1,    77,   117,
      33,   232,    -1,   235,    -1,   236,    23,   234,    -1,   236,
      24,   234,    -1,   233,    -1,    76,   117,    33,   234,    -1,
      77,   117,    33,   234,    -1,   236,    -1,   235,    39,   132,
      -1,   238,    -1,    38,   237,    -1,   236,    -1,    76,   117,
      33,   237,    -1,    77,   117,    33,   237,    -1,   160,    -1,
      88,    42,   112,    43,    -1,    70,    -1,    71,    -1,    42,
     229,    43,    -1,   240,    -1,   241,    -1,   240,   241,    -1,
     145,    -1,   201,    -1,   242,    -1,   243,    -1,    86,   244,
      -1,    55,   159,    86,   244,    -1,   245,    36,    -1,   244,
     245,    36,    -1,   112,    15,   162,    25,   246,    -1,   162,
      25,   246,    -1,   162,    -1,   183,    -1,   248,    -1,   249,
      -1,    76,   117,    33,   248,    -1,    77,   117,    33,   248,
      -1,   251,    -1,   251,    25,   250,    -1,   249,    -1,    76,
     117,    33,   250,    -1,    77,   117,    33,   250,    -1,   253,
      -1,   253,    23,   252,    -1,   253,    24,   252,    -1,   251,
      -1,    76,   117,    33,   252,    -1,    77,   117,    33,   252,
      -1,   255,    -1,    38,   254,    -1,   253,    -1,    76,   117,
      33,   254,    -1,    77,   117,    33,   254,    -1,    88,    42,
     112,    43,    -1,   162,    -1,    70,    -1,    71,    -1,    42,
     247,    43,    -1,   257,    -1,   258,    -1,   257,   258,    -1,
     145,    -1,   259,    -1,   263,    -1,    59,   260,    -1,    55,
     159,    59,   260,    -1,   261,    36,    -1,   260,   261,    36,
      -1,   262,    94,    32,   247,    -1,   262,    94,    42,   117,
      43,    32,   247,    -1,    89,    -1,    90,    -1,    60,   162,
      36,    -1,    55,   159,    60,   162,    36,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   208,   208,   213,   218,   223,   228,   233,   238,   243,
     248,   253,   258,   270,   279,   283,   292,   301,   306,   315,
     324,   328,   337,   342,   351,   356,   366,   370,   379,   384,
     393,   398,   407,   412,   417,   422,   430,   434,   438,   442,
     446,   454,   458,   462,   473,   482,   486,   495,   500,   509,
     518,   522,   527,   532,   542,   547,   556,   569,   573,   583,
     587,   592,   601,   605,   611,   621,   625,   630,   639,   643,
     649,   659,   663,   668,   677,   681,   687,   693,   699,   705,
     715,   719,   729,   733,   743,   747,   757,   761,   767,   777,
     781,   787,   793,   803,   807,   813,   823,   827,   832,   837,
     846,   850,   855,   864,   868,   877,   882,   891,   896,   900,
     904,   908,   916,   921,   926,   931,   936,   945,   950,   955,
     964,   969,   978,   987,   996,  1008,  1017,  1022,  1031,  1036,
    1041,  1046,  1055,  1064,  1069,  1078,  1087,  1096,  1101,  1110,
    1115,  1124,  1133,  1143,  1148,  1157,  1170,  1179,  1184,  1200,
    1205,  1214,  1219,  1229,  1234,  1246,  1251,  1260,  1265,  1274,
    1279,  1291,  1300,  1304,  1313,  1317,  1326,  1330,  1335,  1344,
    1348,  1357,  1361,  1370,  1374,  1383,  1387,  1392,  1401,  1405,
    1414,  1418,  1427,  1431,  1440,  1444,  1449,  1454,  1463,  1467,
    1476,  1480,  1489,  1493,  1502,  1506,  1515,  1519,  1528,  1532,
    1537,  1542,  1551,  1555,  1564,  1568,  1572,  1576,  1580,  1588,
    1593,  1602,  1607,  1616,  1621,  1626,  1631,  1636,  1645,  1650,
    1659,  1664,  1673,  1678,  1687,  1696,  1701,  1710,  1715,  1724,
    1729,  1734,  1743,  1752,  1757,  1766,  1771,  1780,  1785,  1794,
    1806,  1815,  1820,  1829,  1834,  1839,  1844,  1853,  1862,  1867,
    1876,  1886,  1899,  1908,  1913,  1922,  1928,  1943,  1955,  1964,
    1968,  1973,  1978,  1983,  1993,  1997,  2007,  2012,  2021,  2030,
    2034,  2043,  2047,  2052,  2057,  2062,  2071,  2075,  2080,  2089,
    2093,  2098,  2103,  2108,  2117,  2121,  2126,  2131,  2136,  2141,
    2150,  2154,  2159,  2164,  2169,  2178,  2183,  2188,  2193,  2198,
    2203,  2208,  2216,  2221,  2230,  2234,  2243,  2247,  2256,  2260,
    2269,  2273,  2282,  2286,  2291,  2300,  2304,  2309,  2318,  2323,
    2331,  2336,  2341,  2349,  2358,  2362,  2367,  2376,  2380,  2389,
    2393,  2398,  2407,  2411,  2416,  2425,  2429,  2434,  2443,  2447,
    2456,  2460,  2469,  2473,  2478,  2487,  2492,  2497,  2502,  2507,
    2518,  2527,  2532,  2541,  2546,  2551,  2560,  2569,  2574,  2592,
    2597,  2606,  2611,  2620,  2625,  2637,  2646,  2650,  2655,  2664,
    2668,  2677,  2681,  2686,  2695,  2699,  2704,  2713,  2717,  2722,
    2731,  2735,  2744,  2748,  2753,  2762,  2767,  2772,  2777,  2782,
    2794,  2803,  2808,  2817,  2822,  2827,  2836,  2841,  2850,  2855,
    2864,  2870,  2880,  2885,  2894,  2900
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TAG_IDENTIFIER", "TAG_SORT_EXPR",
  "TAG_DATA_EXPR", "TAG_DATA_SPEC", "TAG_MULT_ACT", "TAG_PROC_EXPR",
  "TAG_PROC_SPEC", "TAG_PBES_SPEC", "TAG_STATE_FRM", "TAG_DATA_VARS",
  "TAG_ACTION_RENAME", "LMERGE", "ARROW", "LTE", "GTE", "CONS", "SNOC",
  "CONCAT", "EQ", "NEQ", "AND", "BARS", "IMP", "BINIT", "ELSE", "SLASH",
  "STAR", "PLUS", "MINUS", "EQUALS", "DOT", "COMMA", "COLON", "SEMICOLON",
  "QMARK", "EXCLAM", "AT", "HASH", "BAR", "LPAR", "RPAR", "PBRACK",
  "LBRACK", "RBRACK", "LANG", "RANG", "PBRACE", "LBRACE", "RBRACE",
  "KWSORT", "KWCONS", "KWMAP", "KWVAR", "KWEQN", "KWACT", "KWPROC",
  "KWPBES", "KWINIT", "KWSTRUCT", "BOOL", "POS", "NAT", "INT", "REAL",
  "LIST", "SET", "BAG", "CTRUE", "CFALSE", "DIV", "MOD", "IN", "LAMBDA",
  "FORALL", "EXISTS", "WHR", "END", "DELTA", "TAU", "SUM", "BLOCK",
  "ALLOW", "HIDE", "RENAME", "COMM", "VAL", "MU", "NU", "DELAY", "YALED",
  "NIL", "ID", "NUMBER", "$accept", "start", "sort_expr",
  "sort_expr_arrow", "domain_no_arrow", "domain_no_arrow_elts_hs",
  "domain_no_arrow_elt", "sort_expr_struct", "struct_constructors_bs",
  "struct_constructor", "recogniser", "struct_projections_cs",
  "struct_projection", "sort_expr_primary", "sort_constant",
  "sort_constructor", "data_expr", "data_expr_whr", "id_inits_cs",
  "id_init", "data_expr_quant", "data_vars_decls_cs", "data_vars_decl",
  "data_expr_imp", "data_expr_imp_rhs", "data_expr_and",
  "data_expr_and_rhs", "data_expr_eq", "data_expr_eq_rhs", "data_expr_rel",
  "data_expr_cons", "data_expr_snoc", "data_expr_concat", "data_expr_add",
  "data_expr_div", "data_expr_mult", "data_expr_prefix",
  "data_expr_quant_prefix", "data_expr_postfix", "data_exprs_cs",
  "data_expr_primary", "data_constant", "data_enumeration",
  "bag_enum_elts_cs", "bag_enum_elt", "data_comprehension",
  "data_var_decl", "data_spec", "data_spec_elts", "data_spec_elt",
  "sort_spec", "sorts_decls_scs", "sorts_decl", "ids_cs", "domain",
  "cons_spec", "map_spec", "ops_decls_scs", "ops_decl", "data_eqn_spec",
  "data_eqn_sect", "data_eqn_decls_scs", "data_eqn_decl",
  "data_vars_decls_scs", "mult_act", "param_ids_bs", "param_id",
  "proc_expr", "proc_expr_choice", "proc_expr_sum", "proc_expr_merge",
  "proc_expr_merge_rhs", "proc_expr_binit", "proc_expr_binit_rhs",
  "proc_expr_cond", "proc_expr_cond_la", "proc_expr_seq",
  "proc_expr_seq_wo_cond", "proc_expr_seq_rhs",
  "proc_expr_seq_rhs_wo_cond", "proc_expr_at", "proc_expr_at_wo_cond",
  "proc_expr_sync", "proc_expr_sync_wo_cond", "proc_expr_sync_rhs",
  "proc_expr_sync_rhs_wo_cond", "proc_expr_primary", "proc_constant",
  "id_assignment", "proc_quant", "act_names_set", "ren_expr_set",
  "ren_exprs_cs", "ren_expr", "comm_expr_set", "comm_exprs_cs",
  "comm_expr", "comm_expr_lhs", "ids_bs", "mult_act_names_set",
  "mult_act_names_cs", "mult_act_name", "proc_spec", "proc_spec_elts",
  "proc_spec_elt", "act_spec", "acts_decls_scs", "acts_decl",
  "proc_eqn_spec", "proc_eqn_decls_scs", "proc_eqn_decl", "proc_init",
  "state_frm", "state_frm_quant", "fixpoint_params",
  "data_var_decl_inits_cs", "data_var_decl_init", "state_frm_imp",
  "state_frm_imp_rhs", "state_frm_and", "state_frm_and_rhs",
  "state_frm_prefix", "state_frm_quant_prefix", "state_frm_primary",
  "reg_frm", "reg_frm_alt_naf", "reg_frm_alt", "reg_frm_seq_naf",
  "reg_frm_seq", "reg_frm_postfix_naf", "reg_frm_postfix",
  "reg_frm_primary_naf", "reg_frm_primary", "act_frm", "act_frm_quant",
  "act_frm_imp", "act_frm_imp_rhs", "act_frm_and", "act_frm_and_rhs",
  "act_frm_at", "act_frm_prefix", "act_frm_quant_prefix",
  "act_frm_primary", "action_rename_spec", "action_rename_spec_elts",
  "action_rename_spec_elt", "action_rename_rule_spec",
  "action_rename_rule_sect", "action_rename_rules_scs",
  "action_rename_rule", "action_rename_rule_rhs", "pb_expr",
  "pb_expr_quant", "pb_expr_imp", "pb_expr_imp_rhs", "pb_expr_and",
  "pb_expr_and_rhs", "pb_expr_not", "pb_expr_quant_not", "pb_expr_primary",
  "pbes_spec", "pbes_spec_elts", "pbes_spec_elt", "pb_eqn_spec",
  "pb_eqn_decls_scs", "pb_eqn_decl", "fixpoint", "pb_init", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    99,    99,   100,   101,   101,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   111,   111,   111,   112,   113,   113,   114,   114,   115,
     116,   116,   116,   116,   117,   117,   118,   119,   119,   120,
     120,   120,   121,   121,   121,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   125,   125,   125,   125,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   131,   132,   132,   132,   132,
     133,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   138,   138,   138,
     139,   139,   140,   141,   142,   143,   144,   144,   145,   145,
     145,   145,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   152,   153,   153,   154,   155,   156,   156,   157,
     157,   158,   158,   159,   159,   160,   160,   161,   161,   162,
     162,   163,   164,   164,   165,   165,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     180,   180,   181,   181,   182,   182,   182,   182,   182,   183,
     183,   184,   184,   185,   185,   185,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   190,   190,   191,   191,   192,
     192,   192,   193,   194,   194,   195,   195,   196,   196,   197,
     198,   199,   199,   200,   200,   200,   200,   201,   202,   202,
     203,   203,   204,   205,   205,   206,   206,   207,   208,   209,
     209,   209,   209,   209,   210,   210,   211,   211,   212,   213,
     213,   214,   214,   214,   214,   214,   215,   215,   215,   216,
     216,   216,   216,   216,   217,   217,   217,   217,   217,   217,
     218,   218,   218,   218,   218,   219,   219,   219,   219,   219,
     219,   219,   220,   220,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   225,   226,   226,   226,   227,   227,
     228,   228,   228,   229,   230,   230,   230,   231,   231,   232,
     232,   232,   233,   233,   233,   234,   234,   234,   235,   235,
     236,   236,   237,   237,   237,   238,   238,   238,   238,   238,
     239,   240,   240,   241,   241,   241,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   248,   248,   248,   249,
     249,   250,   250,   250,   251,   251,   251,   252,   252,   252,
     253,   253,   254,   254,   254,   255,   255,   255,   255,   255,
     256,   257,   257,   258,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   263
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     3,     1,     1,     3,     1,
       1,     2,     1,     3,     2,     5,     0,     2,     1,     3,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     4,     4,     1,     1,     4,     1,     3,     3,
       1,     4,     4,     4,     1,     3,     3,     1,     3,     1,
       4,     4,     1,     3,     3,     1,     4,     4,     1,     3,
       3,     1,     4,     4,     1,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     4,     4,     1,     4,     1,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     5,     3,     1,     1,     2,     1,     1,
       1,     1,     2,     2,     3,     1,     3,     1,     3,     1,
       3,     2,     2,     2,     3,     3,     1,     2,     4,     2,
       3,     3,     5,     2,     3,     1,     1,     1,     3,     1,
       4,     1,     1,     3,     1,     4,     1,     3,     3,     1,
       4,     1,     3,     1,     4,     1,     3,     5,     1,     4,
       1,     3,     1,     3,     1,     4,     3,     5,     1,     4,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       3,     5,     1,     4,     1,     1,     1,     1,     3,     1,
       1,     3,     4,     6,     6,     6,     6,     6,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     2,     1,     1,     1,     1,     2,     2,     3,
       1,     3,     2,     2,     3,     3,     6,     3,     1,     1,
       4,     4,     5,     5,     0,     3,     1,     3,     5,     1,
       3,     1,     4,     4,     5,     5,     1,     3,     3,     1,
       4,     4,     5,     5,     1,     2,     4,     4,     3,     3,
       1,     4,     4,     5,     5,     4,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     2,     2,     1,     2,     2,     1,     3,
       1,     1,     3,     1,     1,     4,     4,     1,     3,     1,
       4,     4,     1,     3,     3,     1,     4,     4,     1,     3,
       1,     2,     1,     4,     4,     1,     4,     1,     1,     3,
       1,     1,     2,     1,     1,     1,     1,     2,     4,     2,
       3,     5,     3,     1,     1,     1,     1,     4,     4,     1,
       3,     1,     4,     4,     1,     3,     3,     1,     4,     4,
       1,     2,     1,     4,     4,     4,     1,     1,     1,     3,
       1,     1,     2,     1,     1,     1,     2,     4,     2,     3,
       4,     7,     1,     1,     3,     5
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,    36,    37,    38,    39,
      40,     0,     0,     0,    32,     3,    13,     0,    16,    17,
      14,    20,    33,    34,     0,     0,     0,     0,   115,     0,
     116,     0,   112,   113,     0,     0,     0,   107,   114,     4,
      44,    45,    50,    57,    62,    68,    74,    80,    82,    84,
      86,    89,    93,    96,   103,   108,   109,   110,     0,     0,
       0,     0,     0,     5,   125,   126,   128,   129,   130,   131,
     146,   156,   159,     6,   155,   157,     0,   209,   210,     0,
       0,     0,     0,     0,     0,   107,     0,   205,     7,   161,
     162,   164,   166,   171,   175,   180,   190,   194,   204,   206,
     207,     0,     0,     0,   243,     8,   240,   241,   244,   245,
     246,     0,     0,     0,   393,    11,   390,   391,   394,   395,
       0,     0,     0,     0,   297,   298,     0,     0,     0,     0,
       0,   300,   299,   296,     9,   258,   259,   269,   276,   284,
     137,     0,     0,    12,     0,     0,   353,   354,    10,   350,
     351,   355,   356,     1,     0,    26,    21,    22,     0,     0,
       0,     0,     0,    98,     0,     0,   100,    97,    99,     0,
     105,     0,   107,   105,     0,     0,   120,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   132,     0,   135,     0,   141,
       0,   142,     0,     0,   147,     0,   127,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   247,     0,     0,
     252,     0,     0,   242,     0,   402,   403,   396,     0,     0,
       0,   392,     0,     0,     0,     0,   290,   285,     0,     0,
       0,   347,   348,     0,     0,     0,   318,   345,     0,   303,
     304,     0,   308,     0,   312,   315,   320,   323,   324,   327,
     332,   338,   340,     0,     0,     0,     0,   264,   264,     0,
       0,     0,     0,     0,   153,     0,     0,     0,     0,   107,
       0,     0,   357,     0,   352,    35,     0,     0,    24,     0,
       0,     0,     0,    15,    18,    19,     0,     0,   111,     0,
     117,     0,     0,   118,     0,   119,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,    59,    58,     0,     0,
      65,    63,    64,     0,     0,    71,    69,    70,    76,    75,
      78,    77,    79,    83,    85,    81,    87,    88,    92,    90,
      91,    94,    95,     0,     0,     0,   133,     0,     0,   143,
       0,     0,     0,     0,   149,     0,   158,   208,     0,   218,
       0,     0,   235,     0,     0,     0,   220,     0,     0,   225,
       0,     0,   211,   107,     0,     0,   178,   176,   188,     0,
     180,   182,   192,   194,   163,     0,   169,   168,   167,     0,
     172,   173,     0,     0,   184,   181,   191,     0,     0,   198,
     195,     0,     0,   248,     0,     0,     0,   253,   257,     0,
       0,     0,   398,     0,   404,     0,     0,   264,   264,   301,
       0,     0,     0,   342,   341,     0,   320,     0,     0,     0,
       0,     0,   313,   314,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   289,   288,     0,     0,
       0,     0,   271,   270,     0,     0,     0,     0,   279,   277,
     278,   138,    56,   154,     0,     0,     0,     0,   359,    27,
      32,    30,     0,    28,    23,    41,    42,    43,     0,     0,
     106,   124,   122,     0,   121,     0,    51,    55,    52,    53,
       0,     0,    46,     0,     0,     0,     0,     0,     0,   104,
     136,   134,   145,   144,   148,     0,   151,   150,   160,   165,
       0,     0,   233,   239,     0,   237,     0,     0,     0,     0,
     222,     0,     0,     0,   227,   229,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
     251,   249,   255,     0,   254,   397,     0,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   319,   349,     0,
       0,     0,   286,     0,   321,   305,   306,   310,   320,   309,
       0,     0,   329,   328,   339,     0,     0,   335,   333,   334,
     287,   260,   261,   295,     0,     0,   266,     0,     0,     0,
       0,   264,   264,     0,     0,   264,   264,   358,     0,   363,
     364,   362,   360,     0,     0,    26,   101,   102,   123,    49,
      48,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,     0,   236,     0,     0,     0,     0,   221,     0,     0,
       0,   226,     0,     0,     0,     0,   177,     0,   183,   193,
       0,   202,   197,     0,     0,     0,   186,     0,     0,   200,
       0,     0,     0,   405,     0,     0,   387,   388,     0,     0,
       0,   386,   400,   365,   366,   369,   374,   380,     0,   291,
     292,     0,     0,     0,     0,   325,   326,   346,     0,     0,
     316,   317,     0,     0,     0,     0,     0,     0,     0,   265,
     263,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    29,    25,    60,    61,    66,    67,    72,    73,
     152,   213,   234,   238,   217,   214,   224,   223,   215,   232,
     228,   230,   231,   216,   179,   189,     0,     0,     0,   170,
     174,   185,     0,   199,     0,   140,     0,     0,     0,   382,
     381,     0,     0,     0,     0,     0,     0,     0,     0,   294,
     293,   343,   344,   322,   307,   311,     0,     0,     0,     0,
       0,   267,   272,   273,     0,     0,   280,   281,     0,     0,
     361,     0,     0,     0,   187,   201,   256,     0,     0,   389,
       0,     0,     0,     0,     0,   371,   370,     0,     0,   377,
     375,   376,     0,   330,   331,   336,   337,     0,   275,   274,
     283,   282,   203,     0,     0,   367,   368,   385,     0,     0,
       0,     0,   401,   268,   383,   384,     0,     0,     0,     0,
     372,   373,   378,   379
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    12,   501,    26,    27,    28,    29,    30,   166,   167,
     318,   502,   503,    31,    32,    33,   180,    50,   342,   343,
      51,   188,   189,    52,   347,    53,   351,    54,   356,    55,
      56,    57,    58,    59,    60,    61,    62,   177,    63,   385,
      64,    65,    66,   185,   186,    67,   187,    73,    74,   114,
      76,   215,   216,   152,   570,    77,    78,   219,   220,    79,
      80,   224,   225,   153,   277,    84,    97,    98,    99,   100,
     101,   417,   102,   420,   103,   754,   104,   408,   425,   755,
     105,   411,   106,   412,   430,   672,   107,   108,   109,   110,
     391,   398,   549,   550,   401,   553,   554,   555,   543,   394,
     544,   545,   115,   116,   117,   118,   247,   248,   119,   250,
     251,   120,   144,   145,   474,   615,   616,   146,   483,   147,
     489,   148,   267,   149,   278,   279,   595,   280,   281,   282,
     283,   284,   285,   598,   287,   288,   603,   289,   608,   290,
     291,   454,   292,   158,   159,   160,   161,   162,   312,   313,
     631,   692,   693,   694,   816,   695,   820,   696,   770,   697,
     125,   126,   127,   128,   257,   258,   259,   129
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -708
static const short int yypact[] =
{
    1321,    -3,   960,  1404,   362,    55,   561,   233,   349,   460,
       9,   109,   110,  -708,   960,    41,  -708,  -708,  -708,  -708,
    -708,    96,   126,   146,  -708,  -708,  -708,   187,   190,  -708,
      68,  -708,  -708,  -708,   782,  1505,   782,  1404,  -708,  1404,
    -708,  1447,  -708,  -708,     9,     9,     9,  -708,  -708,  -708,
     159,  -708,  -708,   216,   188,   294,    57,   226,   228,   168,
      47,   152,  -708,   212,  -708,  -708,  -708,  -708,   164,     9,
       9,     9,  1404,  -708,   362,  -708,  -708,  -708,  -708,  -708,
    -708,  -708,   219,  -708,   232,  -708,   825,  -708,  -708,     9,
     239,   250,   262,   298,   301,  1235,   337,  -708,  -708,  -708,
     341,  -708,   170,  -708,  -708,   174,  -708,   333,  -708,  -708,
    -708,     9,   297,   561,  -708,  -708,   233,  -708,  -708,  -708,
    -708,     9,   231,   305,  -708,  -708,   349,  -708,  -708,  -708,
    1599,   460,   162,   162,  -708,  -708,     9,     9,   364,   326,
     347,   411,   429,  -708,  -708,  -708,  -708,   419,   355,  -708,
    -708,   444,   352,     9,     9,  1462,  -708,  -708,  -708,   109,
    -708,  -708,  -708,  -708,   458,   215,   455,  -708,   960,   960,
     960,   960,   960,  -708,     9,     9,  -708,  -708,  -708,   477,
    -708,   145,   518,   535,    51,    58,  -708,   494,   405,  -708,
     415,   420,   474,  1520,  1563,  1563,  1578,  1578,   782,   782,
     782,   782,   782,   782,   782,   782,   782,   782,   782,   782,
     782,   782,   782,  1404,   545,   164,   547,   553,   453,     9,
     566,     9,    22,    79,  1404,   568,  -708,  1404,   305,   337,
     546,   470,   461,   463,   461,   465,   467,  1389,   896,   561,
     961,   961,  1020,  1078,   782,  1144,   488,     9,   573,   102,
     297,   588,   592,  -708,    30,  -708,  -708,   231,   599,   506,
     613,  -708,     9,     9,   527,   536,  -708,  -708,   597,    99,
     162,  -708,  -708,     9,     9,   609,   230,  -708,   607,  -708,
    -708,   637,  -708,   241,  -708,  -708,   282,  -708,  -708,   644,
     623,   501,  -708,   626,   493,   495,  1404,   636,   636,   782,
     782,  1636,  1663,  1663,  -708,   611,   960,   651,    21,    71,
     688,   685,  1462,   678,  -708,  -708,   622,  1017,  -708,    41,
     676,   680,   683,  -708,  -708,  -708,   500,   505,  -708,  1404,
    -708,   960,  1404,  -708,  1404,  -708,  1404,  1404,     9,  1404,
    1404,   699,    42,  -708,     9,     9,  -708,  -708,     9,     9,
    -708,  -708,  -708,     9,     9,  -708,  -708,  -708,  -708,  -708,
    -708,  -708,  -708,   510,   510,  -708,    47,    47,   152,   152,
     152,  -708,  -708,   140,   960,   700,  -708,   960,   715,  -708,
    1404,  1404,  1404,   717,  -708,   176,  -708,  -708,   561,  -708,
       9,   721,  -708,   666,   732,   739,  -708,   691,   745,  -708,
     708,   761,  -708,   699,   184,     9,  -708,  -708,  -708,   789,
     214,   784,  -708,    60,  -708,     9,  -708,  -708,  -708,     9,
    -708,  -708,     9,   806,  -708,  -708,  -708,     9,   810,  -708,
    -708,   960,   794,  -708,   561,     9,   801,  -708,  -708,   231,
     305,   802,  -708,   182,  -708,   509,   511,   636,   636,  -708,
     319,     9,     9,  -708,  -708,   797,   803,   522,   524,  1404,
    1599,   224,   246,   273,   224,   587,   782,   612,   612,  1599,
     460,   460,   804,   751,   815,   816,  -708,  -708,     9,     9,
     757,   760,  -708,  -708,     9,     9,   763,   764,  -708,  -708,
    -708,  -708,  -708,  -708,  1462,   305,    52,   819,  -708,  -708,
     827,  -708,   191,  -708,  -708,  -708,  -708,  -708,  1505,  1505,
    -708,  -708,  -708,   535,  -708,   817,  -708,  -708,  -708,  -708,
    1404,   474,  -708,   526,   529,   531,   533,   548,   560,  -708,
    -708,  -708,  -708,  -708,  1404,   834,  -708,  -708,  -708,  -708,
      63,   561,  -708,   830,    66,  -708,   561,   561,   857,    72,
    -708,   561,   832,    78,  -708,   865,   561,  -708,   562,  1202,
    1273,   782,  1331,   564,   574,   581,  1273,   583,  1331,   866,
    -708,  -708,  -708,   192,  -708,   231,   848,  -708,   673,     9,
    1599,  1599,   852,   853,   803,   585,   593,   293,  -708,   319,
     319,   846,  -708,   162,  -708,  -708,   860,   340,  -708,   861,
       9,     9,  -708,  -708,  -708,     9,     9,  -708,  -708,  -708,
    -708,  -708,  -708,  -708,   858,   206,  -708,   460,   460,   600,
     604,   636,   636,   627,   632,   636,   636,  1462,   867,  -708,
    -708,  -708,  -708,   960,  1017,   862,  -708,  -708,  -708,  -708,
    -708,  1520,  1520,  1563,  1563,  1578,  1578,  1404,  -708,   851,
     809,   666,  -708,   854,   855,   820,   691,  -708,   870,   666,
     708,  -708,    62,   872,   896,     9,  -708,     9,  -708,  -708,
       9,  -708,  -708,   961,  1020,  1078,  -708,   877,  1144,  -708,
     889,   960,   885,  -708,   686,   673,  -708,  -708,     9,     9,
     876,  -708,  -708,  -708,  -708,   897,   649,  -708,   208,  -708,
    -708,  1599,  1599,    99,    99,  -708,  -708,  -708,   878,   224,
    -708,  -708,   224,   643,   652,   657,   668,   960,   751,  -708,
    -708,  -708,  1636,  1636,   890,   891,  1663,  1663,   892,   893,
      52,  -708,  -708,  -708,  -708,  -708,  -708,  -708,  -708,  -708,
    -708,  -708,  -708,  -708,  -708,  -708,  -708,  -708,  -708,   830,
    -708,  -708,  -708,  -708,  -708,  -708,   679,   696,   701,  -708,
    -708,  -708,  1078,  -708,  1144,  -708,   561,     9,     9,  -708,
    -708,   886,   705,   707,  1404,  1222,  1609,  1609,   898,  -708,
    -708,  -708,  -708,  -708,  -708,  -708,   587,   587,   612,   612,
     899,  -708,  -708,  -708,  1636,  1636,  -708,  -708,  1663,  1663,
    -708,  1202,  1273,  1331,  -708,  -708,  -708,   725,   731,  -708,
     673,   673,   894,     9,     9,  -708,  -708,     9,     9,  -708,
    -708,  -708,   673,  -708,  -708,  -708,  -708,  1404,  -708,  -708,
    -708,  -708,  -708,   686,   686,  -708,  -708,  -708,   735,   742,
     744,   754,  -708,  -708,  -708,  -708,  1222,  1222,  1609,  1609,
    -708,  -708,  -708,  -708
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -708,  -708,     3,   762,   497,  -708,   770,  -148,  -708,   616,
     308,  -708,   310,  -708,  -708,  -708,    12,  -708,   695,   426,
     160,   534,    24,  -190,   150,  -186,  -165,  -171,  -162,  -708,
     183,  -708,  -708,   595,   594,   202,   186,   295,  -708,    18,
    -708,  -708,  -708,  -708,   617,  -708,  -708,  -708,  -708,    56,
    -708,  -708,   740,   -18,  -708,  -708,  -708,   884,   200,  -708,
    -708,   577,  -187,     1,   953,  -708,    -5,   -74,   720,   572,
    -197,  -230,  -708,   288,  -232,  -209,  -241,  -708,  -518,  -207,
    -224,  -708,  -217,  -521,  -536,  -526,  -231,  -450,  -708,  -708,
     729,  -708,  -708,   309,  -708,  -708,   304,  -708,   311,  -708,
    -708,   317,  -708,  -708,   856,    50,  -708,   724,  -708,  -708,
     723,  -708,   843,  -401,  -258,  -708,   257,  -300,  -643,  -280,
    -290,  -111,  -433,  -708,   863,  -254,   275,  -708,  -399,  -708,
    -398,  -708,  -708,  -112,   220,  -432,    25,  -413,  -423,  -708,
    -211,   111,  -708,  -708,  -708,   835,  -708,  -708,   499,  -294,
     265,  -614,     8,  -707,   -13,  -695,  -689,  -628,     2,  -708,
    -708,  -708,   871,  -708,   559,  -219,  -708,  -708
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -323
static const short int yytable[] =
{
      85,   482,   424,   346,   143,    25,   406,   413,   350,   350,
     421,   418,   230,   490,   410,    49,   455,   164,   497,   266,
     286,   286,   488,   488,   325,   355,   355,   592,   429,   407,
     352,   409,   679,   602,   151,   357,   610,   383,   441,   252,
     475,   671,   680,   416,   416,   609,   630,   671,   676,   179,
     217,   218,   218,   183,   607,   607,   769,   181,   453,   184,
      75,   157,   596,   597,   124,   599,   597,   156,   815,   611,
     612,   771,   222,   198,   199,   208,   521,   380,   380,   792,
     793,   819,   819,   -19,   223,   329,   380,  -196,   821,   439,
     440,    13,   334,   246,   381,   151,  -107,   305,   179,  -194,
     651,   562,   333,   150,   200,   201,   656,   494,   -19,   335,
     163,   382,   660,   227,   648,   150,   150,   652,   260,   209,
     210,   522,   254,   657,   150,   143,   143,    85,    85,   661,
     226,   202,    87,    88,   434,   165,    81,   269,   168,   815,
     815,   450,   763,   751,   435,   151,    82,   699,   700,    82,
     311,   828,   829,   819,   819,   308,   752,   761,   456,   852,
     853,    68,    69,    70,   154,    72,   111,   310,   169,   271,
     272,   320,   321,   322,   329,   451,   452,   307,   151,   329,
      81,   211,   124,   529,   240,   212,   205,   275,   170,   582,
     583,   330,    96,    82,   241,   155,   242,   217,   206,   207,
     269,   218,   171,   218,   270,   769,   769,   243,   842,   157,
     329,   194,   195,   244,   578,   156,   720,   721,   521,   538,
     173,   176,   178,   386,   579,   634,   338,   557,   805,   246,
     172,   373,   271,   272,   635,   682,   223,   192,   273,   274,
     718,   193,   338,    81,   804,   203,   307,   560,   204,   719,
     275,   778,   316,   244,   213,   276,    82,   317,   214,  -321,
    -321,   227,   269,  -321,    85,    85,   593,   763,   779,   780,
     462,   463,   229,   228,   464,  -316,  -316,   832,   307,  -316,
     630,   232,   671,   325,   761,    68,    69,    70,    71,    72,
     111,   112,   233,   113,   271,   272,   143,   143,   143,    96,
     273,   274,  -317,  -317,   234,    81,  -317,   311,   472,   492,
     596,   597,   275,   785,   597,   196,   197,   594,    82,   424,
     255,   256,  -322,  -322,   310,   424,  -322,   406,  -302,   413,
    -302,   413,   307,   497,   511,   413,   410,   413,   584,   708,
     235,   510,   410,   236,   512,   429,   513,   383,   515,   266,
     666,   429,   238,   668,   602,   602,   441,   269,   266,   677,
     572,   450,   517,   724,   725,   825,   826,   728,   729,   710,
     711,   239,   540,   712,   245,   607,   607,   530,   302,   303,
     532,   358,   359,   360,   361,   362,   305,   306,   365,   271,
     272,   249,   223,   535,   536,   273,   274,   371,   372,    82,
      81,    68,    69,    70,   121,    72,   296,   275,   122,   123,
     368,   369,   370,    82,    68,    69,    70,    71,    72,   378,
     297,   378,   482,   482,    96,    96,    96,    96,    96,   423,
     426,   428,   406,   413,   424,   576,   796,   797,   337,   338,
     410,   298,   421,   759,   301,    85,   488,   488,   339,   338,
     299,   346,   346,   340,   338,   143,    85,   350,   350,    85,
      85,   429,    85,    85,   143,   143,   143,   649,   300,   266,
     266,   591,   653,   654,   355,   355,   416,   658,   736,   737,
     304,   456,   663,   738,   739,   476,   477,   305,   377,   311,
     628,   629,   453,   453,   482,   482,   319,   516,   130,   518,
     519,   315,   131,   388,   338,   132,   310,   133,   830,   831,
     389,   390,   392,   393,   396,   397,   399,   400,   488,   488,
     328,   424,   305,   431,   467,   468,   470,   338,   471,   338,
     134,   135,   639,   508,   338,   336,   136,   137,   509,   338,
     206,   207,   580,   338,   581,   338,   223,   429,   138,   139,
     140,   141,   142,   331,    82,   589,   338,   590,   338,   641,
     338,   424,   642,   338,   643,   338,   644,   338,   341,   406,
     332,   413,   413,   691,    96,   143,   143,   374,   410,   190,
     191,   645,   338,   376,    85,    85,   429,   305,    85,   387,
     266,   266,    34,   646,   338,   664,   338,   673,   338,    35,
     443,    36,   379,    86,   384,    38,    39,   674,   338,   433,
      40,    41,   143,   143,   675,   338,   678,   338,   703,   338,
      96,   447,   311,   231,   437,   269,   704,   338,   438,   450,
     448,    42,    43,   722,   338,   442,   731,   723,   338,   310,
     449,    87,    88,    89,    90,    91,    92,    93,    94,   444,
     269,   459,   604,   460,   450,    95,    48,   271,   272,   740,
     726,   338,   466,   600,   601,   727,   338,   461,    81,   465,
     294,   295,   776,   777,   469,   275,   786,   338,   473,   691,
     691,    82,   271,   272,   765,   787,   338,   493,   605,   606,
     788,   338,   806,    81,   176,   176,   143,   143,    85,    85,
     275,   789,   338,   495,    85,   491,    82,    85,   326,   327,
     496,   684,   801,   338,   498,   685,   499,   143,   143,   505,
     790,   143,   143,   506,   684,   629,   507,    96,   685,   802,
     338,   520,    96,    96,   803,   338,   531,    96,   810,   338,
     811,   338,    96,   686,   687,    96,   423,   669,   428,   688,
     689,   533,   423,   537,   428,   541,   686,   687,   833,   338,
     542,   690,   767,   768,   834,   338,   546,    82,   846,   338,
     691,   691,   691,   547,   690,   847,   338,   848,   338,   551,
      82,    85,    85,    85,    85,   548,   812,   849,   338,   143,
     143,   734,   735,   143,   143,   556,   445,   446,   363,   364,
     366,   367,   552,   636,   637,   691,   691,   457,   458,   705,
     706,   823,   824,    34,   781,   782,   559,   691,   835,   836,
      35,   566,    36,   561,    37,   568,    38,    39,   691,   691,
     571,    40,    41,   850,   851,   844,   845,   574,   577,   843,
     587,   691,   691,   691,   691,   614,   588,   613,   617,   618,
      96,   621,    42,    43,   622,   632,    34,   625,   626,    96,
      96,   423,   633,    35,   428,    36,   647,    86,   638,    38,
      39,   650,   655,   659,    40,    41,    47,    48,   523,   524,
     662,   681,   525,   526,   683,   701,   702,   527,   528,   707,
     709,  -311,   730,   717,   741,    42,    43,   744,   745,   316,
      44,    45,    46,   742,   762,    87,    88,    89,    90,    91,
      92,    93,    94,   748,   746,   753,   764,   766,   774,    95,
      48,   783,   775,   794,   795,   798,   799,    34,   569,   809,
     822,   827,   404,   323,    35,   504,    36,   837,    86,   558,
      38,    39,   324,   733,   732,    40,    41,   640,   423,   563,
     428,   514,    96,   564,   221,   375,   565,   534,    83,   414,
     539,   567,   760,   395,   750,   747,    42,    43,   743,   573,
     749,   432,   253,   436,   268,   791,    87,    88,   405,    90,
      91,    92,    93,    94,   784,   585,   586,    96,   423,   428,
      95,    48,    34,   627,   314,   800,   293,   261,   575,    35,
       0,    36,    14,    86,     0,    38,    39,     0,     0,     0,
      40,    41,   619,   620,     0,     0,     0,     0,   623,   624,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,   415,    90,    91,    92,    93,    94,     0,
       0,    34,     0,     0,    24,    95,    48,     0,    35,    14,
      36,     0,    86,     0,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,   419,    90,    91,    92,    93,    94,     0,    34,
       0,   500,     0,   698,    95,    48,    35,     0,    36,     0,
      86,     0,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,   713,   714,     0,     0,     0,   715,
     716,     0,     0,     0,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
     422,    90,    91,    92,    93,    94,     0,     0,     0,     0,
       0,     0,    95,    48,     0,    34,     0,     0,     0,     0,
       0,     0,    35,     0,    36,     0,    86,     0,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,   756,
       0,   757,     0,     0,   758,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,   772,   773,    87,    88,   427,    90,    91,    92,
      93,    94,     0,    34,     0,  -159,     0,     0,    95,    48,
      35,     0,    36,     0,    86,     0,    38,    39,     0,  -159,
       0,    40,    41,     0,     0,     0,     0,     0,     0,  -107,
     684,  -159,  -159,     0,   685,  -107,     0,     0,  -107,     0,
       0,  -159,    42,    43,  -159,     0,  -159,   237,  -107,     0,
       0,     0,    87,    88,   665,    90,    91,    92,    93,    94,
       0,     0,   686,   687,     0,     0,    95,    48,   813,   814,
       0,   807,   808,     0,    34,     0,     0,     0,     0,     0,
     690,    35,     0,    36,     0,    86,    82,    38,    39,     0,
       0,     0,    40,    41,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,     0,     0,   838,   839,     0,
       0,   840,   841,    87,    88,   667,    90,    91,    92,    93,
      94,     0,    34,     0,     0,     0,     0,    95,    48,    35,
       0,    36,     0,    86,     0,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,   670,    90,    91,    92,    93,    94,     0,
      34,     0,     0,     0,     0,    95,    48,    35,     0,    36,
       0,    37,   402,    38,    39,    34,     0,     0,    40,    41,
       0,     0,    35,     0,    36,     0,    37,     0,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,     0,    42,
      43,     0,     0,     0,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,     0,    34,    44,
      45,    46,     0,   403,    48,    35,     0,    36,     0,    37,
       0,    38,    39,    34,     0,     0,    40,    41,    47,    48,
      35,     0,    36,     0,    37,     0,    38,    39,     0,     0,
       0,    40,    41,     0,     0,     0,     0,    42,    43,     0,
       0,     0,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,    34,    44,    45,    46,
       0,   182,    48,    35,     0,    36,     0,    37,     0,    38,
      39,    34,     0,     0,    40,    41,   309,    48,    35,     0,
      36,     0,    37,     0,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,    42,    43,     0,     0,     0,
       0,   174,   175,     0,     0,     0,     0,     0,     0,     0,
      42,    43,     0,     0,    34,     0,   344,   345,     0,    47,
      48,    35,     0,    36,     0,    37,     0,    38,    39,    34,
       0,     0,    40,    41,    47,    48,    35,     0,    36,     0,
      37,     0,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,    42,    43,     0,     0,   130,     0,   348,
     349,   131,     0,     0,   132,     0,   133,   684,    42,    43,
       0,   685,     0,     0,   353,   354,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     135,     0,    47,    48,   130,   262,   263,     0,   131,   686,
     687,   132,     0,   133,     0,   817,   818,   138,   264,   265,
     141,   142,     0,    82,     0,     0,     0,   690,     0,     0,
       0,   130,     0,    82,     0,   131,   134,   135,   132,     0,
     133,     0,   478,   479,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   480,   481,   141,   142,     0,
      82,     0,     0,   134,   135,     0,     0,     0,     0,   484,
     485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   138,   486,   487,   141,   142,     0,    82
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     3,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   159,     0,   159,     0,   159,     0,   107,     0,   159,
       0,    21,     0,   107,     0,   310,     0,   159,     0,   107,
       0,   196,     0,   310,     0
};

static const short int yycheck[] =
{
       5,   301,   243,   193,     9,     2,   238,   238,   194,   195,
     242,   241,    86,   303,   238,     3,   270,    14,   312,   130,
     132,   133,   302,   303,   172,   196,   197,   460,   245,   238,
     195,   238,   568,   465,    10,   197,   469,   224,   257,   113,
     298,   562,   568,   240,   241,   468,   496,   568,   566,    37,
      68,    69,    70,    41,   467,   468,   684,    39,   269,    41,
       4,    11,   461,   461,     8,   464,   464,    11,   775,   470,
     471,   685,    71,    16,    17,    28,    34,    56,    56,   722,
     723,   776,   777,    15,    72,    34,    56,    27,   777,    59,
      60,    94,    34,   111,    15,    71,    25,    34,    86,    39,
      34,    41,    51,    94,    47,    48,    34,    86,    40,    51,
       0,    32,    34,    42,    51,    94,    94,    51,   123,    72,
      73,    79,   121,    51,    94,   130,   131,   132,   133,    51,
      74,    74,    80,    81,    32,    94,    81,    38,    42,   846,
     847,    42,   678,    81,    42,   121,    94,   580,   581,    94,
     155,   794,   795,   848,   849,   154,    94,   675,   270,   848,
     849,    52,    53,    54,    55,    56,    57,   155,    42,    70,
      71,   168,   169,   170,    34,    76,    77,   153,   154,    34,
      81,    29,   126,    43,    14,    33,    18,    88,    42,   447,
     448,    46,     6,    94,    24,    86,    26,   215,    30,    31,
      38,   219,    15,   221,    42,   833,   834,    33,   822,   159,
      34,    23,    24,    39,    32,   159,   617,   618,    34,    43,
      34,    35,    36,   228,    42,    34,    34,    43,   764,   247,
      40,   213,    70,    71,    43,    43,   224,    78,    76,    77,
      34,    25,    34,    81,   762,    19,   222,    33,    20,    43,
      88,    43,    37,    39,    42,    93,    94,    42,    94,    29,
      30,    42,    38,    33,   269,   270,    42,   803,   701,   702,
      29,    30,    86,    41,    33,    29,    30,   803,   254,    33,
     730,    42,   803,   431,   802,    52,    53,    54,    55,    56,
      57,    58,    42,    60,    70,    71,   301,   302,   303,   113,
      76,    77,    29,    30,    42,    81,    33,   312,   296,   306,
     709,   709,    88,   712,   712,    21,    22,    93,    94,   560,
      89,    90,    29,    30,   312,   566,    33,   559,    46,   560,
      48,   562,   308,   627,   331,   566,   560,   568,   450,   593,
      42,   329,   566,    42,   332,   562,   334,   534,   336,   460,
     559,   568,    15,   560,   786,   787,   575,    38,   469,   566,
     434,    42,   338,   621,   622,   788,   789,   625,   626,    29,
      30,    30,   390,    33,    41,   788,   789,   374,    23,    24,
     377,   198,   199,   200,   201,   202,    34,    35,   205,    70,
      71,    94,   380,   381,   382,    76,    77,   211,   212,    94,
      81,    52,    53,    54,    55,    56,    42,    88,    59,    60,
     208,   209,   210,    94,    52,    53,    54,    55,    56,   219,
      94,   221,   722,   723,   238,   239,   240,   241,   242,   243,
     244,   245,   664,   664,   675,   440,   726,   727,    33,    34,
     664,    94,   674,   673,    25,   450,   726,   727,    33,    34,
      39,   641,   642,    33,    34,   460,   461,   643,   644,   464,
     465,   678,   467,   468,   469,   470,   471,   541,    39,   580,
     581,   459,   546,   547,   645,   646,   673,   551,   643,   644,
      36,   593,   556,   645,   646,   299,   300,    34,    35,   494,
     495,   496,   703,   704,   794,   795,    41,   337,    38,   339,
     340,    43,    42,    33,    34,    45,   494,    47,   798,   799,
      49,    50,    49,    50,    49,    50,    49,    50,   798,   799,
      43,   762,    34,    35,    23,    24,    33,    34,    33,    34,
      70,    71,   520,    33,    34,    41,    76,    77,    33,    34,
      30,    31,    33,    34,    33,    34,   534,   764,    88,    89,
      90,    91,    92,    35,    94,    33,    34,    33,    34,    33,
      34,   802,    33,    34,    33,    34,    33,    34,    94,   801,
      35,   802,   803,   578,   388,   580,   581,    32,   802,    45,
      46,    33,    34,    36,   589,   590,   803,    34,   593,    43,
     701,   702,    31,    33,    34,    33,    34,    33,    34,    38,
      94,    40,    36,    42,    36,    44,    45,    33,    34,    36,
      49,    50,   617,   618,    33,    34,    33,    34,    33,    34,
     434,    94,   627,    89,    36,    38,    33,    34,    36,    42,
      94,    70,    71,    33,    34,    36,   633,    33,    34,   627,
      43,    80,    81,    82,    83,    84,    85,    86,    87,    36,
      38,    42,   466,    46,    42,    94,    95,    70,    71,   647,
      33,    34,    39,    76,    77,    33,    34,    30,    81,    25,
     136,   137,    23,    24,    48,    88,    33,    34,    42,   684,
     685,    94,    70,    71,   681,    33,    34,    36,    76,    77,
      33,    34,   766,    81,   508,   509,   701,   702,   703,   704,
      88,    33,    34,    15,   709,    94,    94,   712,   174,   175,
      25,    38,    33,    34,    36,    42,    94,   722,   723,    43,
     717,   726,   727,    43,    38,   730,    43,   541,    42,    33,
      34,    32,   546,   547,    33,    34,    36,   551,    33,    34,
      33,    34,   556,    70,    71,   559,   560,   561,   562,    76,
      77,    36,   566,    36,   568,    34,    70,    71,    33,    34,
      94,    88,    76,    77,    33,    34,    34,    94,    33,    34,
     775,   776,   777,    34,    88,    33,    34,    33,    34,    34,
      94,   786,   787,   788,   789,    94,   774,    33,    34,   794,
     795,   641,   642,   798,   799,    34,   262,   263,   203,   204,
     206,   207,    94,   508,   509,   810,   811,   273,   274,   589,
     590,   786,   787,    31,   703,   704,    27,   822,   810,   811,
      38,    15,    40,    39,    42,    15,    44,    45,   833,   834,
      36,    49,    50,   846,   847,   833,   834,    36,    36,   827,
      43,   846,   847,   848,   849,    94,    43,    43,    33,    33,
     664,    94,    70,    71,    94,    36,    31,    94,    94,   673,
     674,   675,    35,    38,   678,    40,    32,    42,    51,    44,
      45,    41,    15,    41,    49,    50,    94,    95,   344,   345,
      15,    15,   348,   349,    36,    33,    33,   353,   354,    43,
      30,    30,    25,    35,    43,    70,    71,    43,    43,    37,
      75,    76,    77,    94,    27,    80,    81,    82,    83,    84,
      85,    86,    87,    43,    94,    43,    27,    32,    42,    94,
      95,    43,    25,    33,    33,    33,    33,    31,   431,    43,
      32,    32,   237,   171,    38,   319,    40,    43,    42,   405,
      44,    45,   172,   635,   634,    49,    50,   521,   762,   415,
     764,   334,   766,   419,    70,   215,   422,   380,     5,   239,
     388,   427,   674,   234,   660,   656,    70,    71,   651,   435,
     659,   247,   116,   250,   131,   718,    80,    81,    82,    83,
      84,    85,    86,    87,   709,   451,   452,   801,   802,   803,
      94,    95,    31,   494,   159,   730,   133,   126,   439,    38,
      -1,    40,    42,    42,    -1,    44,    45,    -1,    -1,    -1,
      49,    50,   478,   479,    -1,    -1,    -1,    -1,   484,   485,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      -1,    31,    -1,    -1,    94,    94,    95,    -1,    38,    42,
      40,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    31,
      -1,    94,    -1,   579,    94,    95,    38,    -1,    40,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    -1,    -1,   600,   601,    -1,    -1,    -1,   605,
     606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,   665,
      -1,   667,    -1,    -1,   670,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,   688,   689,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    31,    -1,     0,    -1,    -1,    94,    95,
      38,    -1,    40,    -1,    42,    -1,    44,    45,    -1,    14,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      38,    26,    27,    -1,    42,    30,    -1,    -1,    33,    -1,
      -1,    36,    70,    71,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    70,    71,    -1,    -1,    94,    95,    76,    77,
      -1,   767,   768,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      88,    38,    -1,    40,    -1,    42,    94,    44,    45,    -1,
      -1,    -1,    49,    50,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,   813,   814,    -1,
      -1,   817,   818,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    31,    -1,    -1,    -1,    -1,    94,    95,    38,
      -1,    40,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      31,    -1,    -1,    -1,    -1,    94,    95,    38,    -1,    40,
      -1,    42,    43,    44,    45,    31,    -1,    -1,    49,    50,
      -1,    -1,    38,    -1,    40,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    31,    75,
      76,    77,    -1,    94,    95,    38,    -1,    40,    -1,    42,
      -1,    44,    45,    31,    -1,    -1,    49,    50,    94,    95,
      38,    -1,    40,    -1,    42,    -1,    44,    45,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    31,    75,    76,    77,
      -1,    94,    95,    38,    -1,    40,    -1,    42,    -1,    44,
      45,    31,    -1,    -1,    49,    50,    94,    95,    38,    -1,
      40,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    31,    -1,    76,    77,    -1,    94,
      95,    38,    -1,    40,    -1,    42,    -1,    44,    45,    31,
      -1,    -1,    49,    50,    94,    95,    38,    -1,    40,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    38,    -1,    76,
      77,    42,    -1,    -1,    45,    -1,    47,    38,    70,    71,
      -1,    42,    -1,    -1,    76,    77,    -1,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    94,    95,    38,    76,    77,    -1,    42,    70,
      71,    45,    -1,    47,    -1,    76,    77,    88,    89,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    38,    -1,    94,    -1,    42,    70,    71,    45,    -1,
      47,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    94
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    97,    94,    42,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    94,    98,    99,   100,   101,   102,
     103,   109,   110,   111,    31,    38,    40,    42,    44,    45,
      49,    50,    70,    71,    75,    76,    77,    94,    95,   112,
     113,   116,   119,   121,   123,   125,   126,   127,   128,   129,
     130,   131,   132,   134,   136,   137,   138,   141,    52,    53,
      54,    55,    56,   143,   144,   145,   146,   151,   152,   155,
     156,    81,    94,   160,   161,   162,    42,    80,    81,    82,
      83,    84,    85,    86,    87,    94,   132,   162,   163,   164,
     165,   166,   168,   170,   172,   176,   178,   182,   183,   184,
     185,    57,    58,    60,   145,   198,   199,   200,   201,   204,
     207,    55,    59,    60,   145,   256,   257,   258,   259,   263,
      38,    42,    45,    47,    70,    71,    76,    77,    88,    89,
      90,    91,    92,   162,   208,   209,   213,   215,   217,   219,
      94,   118,   149,   159,    55,    86,   145,   201,   239,   240,
     241,   242,   243,     0,    98,    94,   104,   105,    42,    42,
      42,    15,    40,   132,    76,    77,   132,   133,   132,   112,
     112,   135,    94,   112,   135,   139,   140,   142,   117,   118,
     117,   117,    78,    25,    23,    24,    21,    22,    16,    17,
      47,    48,    74,    19,    20,    18,    30,    31,    28,    72,
      73,    29,    33,    42,    94,   147,   148,   149,   149,   153,
     154,   153,   159,   112,   157,   158,   145,    42,    41,   132,
     163,   117,    42,    42,    42,    42,    42,    42,    15,    30,
      14,    24,    26,    33,    39,    41,   149,   202,   203,    94,
     205,   206,   163,   200,   159,    89,    90,   260,   261,   262,
     162,   258,    76,    77,    89,    90,   217,   218,   208,    38,
      42,    70,    71,    76,    77,    88,    93,   160,   220,   221,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   233,
     235,   236,   238,   220,   117,   117,    42,    94,    94,    39,
      39,    25,    23,    24,    36,    34,    35,   118,   159,    94,
     112,   162,   244,   245,   241,    43,    37,    42,   106,    41,
      98,    98,    98,    99,   102,   103,   117,   117,    43,    34,
      46,    35,    35,    51,    34,    51,    41,    33,    34,    33,
      33,    94,   114,   115,    76,    77,   119,   120,    76,    77,
     121,   122,   122,    76,    77,   123,   124,   124,   126,   126,
     126,   126,   126,   129,   129,   126,   130,   130,   131,   131,
     131,   132,   132,   135,    32,   148,    36,    35,   154,    36,
      56,    15,    32,   158,    36,   135,   162,    43,    33,    49,
      50,   186,    49,    50,   195,   186,    49,    50,   187,    49,
      50,   190,    43,    94,   114,    82,   170,   171,   173,   175,
     176,   177,   179,   182,   164,    82,   166,   167,   167,    82,
     169,   170,    82,   132,   172,   174,   132,    82,   132,   178,
     180,    35,   203,    36,    32,    42,   206,    36,    36,    59,
      60,   261,    36,    94,    36,   117,   117,    94,    94,    43,
      42,    76,    77,   236,   237,   221,   229,   117,   117,    42,
      46,    30,    29,    30,    33,    25,    39,    23,    24,    48,
      33,    33,   112,    42,   210,   210,   132,   132,    76,    77,
      89,    90,   213,   214,    76,    77,    89,    90,   215,   216,
     216,    94,    98,    36,    86,    15,    25,   245,    36,    94,
      94,    98,   107,   108,   105,    43,    43,    43,    33,    33,
     112,    98,   112,   112,   140,   112,   116,   118,   116,   116,
      32,    34,    79,   117,   117,   117,   117,   117,   117,    43,
      98,    36,    98,    36,   157,   112,   112,    36,    43,   165,
     149,    34,    94,   194,   196,   197,    34,    34,    94,   188,
     189,    34,    94,   191,   192,   193,    34,    43,   117,    27,
      33,    39,    41,   117,   117,   117,    15,   117,    15,   100,
     150,    36,   163,   117,    36,   260,   162,    36,    32,    42,
      33,    33,   210,   210,   229,   117,   117,    43,    43,    33,
      33,   112,   218,    42,    93,   222,   224,   226,   229,   224,
      76,    77,   231,   232,   132,    76,    77,   233,   234,   234,
     218,   209,   209,    43,    94,   211,   212,    33,    33,   117,
     117,    94,    94,   117,   117,    94,    94,   244,   162,   162,
     183,   246,    36,    35,    34,    43,   133,   133,    51,   112,
     115,    33,    33,    33,    33,    33,    33,    32,    51,   163,
      41,    34,    51,   163,   163,    15,    34,    51,   163,    41,
      34,    51,    15,   163,    33,    82,   171,    82,   175,   132,
      82,   179,   181,    33,    33,    33,   174,   175,    33,   180,
     181,    15,    43,    36,    38,    42,    70,    71,    76,    77,
      88,   162,   247,   248,   249,   251,   253,   255,   117,   218,
     218,    33,    33,    33,    33,   230,   230,    43,   221,    30,
      29,    30,    33,   117,   117,   117,   117,    35,    34,    43,
     209,   209,    33,    33,   210,   210,    33,    33,   210,   210,
      25,    98,   108,   106,   120,   120,   122,   122,   124,   124,
     112,    43,    94,   197,    43,    43,    94,   189,    43,   194,
     192,    81,    94,    43,   171,   175,   117,   117,   117,   167,
     169,   174,    27,   180,    27,    98,    32,    76,    77,   253,
     254,   247,   117,   117,    42,    25,    23,    24,    43,   218,
     218,   237,   237,    43,   222,   224,    33,    33,    33,    33,
      98,   212,   214,   214,    33,    33,   216,   216,    33,    33,
     246,    33,    33,    33,   174,   180,   163,   117,   117,    43,
      33,    33,   112,    76,    77,   249,   250,    76,    77,   251,
     252,   252,    32,   232,   232,   234,   234,    32,   214,   214,
     216,   216,   181,    33,    33,   248,   248,    43,   117,   117,
     117,   117,   247,   112,   254,   254,    33,    33,    33,    33,
     250,   250,   252,   252
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N) ((void) 0)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);

  switch (yyn)
    {
        case 2:

/* Line 936 of glr.c  */
#line 209 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 3:

/* Line 936 of glr.c  */
#line 214 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 4:

/* Line 936 of glr.c  */
#line 219 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 5:

/* Line 936 of glr.c  */
#line 224 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 6:

/* Line 936 of glr.c  */
#line 229 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 7:

/* Line 936 of glr.c  */
#line 234 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 8:

/* Line 936 of glr.c  */
#line 239 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 9:

/* Line 936 of glr.c  */
#line 244 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 10:

/* Line 936 of glr.c  */
#line 249 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 11:

/* Line 936 of glr.c  */
#line 254 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 12:

/* Line 936 of glr.c  */
#line 259 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).term), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list));
      spec_tree = ((*yyvalp).term);
    ;}
    break;

  case 13:

/* Line 936 of glr.c  */
#line 271 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed sort expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 14:

/* Line 936 of glr.c  */
#line 280 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 15:

/* Line 936 of glr.c  */
#line 284 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortArrow((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed arrow sort\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 16:

/* Line 936 of glr.c  */
#line 293 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed non-arrow domain\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 17:

/* Line 936 of glr.c  */
#line 302 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed non-arrow domain elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 18:

/* Line 936 of glr.c  */
#line 307 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed non-arrow domain elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 19:

/* Line 936 of glr.c  */
#line 316 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed non-arrow domain element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 20:

/* Line 936 of glr.c  */
#line 325 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 21:

/* Line 936 of glr.c  */
#line 329 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortStruct(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed structured sort\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 22:

/* Line 936 of glr.c  */
#line 338 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort constructors\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 23:

/* Line 936 of glr.c  */
#line 343 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort constructors\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 24:

/* Line 936 of glr.c  */
#line 352 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStructCons((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl), ATmakeList0(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort constructor\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 25:

/* Line 936 of glr.c  */
#line 357 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStructCons((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort constructor\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 26:

/* Line 936 of glr.c  */
#line 366 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeNil());
      gsDebugMsg("parsed recogniser\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 27:

/* Line 936 of glr.c  */
#line 371 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed recogniser id\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 28:

/* Line 936 of glr.c  */
#line 380 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort projections\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 29:

/* Line 936 of glr.c  */
#line 385 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort projections\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 30:

/* Line 936 of glr.c  */
#line 394 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStructProj(gsMakeNil(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort projection\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 31:

/* Line 936 of glr.c  */
#line 399 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStructProj((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed structured sort projection\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 32:

/* Line 936 of glr.c  */
#line 408 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed primary sort\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 33:

/* Line 936 of glr.c  */
#line 413 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed sort constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 34:

/* Line 936 of glr.c  */
#line 418 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed sort constructor\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 35:

/* Line 936 of glr.c  */
#line 423 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 36:

/* Line 936 of glr.c  */
#line 431 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 37:

/* Line 936 of glr.c  */
#line 435 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 38:

/* Line 936 of glr.c  */
#line 439 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 39:

/* Line 936 of glr.c  */
#line 443 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 40:

/* Line 936 of glr.c  */
#line 447 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 41:

/* Line 936 of glr.c  */
#line 455 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortExprList((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 42:

/* Line 936 of glr.c  */
#line 459 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortExprSet((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 43:

/* Line 936 of glr.c  */
#line 463 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortExprBag((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.appl)));
    ;}
    break;

  case 44:

/* Line 936 of glr.c  */
#line 474 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed data expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 45:

/* Line 936 of glr.c  */
#line 483 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 46:

/* Line 936 of glr.c  */
#line 487 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeWhr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.appl), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed where clause\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 47:

/* Line 936 of glr.c  */
#line 496 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed identifier initialisations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 48:

/* Line 936 of glr.c  */
#line 501 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed identifier initialisations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 49:

/* Line 936 of glr.c  */
#line 510 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIdInit((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed identifier initialisation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 50:

/* Line 936 of glr.c  */
#line 519 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 51:

/* Line 936 of glr.c  */
#line 523 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeLambda(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed lambda abstraction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 52:

/* Line 936 of glr.c  */
#line 528 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeForall(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 53:

/* Line 936 of glr.c  */
#line 533 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeExists(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 54:

/* Line 936 of glr.c  */
#line 543 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed data variable declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 55:

/* Line 936 of glr.c  */
#line 548 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATconcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed data variable declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 56:

/* Line 936 of glr.c  */
#line 557 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        safe_assign(((*yyvalp).list), ATinsert(((*yyvalp).list), (ATerm) gsMakeDataVarId(ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), i), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      }
      gsDebugMsg("parsed data variable declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 57:

/* Line 936 of glr.c  */
#line 570 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 58:

/* Line 936 of glr.c  */
#line 574 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed implication\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 59:

/* Line 936 of glr.c  */
#line 584 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 60:

/* Line 936 of glr.c  */
#line 588 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeForall(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 61:

/* Line 936 of glr.c  */
#line 593 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeExists(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 62:

/* Line 936 of glr.c  */
#line 602 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 63:

/* Line 936 of glr.c  */
#line 606 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed conjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 64:

/* Line 936 of glr.c  */
#line 612 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), 
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed disjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 65:

/* Line 936 of glr.c  */
#line 622 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 66:

/* Line 936 of glr.c  */
#line 626 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeForall(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 67:

/* Line 936 of glr.c  */
#line 631 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeExists(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 68:

/* Line 936 of glr.c  */
#line 640 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 69:

/* Line 936 of glr.c  */
#line 644 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed equality expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 70:

/* Line 936 of glr.c  */
#line 650 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed equality expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 71:

/* Line 936 of glr.c  */
#line 660 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 72:

/* Line 936 of glr.c  */
#line 664 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeForall(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 73:

/* Line 936 of glr.c  */
#line 669 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeExists(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 74:

/* Line 936 of glr.c  */
#line 678 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 75:

/* Line 936 of glr.c  */
#line 682 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed relational expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 76:

/* Line 936 of glr.c  */
#line 688 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed relational expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 77:

/* Line 936 of glr.c  */
#line 694 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed relational expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 78:

/* Line 936 of glr.c  */
#line 700 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed relational expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 79:

/* Line 936 of glr.c  */
#line 706 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed relational expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 80:

/* Line 936 of glr.c  */
#line 716 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 81:

/* Line 936 of glr.c  */
#line 720 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed list cons expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 82:

/* Line 936 of glr.c  */
#line 730 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 83:

/* Line 936 of glr.c  */
#line 734 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed list snoc expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 84:

/* Line 936 of glr.c  */
#line 744 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 85:

/* Line 936 of glr.c  */
#line 748 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed list concat expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 86:

/* Line 936 of glr.c  */
#line 758 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 87:

/* Line 936 of glr.c  */
#line 762 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed addition or set union\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 88:

/* Line 936 of glr.c  */
#line 768 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed subtraction or set difference\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 89:

/* Line 936 of glr.c  */
#line 778 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 90:

/* Line 936 of glr.c  */
#line 782 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed div expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 91:

/* Line 936 of glr.c  */
#line 788 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed mod expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 92:

/* Line 936 of glr.c  */
#line 794 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed division expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 93:

/* Line 936 of glr.c  */
#line 804 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 94:

/* Line 936 of glr.c  */
#line 808 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed multiplication or set intersection\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 95:

/* Line 936 of glr.c  */
#line 814 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed list at expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 96:

/* Line 936 of glr.c  */
#line 824 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 97:

/* Line 936 of glr.c  */
#line 828 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed prefix data expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 98:

/* Line 936 of glr.c  */
#line 833 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed prefix data expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 99:

/* Line 936 of glr.c  */
#line 838 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl(gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed prefix data expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 100:

/* Line 936 of glr.c  */
#line 847 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 101:

/* Line 936 of glr.c  */
#line 851 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeForall(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 102:

/* Line 936 of glr.c  */
#line 856 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeExists(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 103:

/* Line 936 of glr.c  */
#line 865 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 104:

/* Line 936 of glr.c  */
#line 869 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.appl), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed postfix data expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 105:

/* Line 936 of glr.c  */
#line 878 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data expressions\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 106:

/* Line 936 of glr.c  */
#line 883 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data expressions\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 107:

/* Line 936 of glr.c  */
#line 892 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed primary data expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 108:

/* Line 936 of glr.c  */
#line 897 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 109:

/* Line 936 of glr.c  */
#line 901 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 110:

/* Line 936 of glr.c  */
#line 905 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 111:

/* Line 936 of glr.c  */
#line 909 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 112:

/* Line 936 of glr.c  */
#line 917 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 113:

/* Line 936 of glr.c  */
#line 922 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 114:

/* Line 936 of glr.c  */
#line 927 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 115:

/* Line 936 of glr.c  */
#line 932 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 116:

/* Line 936 of glr.c  */
#line 937 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 117:

/* Line 936 of glr.c  */
#line 946 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl(gsMakeId(gsMakeOpIdNameListEnum()), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed data enumeration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 118:

/* Line 936 of glr.c  */
#line 951 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl(gsMakeId(gsMakeOpIdNameSetEnum()), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed data enumeration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 119:

/* Line 936 of glr.c  */
#line 956 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataAppl(gsMakeId(gsMakeOpIdNameBagEnum()), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed data enumeration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 120:

/* Line 936 of glr.c  */
#line 965 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed bag enumeration elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 121:

/* Line 936 of glr.c  */
#line 970 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATconcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed bag enumeration elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 122:

/* Line 936 of glr.c  */
#line 979 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList2((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed bag enumeration element\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 123:

/* Line 936 of glr.c  */
#line 988 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBinder(gsMakeSetBagComp(), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data comprehension\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 124:

/* Line 936 of glr.c  */
#line 997 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataVarId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data variable declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 125:

/* Line 936 of glr.c  */
#line 1009 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsDataSpecEltsToSpec(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed data specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 126:

/* Line 936 of glr.c  */
#line 1018 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data specification elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 127:

/* Line 936 of glr.c  */
#line 1023 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data specification elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 128:

/* Line 936 of glr.c  */
#line 1032 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed data specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 129:

/* Line 936 of glr.c  */
#line 1037 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed data specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 130:

/* Line 936 of glr.c  */
#line 1042 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed data specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 131:

/* Line 936 of glr.c  */
#line 1047 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed data specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 132:

/* Line 936 of glr.c  */
#line 1056 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSortSpec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed sort specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 133:

/* Line 936 of glr.c  */
#line 1065 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed sort declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 134:

/* Line 936 of glr.c  */
#line 1070 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATconcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed sort declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 135:

/* Line 936 of glr.c  */
#line 1079 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        safe_assign(((*yyvalp).list), ATinsert(((*yyvalp).list), (ATerm) gsMakeSortId(ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list), i))));
      }
      gsDebugMsg("parsed standard sort declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 136:

/* Line 936 of glr.c  */
#line 1088 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) gsMakeSortRef((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed reference sort declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 137:

/* Line 936 of glr.c  */
#line 1097 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed id's\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 138:

/* Line 936 of glr.c  */
#line 1102 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed id's\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 139:

/* Line 936 of glr.c  */
#line 1111 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed domain\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 140:

/* Line 936 of glr.c  */
#line 1116 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) gsMakeSortArrow((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed domain\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 141:

/* Line 936 of glr.c  */
#line 1125 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeConsSpec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed constructor operation specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 142:

/* Line 936 of glr.c  */
#line 1134 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMapSpec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed operation specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 143:

/* Line 936 of glr.c  */
#line 1144 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed operation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 144:

/* Line 936 of glr.c  */
#line 1149 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATconcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed operation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 145:

/* Line 936 of glr.c  */
#line 1158 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        safe_assign(((*yyvalp).list), ATinsert(((*yyvalp).list), (ATerm) gsMakeOpId(ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), i), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl))));
      }
      gsDebugMsg("parsed operation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 146:

/* Line 936 of glr.c  */
#line 1171 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataEqnSpec((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed data equation specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 147:

/* Line 936 of glr.c  */
#line 1180 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed data equation section\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 148:

/* Line 936 of glr.c  */
#line 1185 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        ATermAppl DataEqn = ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.list), i);
        safe_assign(((*yyvalp).list),
          ATinsert(((*yyvalp).list), (ATerm) gsMakeDataEqn((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), ATAgetArgument(DataEqn, 1),
            ATAgetArgument(DataEqn, 2), ATAgetArgument(DataEqn, 3))));
      }
      gsDebugMsg("parsed data equation section\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 149:

/* Line 936 of glr.c  */
#line 1201 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data equation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 150:

/* Line 936 of glr.c  */
#line 1206 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed equation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 151:

/* Line 936 of glr.c  */
#line 1215 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataEqn(ATmakeList0(), gsMakeNil(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data equation declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 152:

/* Line 936 of glr.c  */
#line 1220 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataEqn(ATmakeList0(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data equation declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 153:

/* Line 936 of glr.c  */
#line 1230 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed data variable declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 154:

/* Line 936 of glr.c  */
#line 1235 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATconcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed data variable declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 155:

/* Line 936 of glr.c  */
#line 1247 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMultAct(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed multi-action\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 156:

/* Line 936 of glr.c  */
#line 1252 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMultAct(ATmakeList0()));
      gsDebugMsg("parsed multi-action\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 157:

/* Line 936 of glr.c  */
#line 1261 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed parameterised id's\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 158:

/* Line 936 of glr.c  */
#line 1266 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed parameterised id's\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 159:

/* Line 936 of glr.c  */
#line 1275 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeParamId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl), ATmakeList0()));
      gsDebugMsg("parsed action or process\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 160:

/* Line 936 of glr.c  */
#line 1280 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeParamId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.appl), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed action or process\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 161:

/* Line 936 of glr.c  */
#line 1292 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed process expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 162:

/* Line 936 of glr.c  */
#line 1301 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 163:

/* Line 936 of glr.c  */
#line 1305 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeChoice((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed choice expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 164:

/* Line 936 of glr.c  */
#line 1314 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 165:

/* Line 936 of glr.c  */
#line 1318 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 166:

/* Line 936 of glr.c  */
#line 1327 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 167:

/* Line 936 of glr.c  */
#line 1331 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMerge((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed merge expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 168:

/* Line 936 of glr.c  */
#line 1336 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeLMerge((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed left merge expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 169:

/* Line 936 of glr.c  */
#line 1345 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 170:

/* Line 936 of glr.c  */
#line 1349 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 171:

/* Line 936 of glr.c  */
#line 1358 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 172:

/* Line 936 of glr.c  */
#line 1362 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBInit((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed bounded initialisation expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 173:

/* Line 936 of glr.c  */
#line 1371 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 174:

/* Line 936 of glr.c  */
#line 1375 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 175:

/* Line 936 of glr.c  */
#line 1384 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 176:

/* Line 936 of glr.c  */
#line 1388 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIfThen((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conditional expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 177:

/* Line 936 of glr.c  */
#line 1393 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIfThenElse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conditional expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 178:

/* Line 936 of glr.c  */
#line 1402 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 179:

/* Line 936 of glr.c  */
#line 1406 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 180:

/* Line 936 of glr.c  */
#line 1415 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 181:

/* Line 936 of glr.c  */
#line 1419 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSeq((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed sequential expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 182:

/* Line 936 of glr.c  */
#line 1428 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 183:

/* Line 936 of glr.c  */
#line 1432 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSeq((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed sequential expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 184:

/* Line 936 of glr.c  */
#line 1441 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 185:

/* Line 936 of glr.c  */
#line 1445 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 186:

/* Line 936 of glr.c  */
#line 1450 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIfThen((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conditional expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 187:

/* Line 936 of glr.c  */
#line 1455 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIfThenElse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conditional expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 188:

/* Line 936 of glr.c  */
#line 1464 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 189:

/* Line 936 of glr.c  */
#line 1468 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 190:

/* Line 936 of glr.c  */
#line 1477 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 191:

/* Line 936 of glr.c  */
#line 1481 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeAtTime((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed at time expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 192:

/* Line 936 of glr.c  */
#line 1490 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 193:

/* Line 936 of glr.c  */
#line 1494 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeAtTime((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed at time expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 194:

/* Line 936 of glr.c  */
#line 1503 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 195:

/* Line 936 of glr.c  */
#line 1507 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSync((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed sync expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 196:

/* Line 936 of glr.c  */
#line 1516 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 197:

/* Line 936 of glr.c  */
#line 1520 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSync((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed sync expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 198:

/* Line 936 of glr.c  */
#line 1529 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 199:

/* Line 936 of glr.c  */
#line 1533 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 200:

/* Line 936 of glr.c  */
#line 1538 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIfThen((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conditional expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 201:

/* Line 936 of glr.c  */
#line 1543 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIfThenElse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conditional expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 202:

/* Line 936 of glr.c  */
#line 1552 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 203:

/* Line 936 of glr.c  */
#line 1556 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeSum((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed summation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 204:

/* Line 936 of glr.c  */
#line 1565 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 205:

/* Line 936 of glr.c  */
#line 1569 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 206:

/* Line 936 of glr.c  */
#line 1573 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 207:

/* Line 936 of glr.c  */
#line 1577 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 208:

/* Line 936 of glr.c  */
#line 1581 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 209:

/* Line 936 of glr.c  */
#line 1589 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDelta());
      gsDebugMsg("parsed process constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 210:

/* Line 936 of glr.c  */
#line 1594 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeTau());
      gsDebugMsg("parsed process constant\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 211:

/* Line 936 of glr.c  */
#line 1603 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIdAssignment((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), ATmakeList0()));
      gsDebugMsg("parsed identifier assignment\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 212:

/* Line 936 of glr.c  */
#line 1608 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeIdAssignment((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.appl), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed identifier assignment\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 213:

/* Line 936 of glr.c  */
#line 1617 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 214:

/* Line 936 of glr.c  */
#line 1622 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeHide((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 215:

/* Line 936 of glr.c  */
#line 1627 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRename((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 216:

/* Line 936 of glr.c  */
#line 1632 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeComm((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 217:

/* Line 936 of glr.c  */
#line 1637 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeAllow((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 218:

/* Line 936 of glr.c  */
#line 1646 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      gsDebugMsg("parsed action name set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 219:

/* Line 936 of glr.c  */
#line 1651 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed action name set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 220:

/* Line 936 of glr.c  */
#line 1660 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      gsDebugMsg("parsed renaming expression set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 221:

/* Line 936 of glr.c  */
#line 1665 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed renaming expression set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 222:

/* Line 936 of glr.c  */
#line 1674 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed renaming expressions\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 223:

/* Line 936 of glr.c  */
#line 1679 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed renaming expressions\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 224:

/* Line 936 of glr.c  */
#line 1688 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRenameExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed renaming expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 225:

/* Line 936 of glr.c  */
#line 1697 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      gsDebugMsg("parsed communication expression set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 226:

/* Line 936 of glr.c  */
#line 1702 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed communication expression set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 227:

/* Line 936 of glr.c  */
#line 1711 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed communication expressions\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 228:

/* Line 936 of glr.c  */
#line 1716 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed communication expressions\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 229:

/* Line 936 of glr.c  */
#line 1725 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeCommExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl), gsMakeNil()));
      gsDebugMsg("parsed communication expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 230:

/* Line 936 of glr.c  */
#line 1730 "mcrl2parser.yy"
    {      
      safe_assign(((*yyvalp).appl), gsMakeCommExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), gsMakeNil()));
      gsDebugMsg("parsed communication expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 231:

/* Line 936 of glr.c  */
#line 1735 "mcrl2parser.yy"
    {      
      safe_assign(((*yyvalp).appl), gsMakeCommExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed communication expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 232:

/* Line 936 of glr.c  */
#line 1744 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMultActName(ATinsert(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.list)), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl))));
      gsDebugMsg("parsed left-hand side of communication expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 233:

/* Line 936 of glr.c  */
#line 1753 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed id's\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 234:

/* Line 936 of glr.c  */
#line 1758 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed id's\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 235:

/* Line 936 of glr.c  */
#line 1767 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      gsDebugMsg("parsed multi action name set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 236:

/* Line 936 of glr.c  */
#line 1772 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed multi action name set\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 237:

/* Line 936 of glr.c  */
#line 1781 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed multi action names\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 238:

/* Line 936 of glr.c  */
#line 1786 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed multi action names\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 239:

/* Line 936 of glr.c  */
#line 1795 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMultActName(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed multi action name\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 240:

/* Line 936 of glr.c  */
#line 1807 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsProcSpecEltsToSpec(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed process specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 241:

/* Line 936 of glr.c  */
#line 1816 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process specification elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 242:

/* Line 936 of glr.c  */
#line 1821 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process specification elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 243:

/* Line 936 of glr.c  */
#line 1830 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed process specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 244:

/* Line 936 of glr.c  */
#line 1835 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed process specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 245:

/* Line 936 of glr.c  */
#line 1840 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed process specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 246:

/* Line 936 of glr.c  */
#line 1845 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed process specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 247:

/* Line 936 of glr.c  */
#line 1854 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActSpec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed action specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 248:

/* Line 936 of glr.c  */
#line 1863 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed action declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 249:

/* Line 936 of glr.c  */
#line 1868 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATconcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed action declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 250:

/* Line 936 of glr.c  */
#line 1877 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        safe_assign(((*yyvalp).list),
          ATinsert(((*yyvalp).list), (ATerm) gsMakeActId(ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list), i), ATmakeList0())));
      }
      gsDebugMsg("parsed action declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 251:

/* Line 936 of glr.c  */
#line 1887 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        safe_assign(((*yyvalp).list), ATinsert(((*yyvalp).list), (ATerm) gsMakeActId(ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), i), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.list))));
      }
      gsDebugMsg("parsed action declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 252:

/* Line 936 of glr.c  */
#line 1900 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeProcEqnSpec(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed process equation specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 253:

/* Line 936 of glr.c  */
#line 1909 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process equation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 254:

/* Line 936 of glr.c  */
#line 1914 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process equation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 255:

/* Line 936 of glr.c  */
#line 1923 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeProcEqn(
        ATmakeList0(), gsMakeProcVarId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), ATmakeList0()), ATmakeList0(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process equation declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 256:

/* Line 936 of glr.c  */
#line 1929 "mcrl2parser.yy"
    {
      ATermList SortExprs = ATmakeList0();
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        SortExprs = ATinsert(SortExprs, ATgetArgument(ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), i), 1));
      }      
      safe_assign(((*yyvalp).appl), gsMakeProcEqn(
        ATmakeList0(), gsMakeProcVarId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.appl), ATreverse(SortExprs)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed process equation declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 257:

/* Line 936 of glr.c  */
#line 1944 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeProcessInit(ATmakeList0(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed initialisation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 258:

/* Line 936 of glr.c  */
#line 1956 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 259:

/* Line 936 of glr.c  */
#line 1965 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 260:

/* Line 936 of glr.c  */
#line 1969 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 261:

/* Line 936 of glr.c  */
#line 1974 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 262:

/* Line 936 of glr.c  */
#line 1979 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateNu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 263:

/* Line 936 of glr.c  */
#line 1984 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateMu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 264:

/* Line 936 of glr.c  */
#line 1993 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      gsDebugMsg("parsed fixpoint parameters\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 265:

/* Line 936 of glr.c  */
#line 1998 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed fixpoint parameters\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 266:

/* Line 936 of glr.c  */
#line 2008 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data variable declaration and initialisations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 267:

/* Line 936 of glr.c  */
#line 2013 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data variable declaration and initialisations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 268:

/* Line 936 of glr.c  */
#line 2022 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeDataVarIdInit(gsMakeDataVarId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.appl)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed data variable declaration and initialisation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 269:

/* Line 936 of glr.c  */
#line 2031 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 270:

/* Line 936 of glr.c  */
#line 2035 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateImp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed implication\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 271:

/* Line 936 of glr.c  */
#line 2044 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 272:

/* Line 936 of glr.c  */
#line 2048 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 273:

/* Line 936 of glr.c  */
#line 2053 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 274:

/* Line 936 of glr.c  */
#line 2058 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateNu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 275:

/* Line 936 of glr.c  */
#line 2063 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateMu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 276:

/* Line 936 of glr.c  */
#line 2072 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 277:

/* Line 936 of glr.c  */
#line 2076 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateAnd((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 278:

/* Line 936 of glr.c  */
#line 2081 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateOr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed disjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 279:

/* Line 936 of glr.c  */
#line 2090 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 280:

/* Line 936 of glr.c  */
#line 2094 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 281:

/* Line 936 of glr.c  */
#line 2099 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 282:

/* Line 936 of glr.c  */
#line 2104 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateNu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 283:

/* Line 936 of glr.c  */
#line 2109 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateMu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 284:

/* Line 936 of glr.c  */
#line 2118 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 285:

/* Line 936 of glr.c  */
#line 2122 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateNot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed prefix state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 286:

/* Line 936 of glr.c  */
#line 2127 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateMust((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed prefix state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 287:

/* Line 936 of glr.c  */
#line 2132 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateMay((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed prefix state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 288:

/* Line 936 of glr.c  */
#line 2137 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateYaledTimed((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed prefix state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 289:

/* Line 936 of glr.c  */
#line 2142 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateDelayTimed((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed prefix state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 290:

/* Line 936 of glr.c  */
#line 2151 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 291:

/* Line 936 of glr.c  */
#line 2155 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 292:

/* Line 936 of glr.c  */
#line 2160 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 293:

/* Line 936 of glr.c  */
#line 2165 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateNu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 294:

/* Line 936 of glr.c  */
#line 2170 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateMu((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 295:

/* Line 936 of glr.c  */
#line 2179 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed primary state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 296:

/* Line 936 of glr.c  */
#line 2184 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateVar(ATAgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl), 0), ATLgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl), 1)));
      gsDebugMsg("parsed primary state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 297:

/* Line 936 of glr.c  */
#line 2189 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateTrue());
      gsDebugMsg("parsed primary state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 298:

/* Line 936 of glr.c  */
#line 2194 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateFalse());
      gsDebugMsg("parsed primary state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 299:

/* Line 936 of glr.c  */
#line 2199 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateYaled());
      gsDebugMsg("parsed primary state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 300:

/* Line 936 of glr.c  */
#line 2204 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeStateDelay());
      gsDebugMsg("parsed primary state formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 301:

/* Line 936 of glr.c  */
#line 2209 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 302:

/* Line 936 of glr.c  */
#line 2217 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 303:

/* Line 936 of glr.c  */
#line 2222 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 304:

/* Line 936 of glr.c  */
#line 2231 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 305:

/* Line 936 of glr.c  */
#line 2235 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegAlt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed alternative composition\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 306:

/* Line 936 of glr.c  */
#line 2244 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 307:

/* Line 936 of glr.c  */
#line 2248 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegAlt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed alternative composition\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 308:

/* Line 936 of glr.c  */
#line 2257 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 309:

/* Line 936 of glr.c  */
#line 2261 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegSeq((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed sequential composition\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 310:

/* Line 936 of glr.c  */
#line 2270 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 311:

/* Line 936 of glr.c  */
#line 2274 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegSeq((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed sequential composition\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 312:

/* Line 936 of glr.c  */
#line 2283 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 313:

/* Line 936 of glr.c  */
#line 2287 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegTransOrNil((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed postfix regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 314:

/* Line 936 of glr.c  */
#line 2292 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegTrans((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed postfix regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 315:

/* Line 936 of glr.c  */
#line 2301 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 316:

/* Line 936 of glr.c  */
#line 2305 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegTransOrNil((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed postfix regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 317:

/* Line 936 of glr.c  */
#line 2310 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegTrans((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed postfix regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 318:

/* Line 936 of glr.c  */
#line 2319 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegNil());
      gsDebugMsg("parsed primary regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 319:

/* Line 936 of glr.c  */
#line 2324 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 320:

/* Line 936 of glr.c  */
#line 2332 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 321:

/* Line 936 of glr.c  */
#line 2337 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeRegNil());
      gsDebugMsg("parsed primary regular formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 322:

/* Line 936 of glr.c  */
#line 2342 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 323:

/* Line 936 of glr.c  */
#line 2350 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed action formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 324:

/* Line 936 of glr.c  */
#line 2359 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 325:

/* Line 936 of glr.c  */
#line 2363 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 326:

/* Line 936 of glr.c  */
#line 2368 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 327:

/* Line 936 of glr.c  */
#line 2377 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 328:

/* Line 936 of glr.c  */
#line 2381 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActImp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed implication\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 329:

/* Line 936 of glr.c  */
#line 2390 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 330:

/* Line 936 of glr.c  */
#line 2394 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 331:

/* Line 936 of glr.c  */
#line 2399 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 332:

/* Line 936 of glr.c  */
#line 2408 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 333:

/* Line 936 of glr.c  */
#line 2412 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActAnd((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 334:

/* Line 936 of glr.c  */
#line 2417 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActOr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed disjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 335:

/* Line 936 of glr.c  */
#line 2426 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 336:

/* Line 936 of glr.c  */
#line 2430 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 337:

/* Line 936 of glr.c  */
#line 2435 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 338:

/* Line 936 of glr.c  */
#line 2444 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 339:

/* Line 936 of glr.c  */
#line 2448 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 340:

/* Line 936 of glr.c  */
#line 2457 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 341:

/* Line 936 of glr.c  */
#line 2461 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActNot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed prefix action formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 342:

/* Line 936 of glr.c  */
#line 2470 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 343:

/* Line 936 of glr.c  */
#line 2474 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 344:

/* Line 936 of glr.c  */
#line 2479 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 345:

/* Line 936 of glr.c  */
#line 2488 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed primary action formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 346:

/* Line 936 of glr.c  */
#line 2493 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed primary action formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 347:

/* Line 936 of glr.c  */
#line 2498 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActTrue());
      gsDebugMsg("parsed primary action formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 348:

/* Line 936 of glr.c  */
#line 2503 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActFalse());
      gsDebugMsg("parsed primary action formula\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 349:

/* Line 936 of glr.c  */
#line 2508 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 350:

/* Line 936 of glr.c  */
#line 2519 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsActionRenameEltsToActionRename(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed action rename specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 351:

/* Line 936 of glr.c  */
#line 2528 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed action rename specification element\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 352:

/* Line 936 of glr.c  */
#line 2533 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed action rename specification element\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 353:

/* Line 936 of glr.c  */
#line 2542 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed action rename specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 354:

/* Line 936 of glr.c  */
#line 2547 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed action rename specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 355:

/* Line 936 of glr.c  */
#line 2552 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed action rename specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 356:

/* Line 936 of glr.c  */
#line 2561 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActionRenameRules((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list)));
      gsDebugMsg("parsed action rename specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 357:

/* Line 936 of glr.c  */
#line 2570 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list));
      gsDebugMsg("parsed action rename rule section\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 358:

/* Line 936 of glr.c  */
#line 2575 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList0());
      int n = ATgetLength((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.list));
      for (int i = 0; i < n; i++) {
        ATermAppl ActionRenameRule = ATAelementAt((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.list), i);
	safe_assign(((*yyvalp).list), ATinsert(((*yyvalp).list),
          (ATerm) gsMakeActionRenameRule((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list),
            ATAgetArgument(ActionRenameRule, 1),
            ATAgetArgument(ActionRenameRule, 2),
            ATAgetArgument(ActionRenameRule, 3))));
      }
      gsDebugMsg("parsed action rename rule section\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 359:

/* Line 936 of glr.c  */
#line 2593 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed action rename rules\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 360:

/* Line 936 of glr.c  */
#line 2598 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed action rename rules\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 361:

/* Line 936 of glr.c  */
#line 2607 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActionRenameRule(ATmakeList0(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed action rename rule\n %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 362:

/* Line 936 of glr.c  */
#line 2612 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeActionRenameRule(ATmakeList0(), gsMakeNil(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed action rename rule\n %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 363:

/* Line 936 of glr.c  */
#line 2621 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed right-hand-side of an action rename rule\n %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 364:

/* Line 936 of glr.c  */
#line 2626 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed right-hand-side of an action rename rule\n %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 365:

/* Line 936 of glr.c  */
#line 2638 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed parameterised boolean expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 366:

/* Line 936 of glr.c  */
#line 2647 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 367:

/* Line 936 of glr.c  */
#line 2651 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 368:

/* Line 936 of glr.c  */
#line 2656 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 369:

/* Line 936 of glr.c  */
#line 2665 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 370:

/* Line 936 of glr.c  */
#line 2669 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESImp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed implication\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 371:

/* Line 936 of glr.c  */
#line 2678 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 372:

/* Line 936 of glr.c  */
#line 2682 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 373:

/* Line 936 of glr.c  */
#line 2687 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 374:

/* Line 936 of glr.c  */
#line 2696 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 375:

/* Line 936 of glr.c  */
#line 2700 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESAnd((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed conjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 376:

/* Line 936 of glr.c  */
#line 2705 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESOr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed disjunction\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 377:

/* Line 936 of glr.c  */
#line 2714 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 378:

/* Line 936 of glr.c  */
#line 2718 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 379:

/* Line 936 of glr.c  */
#line 2723 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 380:

/* Line 936 of glr.c  */
#line 2732 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 381:

/* Line 936 of glr.c  */
#line 2736 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESNot((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed negation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 382:

/* Line 936 of glr.c  */
#line 2745 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 383:

/* Line 936 of glr.c  */
#line 2749 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESForall((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 384:

/* Line 936 of glr.c  */
#line 2754 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESExists((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed quantification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 385:

/* Line 936 of glr.c  */
#line 2763 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed primary expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 386:

/* Line 936 of glr.c  */
#line 2768 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePropVarInst(ATAgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl), 0), ATLgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl), 1)));
      gsDebugMsg("parsed primary expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 387:

/* Line 936 of glr.c  */
#line 2773 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESTrue());
      gsDebugMsg("parsed primary expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 388:

/* Line 936 of glr.c  */
#line 2778 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBESFalse());
      gsDebugMsg("parsed primary expression\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 389:

/* Line 936 of glr.c  */
#line 2783 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl));
    ;}
    break;

  case 390:

/* Line 936 of glr.c  */
#line 2795 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsPBESSpecEltsToSpec(ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed PBES specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 391:

/* Line 936 of glr.c  */
#line 2804 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed PBES specification elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 392:

/* Line 936 of glr.c  */
#line 2809 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed PBES specification elements\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 393:

/* Line 936 of glr.c  */
#line 2818 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
     gsDebugMsg("parsed PBES specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 394:

/* Line 936 of glr.c  */
#line 2823 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed PBES specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 395:

/* Line 936 of glr.c  */
#line 2828 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.appl));
      gsDebugMsg("parsed PBES specification element\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 396:

/* Line 936 of glr.c  */
#line 2837 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBEqnSpec(ATmakeList0(), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed parameterised boolean equation specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 397:

/* Line 936 of glr.c  */
#line 2842 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBEqnSpec((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.list), ATreverse((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.list))));
      gsDebugMsg("parsed parameterised boolean equation specification\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 398:

/* Line 936 of glr.c  */
#line 2851 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATmakeList1((ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed parameterised boolean equation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 399:

/* Line 936 of glr.c  */
#line 2856 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).list), ATinsert((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.list), (ATerm) (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed parameterised boolean equation declarations\n  %T\n", ((*yyvalp).list));
    ;}
    break;

  case 400:

/* Line 936 of glr.c  */
#line 2865 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakePBEqn((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.appl), gsMakePropVarDecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.appl), ATmakeList0()), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed parameterised boolean equation declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 401:

/* Line 936 of glr.c  */
#line 2871 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl),
        gsMakePBEqn((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.appl), gsMakePropVarDecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.appl), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.list)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.appl)));
      gsDebugMsg("parsed parameterised boolean equation declaration\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 402:

/* Line 936 of glr.c  */
#line 2881 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeMu());
      gsDebugMsg("parsed fixpoint\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 403:

/* Line 936 of glr.c  */
#line 2886 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakeNu());
      gsDebugMsg("parsed fixpoint\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 404:

/* Line 936 of glr.c  */
#line 2895 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBInit(ATmakeList0(),
        gsMakePropVarInst(ATAgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl), 0), ATLgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.appl), 1))));
      gsDebugMsg("parsed initialisation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;

  case 405:

/* Line 936 of glr.c  */
#line 2901 "mcrl2parser.yy"
    {
      safe_assign(((*yyvalp).appl), gsMakePBInit((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.list),
        gsMakePropVarInst(ATAgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.appl), 0), ATLgetArgument((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.appl), 1))));
      gsDebugMsg("parsed initialisation\n  %T\n", ((*yyvalp).appl));
    ;}
    break;



/* Line 936 of glr.c  */
#line 6152 "mcrl2parser.cpp"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp);
	      return yyreportAmbiguity (yybest, yyp);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
	  if (yychar == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	    }

	  if (yychar <= YYEOF)
	    {
	      yychar = yytoken = YYEOF;
	      YYDPRINTF ((stderr, "Now at end of input.\n"));
	    }
	  else
	    {
	      yytoken = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	    }

	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
	{
	  yySymbol yytoken = YYTRANSLATE (yychar);
	  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn + 1;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytokenName (yytoken);
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      yyMemoryExhausted (yystackp);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, NULL);
	if (yychar != YYEMPTY)
	  {
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	if (yychar <= YYEOF)
	  {
	    yychar = yytoken = YYEOF;
	    YYDPRINTF ((stderr, "Now at end of input.\n"));
	  }
	else
	  {
	    yytoken = YYTRANSLATE (yychar);
	    YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	  }
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}

      if (yys->yypred != NULL)
	yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{

		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
	    }
	  else
	    {
	      yySymbol yytoken;
	      if (yychar == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		}

	      if (yychar <= YYEOF)
		{
		  yychar = yytoken = YYEOF;
		  YYDPRINTF ((stderr, "Now at end of input.\n"));
		}
	      else
		{
		  yytoken = YYTRANSLATE (yychar);
		  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
		}

	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{

		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

	      yyreportSyntaxError (&yystack);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    if (yys->yypred != NULL)
		      yydestroyGLRState ("Cleanup: popping", yys);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		     yyp->yystate.yyresolved, yyp->yystate.yylrState,
		     (unsigned long int) yyp->yystate.yyposn,
		     (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    YYFPRINTF (stderr, ", firstVal: %ld",
		       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
	}
      else
	{
	  YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
		     yyp->yyoption.yyrule - 1,
		     (long int) YYINDEX (yyp->yyoption.yystate),
		     (long int) YYINDEX (yyp->yyoption.yynext));
	}
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	       (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif



/* Line 2634 of glr.c  */
#line 2908 "mcrl2parser.yy"


//Uncomment the lines below to enable the use of SIZE_MAX
//#define __STDC_LIMIT_MACROS 1
//#include <stdint.h>

//Uncomment the line below to enable the use of std::cerr, std::cout and std::endl;
//#include <iostream>

ATermAppl gsDataSpecEltsToSpec(ATermList SpecElts)
{
  ATermAppl Result = NULL;
  ATermList SortDecls = ATmakeList0();
  ATermList ConsDecls = ATmakeList0();
  ATermList MapDecls = ATmakeList0();
  ATermList DataEqnDecls = ATmakeList0();
  int n = ATgetLength(SpecElts);
  for (int i = 0; i < n; i++) {
    ATermAppl SpecElt = ATAelementAt(SpecElts, i);
    ATermList SpecEltArg0 = ATLgetArgument(SpecElt, 0);
    if (gsIsSortSpec(SpecElt)) {
      SortDecls = ATconcat(SortDecls, SpecEltArg0);
    } else if (gsIsConsSpec(SpecElt)) {
      ConsDecls = ATconcat(ConsDecls, SpecEltArg0);
    } else if (gsIsMapSpec(SpecElt)) {
      MapDecls = ATconcat(MapDecls, SpecEltArg0);
    } else if (gsIsDataEqnSpec(SpecElt)) {
      DataEqnDecls = ATconcat(DataEqnDecls, SpecEltArg0);
    }
  }
  Result = gsMakeDataSpec(
    gsMakeSortSpec(SortDecls),
    gsMakeConsSpec(ConsDecls),
    gsMakeMapSpec(MapDecls),
    gsMakeDataEqnSpec(DataEqnDecls)
  );
  //Uncomment the lines below to check if the parser stack size isn't too big
  //std::cerr << "SIZE_MAX:              " << SIZE_MAX << std::endl;
  //std::cerr << "YYMAXDEPTH:            " << YYMAXDEPTH << std::endl;
  //std::cerr << "sizeof (yyGLRStackItem): " << sizeof (yyGLRStackItem) << std::endl;
  //std::cerr << "SIZE_MAX < YYMAXDEPTH * sizeof (yyGLRStackItem): " << (SIZE_MAX < YYMAXDEPTH * sizeof (yyGLRStackItem)) << std::endl;
  return Result;
}

ATermAppl gsProcSpecEltsToSpec(ATermList SpecElts)
{
  ATermAppl Result = NULL;
  ATermList SortDecls = ATmakeList0();
  ATermList ConsDecls = ATmakeList0();
  ATermList MapDecls = ATmakeList0();
  ATermList DataEqnDecls = ATmakeList0();
  ATermList ActDecls = ATmakeList0();
  ATermList ProcEqnDecls = ATmakeList0();
  ATermAppl ProcInit = NULL;
  int n = ATgetLength(SpecElts);
  for (int i = 0; i < n; i++) {
    ATermAppl SpecElt = ATAelementAt(SpecElts, i);
    if (gsIsProcessInit(SpecElt)) {
      if (ProcInit == NULL) {
        ProcInit = SpecElt;
      } else {
        //ProcInit != NULL
        gsErrorMsg("parse error: multiple initialisations\n");
        return NULL;
      }
    } else {
      ATermList SpecEltArg0 = ATLgetArgument(SpecElt, 0);
      if (gsIsSortSpec(SpecElt)) {
        SortDecls = ATconcat(SortDecls, SpecEltArg0);
      } else if (gsIsConsSpec(SpecElt)) {
        ConsDecls = ATconcat(ConsDecls, SpecEltArg0);
      } else if (gsIsMapSpec(SpecElt)) {
        MapDecls = ATconcat(MapDecls, SpecEltArg0);
      } else if (gsIsDataEqnSpec(SpecElt)) {
        DataEqnDecls = ATconcat(DataEqnDecls, SpecEltArg0);
      } else if (gsIsActSpec(SpecElt)) {
        ActDecls = ATconcat(ActDecls, SpecEltArg0);
      } else if (gsIsProcEqnSpec(SpecElt)) {
        ProcEqnDecls = ATconcat(ProcEqnDecls, SpecEltArg0);
      }
    }
  }
  //check whether an initialisation is present
  if (ProcInit == NULL) {
    gsErrorMsg("parse error: missing initialisation\n");
    return NULL;
  }
  Result = gsMakeProcSpec(
    gsMakeDataSpec(
      gsMakeSortSpec(SortDecls),
      gsMakeConsSpec(ConsDecls),
      gsMakeMapSpec(MapDecls),
      gsMakeDataEqnSpec(DataEqnDecls)
    ),
    gsMakeActSpec(ActDecls),
    gsMakeProcEqnSpec(ProcEqnDecls),
    ProcInit
  );
  //Uncomment the lines below to check if the parser stack size isn't too big
  //std::cerr << "SIZE_MAX:              " << SIZE_MAX << std::endl;
  //std::cerr << "YYMAXDEPTH:            " << YYMAXDEPTH << std::endl;
  //std::cerr << "sizeof (yyGLRStackItem): " << sizeof (yyGLRStackItem) << std::endl;
  //std::cerr << "SIZE_MAX < YYMAXDEPTH * sizeof (yyGLRStackItem): " << (SIZE_MAX < YYMAXDEPTH * sizeof (yyGLRStackItem)) << std::endl;
  return Result;
}

ATermAppl gsPBESSpecEltsToSpec(ATermList SpecElts)
{
  ATermAppl Result = NULL;
  ATermList SortDecls = ATmakeList0();
  ATermList ConsDecls = ATmakeList0();
  ATermList MapDecls = ATmakeList0();
  ATermList DataEqnDecls = ATmakeList0();
  ATermAppl PBEqnSpec = NULL;
  ATermAppl PBInit = NULL;
  int n = ATgetLength(SpecElts);
  for (int i = 0; i < n; i++) {
    ATermAppl SpecElt = ATAelementAt(SpecElts, i);
    if (gsIsPBEqnSpec(SpecElt)) {
      if (PBEqnSpec == NULL) {
        PBEqnSpec = SpecElt;
      } else {
        //PBEqnSpec != NULL
        gsErrorMsg("parse error: multiple parameterised boolean equation specifications\n");
        return NULL;
      }
    } else if (gsIsPBInit(SpecElt)) {
      if (PBInit == NULL) {
        PBInit = SpecElt;
      } else {
        //PBInit != NULL
        gsErrorMsg("parse error: multiple initialisations\n");
        return NULL;
      }
    } else {
      ATermList SpecEltArg0 = ATLgetArgument(SpecElt, 0);
      if (gsIsSortSpec(SpecElt)) {
        SortDecls = ATconcat(SortDecls, SpecEltArg0);
      } else if (gsIsConsSpec(SpecElt)) {
        ConsDecls = ATconcat(ConsDecls, SpecEltArg0);
      } else if (gsIsMapSpec(SpecElt)) {
        MapDecls = ATconcat(MapDecls, SpecEltArg0);
      } else if (gsIsDataEqnSpec(SpecElt)) {
        DataEqnDecls = ATconcat(DataEqnDecls, SpecEltArg0);
      }
    }
  }
  //check whether a parameterised boolean equation specification is present
  if (PBEqnSpec == NULL) {
    gsErrorMsg("parse error: missing parameterised boolean equation specification\n");
    return NULL;
  }
  //check whether an initialisation is present
  if (PBInit == NULL) {
    gsErrorMsg("parse error: missing initialisation\n");
    return NULL;
  }
  Result = gsMakePBES(
    gsMakeDataSpec(
      gsMakeSortSpec(SortDecls),
      gsMakeConsSpec(ConsDecls),
      gsMakeMapSpec(MapDecls),
      gsMakeDataEqnSpec(DataEqnDecls)
    ),
    PBEqnSpec,
    PBInit
  );
  return Result;
}

ATermAppl gsActionRenameEltsToActionRename(ATermList ActionRenameElts)
{
  ATermAppl Result = NULL;
  ATermList SortDecls = ATmakeList0();
  ATermList ConsDecls = ATmakeList0();
  ATermList MapDecls = ATmakeList0();
  ATermList DataEqnDecls = ATmakeList0();
  ATermList ActDecls = ATmakeList0();
  ATermList ActionRenameRules = ATmakeList0();
  int n = ATgetLength(ActionRenameElts);
  for (int i = 0; i < n; i++) {
    ATermAppl ActionRenameElt = ATAelementAt(ActionRenameElts, i);
    ATermList ActionRenameEltArg0 = ATLgetArgument(ActionRenameElt, 0);
    if (gsIsSortSpec(ActionRenameElt)) {
      SortDecls = ATconcat(SortDecls, ActionRenameEltArg0);
    } else if (gsIsConsSpec(ActionRenameElt)) {
      ConsDecls = ATconcat(ConsDecls, ActionRenameEltArg0);
    } else if (gsIsMapSpec(ActionRenameElt)) {
      MapDecls = ATconcat(MapDecls, ActionRenameEltArg0);
    } else if (gsIsDataEqnSpec(ActionRenameElt)) {
      DataEqnDecls = ATconcat(DataEqnDecls, ActionRenameEltArg0);
    } else if (gsIsActSpec(ActionRenameElt)) {
      ActDecls = ATconcat(ActDecls, ActionRenameEltArg0);
    } else if (gsIsActionRenameRules(ActionRenameElt)) {
      ActionRenameRules = ATconcat(ActionRenameRules, ActionRenameEltArg0);
    } else {
      assert(false);
    }
  }

  Result = gsMakeActionRenameSpec(
    gsMakeDataSpec(
      gsMakeSortSpec(SortDecls),
      gsMakeConsSpec(ConsDecls),
      gsMakeMapSpec(MapDecls),
      gsMakeDataEqnSpec(DataEqnDecls)
    ),
    gsMakeActSpec(ActDecls),
    gsMakeActionRenameRules(ActionRenameRules)
  );
  return Result;
}

