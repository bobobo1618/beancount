/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_BEANCOUNT_PARSER_GRAMMAR_H_INCLUDED
# define YY_YY_BEANCOUNT_PARSER_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LEX_ERROR = 258,
    INDENT = 259,
    EOL = 260,
    COMMENT = 261,
    SKIPPED = 262,
    PIPE = 263,
    ATAT = 264,
    AT = 265,
    LCURLCURL = 266,
    RCURLCURL = 267,
    LCURL = 268,
    RCURL = 269,
    EQUAL = 270,
    COMMA = 271,
    TILDE = 272,
    HASH = 273,
    ASTERISK = 274,
    SLASH = 275,
    COLON = 276,
    PLUS = 277,
    MINUS = 278,
    LPAREN = 279,
    RPAREN = 280,
    FLAG = 281,
    TXN = 282,
    BALANCE = 283,
    BALANCE_END = 284,
    OPEN = 285,
    CLOSE = 286,
    COMMODITY = 287,
    PAD = 288,
    EVENT = 289,
    PRICE = 290,
    NOTE = 291,
    DOCUMENT = 292,
    QUERY = 293,
    CUSTOM = 294,
    PUSHTAG = 295,
    POPTAG = 296,
    PUSHMETA = 297,
    POPMETA = 298,
    OPTION = 299,
    INCLUDE = 300,
    PLUGIN = 301,
    NONE = 302,
    BOOL = 303,
    DATE = 304,
    ACCOUNT = 305,
    CURRENCY = 306,
    STRING = 307,
    NUMBER = 308,
    TAG = 309,
    LINK = 310,
    KEY = 311,
    NEGATIVE = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 126 "beancount/parser/grammar.y" 

    char character;
    const char* string;
    PyObject* pyobj;
    struct {
        PyObject* pyobj1;
        PyObject* pyobj2;
    } pairobj;

#line 122 "beancount/parser/grammar.h" 
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (void);

#endif /* !YY_YY_BEANCOUNT_PARSER_GRAMMAR_H_INCLUDED  */
