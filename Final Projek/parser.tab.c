/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #include"lex.yy.c"
    void yyerror(const char *s);
    int yylex();
    void add(char);
    void insert_type();
    int search(char *);
	void insert_type();
	void print_tree(struct node*);
	void print_inorder(struct node *);
    void check_declaration(char *);
	void check_return_type(char *);
	int check_types(char *, char *);
	char *get_type(char *);
	struct node* mknode(struct node *left, struct node *right, char *token);

    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        int line_no;
	} symbol_table[40];

    int count=0;
    int q;
	char type[10];
    extern int countn;
	struct node *head;
	int sem_errors=0;
	int label=0;
	char buff[100];
	char errors[10][100];
	char reserved[10][10] = {"int", "float", "char", "void", "if", "else", "for", "main", "return", "include"};

	struct node { 
		struct node *left; 
		struct node *right; 
		char *token; 
	};


/* Line 371 of yacc.c  */
#line 114 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOID = 258,
     CHARACTER = 259,
     PRINTFF = 260,
     SCANFF = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     FOR = 265,
     IF = 266,
     ELSE = 267,
     TRUE = 268,
     FALSE = 269,
     NUMBER = 270,
     FLOAT_NUM = 271,
     ID = 272,
     LE = 273,
     GE = 274,
     EQ = 275,
     NE = 276,
     GT = 277,
     LT = 278,
     AND = 279,
     OR = 280,
     STR = 281,
     ADD = 282,
     MULTIPLY = 283,
     DIVIDE = 284,
     SUBTRACT = 285,
     UNARY = 286,
     INCLUDE = 287,
     RETURN = 288
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 47 "parser.y"
 struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;

		struct var_name2 { 
			char name[100]; 
			struct node* nd;
			char type[5];
		} nd_obj2; 
	

/* Line 387 of yacc.c  */
#line 203 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 231 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  107

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,     2,
      34,    35,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    12,    15,    16,    19,    22,    24,    26,
      28,    30,    31,    44,    45,    55,    58,    61,    62,    69,
      70,    80,    81,    87,    88,    92,    94,    96,    97,    98,
     103,   104,   109,   110,   115,   116,   120,   123,   126,   127,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     151,   153,   155,   157,   159,   161,   162,   167
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    46,    34,    35,    36,    48,    66,
      37,    -1,    44,    44,    -1,    -1,    32,    45,    -1,    47,
      17,    -1,     7,    -1,     8,    -1,     9,    -1,     3,    -1,
      -1,    10,    49,    34,    56,    38,    55,    38,    56,    35,
      36,    48,    37,    -1,    -1,    11,    50,    34,    55,    35,
      36,    48,    37,    53,    -1,    56,    38,    -1,    48,    48,
      -1,    -1,     5,    51,    34,    26,    35,    38,    -1,    -1,
       6,    52,    34,    26,    39,    40,    17,    35,    38,    -1,
      -1,    12,    54,    36,    48,    37,    -1,    -1,    65,    64,
      65,    -1,    13,    -1,    14,    -1,    -1,    -1,    47,    17,
      57,    61,    -1,    -1,    17,    58,    41,    62,    -1,    -1,
      17,    59,    64,    62,    -1,    -1,    17,    60,    31,    -1,
      31,    17,    -1,    41,    65,    -1,    -1,    62,    63,    62,
      -1,    65,    -1,    27,    -1,    30,    -1,    28,    -1,    29,
      -1,    23,    -1,    22,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    15,    -1,    16,    -1,     4,    -1,    17,
      -1,    -1,    33,    67,    65,    38,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    70,    71,    71,    74,    77,    78,    79,
      80,    83,    83,    88,    88,    92,    93,    94,    94,    95,
      95,    98,    98,    99,   102,   103,   104,   105,   108,   108,
     141,   141,   182,   182,   183,   183,   188,   196,   197,   200,
     238,   241,   242,   243,   244,   247,   248,   249,   250,   251,
     252,   255,   256,   257,   258,   261,   261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "CHARACTER", "PRINTFF", "SCANFF",
  "INT", "FLOAT", "CHAR", "FOR", "IF", "ELSE", "TRUE", "FALSE", "NUMBER",
  "FLOAT_NUM", "ID", "LE", "GE", "EQ", "NE", "GT", "LT", "AND", "OR",
  "STR", "ADD", "MULTIPLY", "DIVIDE", "SUBTRACT", "UNARY", "INCLUDE",
  "RETURN", "'('", "')'", "'{'", "'}'", "';'", "','", "'&'", "'='",
  "$accept", "program", "headers", "$@1", "main", "datatype", "body",
  "$@2", "$@3", "$@4", "$@5", "else", "$@6", "condition", "statement",
  "$@7", "$@8", "$@9", "$@10", "init", "expression", "arithmetic", "relop",
  "value", "return", "$@11", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    40,    41,   123,   125,    59,    44,
      38,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    45,    44,    46,    47,    47,    47,
      47,    49,    48,    50,    48,    48,    48,    51,    48,    52,
      48,    54,    53,    53,    55,    55,    55,    55,    57,    56,
      58,    56,    59,    56,    60,    56,    56,    61,    61,    62,
      62,    63,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    67,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     2,     0,     2,     2,     1,     1,     1,
       1,     0,    12,     0,     9,     2,     2,     0,     6,     0,
       9,     0,     5,     0,     3,     1,     1,     0,     0,     4,
       0,     4,     0,     4,     0,     3,     2,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     5,     1,    10,     7,     8,     9,
       3,     0,     0,     0,     6,     0,     0,    17,    19,    11,
      13,    32,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    28,    55,    16,     0,    15,     0,
       0,     0,    27,     0,    47,    48,    49,    50,    46,    45,
       0,    35,    38,     0,     2,     0,     0,     0,    53,    25,
      26,    51,    52,    54,     0,     0,    31,    40,    33,     0,
      29,     0,     0,     0,    27,     0,     0,    41,    43,    44,
      42,     0,    37,    56,    18,     0,     0,     0,    24,    39,
       0,     0,     0,     0,     0,    23,    20,     0,    21,    14,
       0,     0,     0,     0,    12,     0,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    10,     4,    11,    23,    36,    28,    29,    26,
      27,    99,   101,    64,    25,    52,    30,    31,    32,    70,
      66,    81,    50,    67,    37,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -48
static const yytype_int8 yypact[] =
{
     -21,   -48,    28,    30,   -48,   -48,   -48,   -48,   -48,   -48,
     -21,   -22,    15,     7,   -48,     8,    98,   -48,   -48,   -48,
     -48,     0,    18,    29,    85,    23,    14,    16,    19,    31,
      22,   112,    33,   -48,   -48,   -48,    98,    35,   -48,    41,
      42,    66,   106,    10,   -48,   -48,   -48,   -48,   -48,   -48,
      10,   -48,    36,    10,   -48,    43,    37,    32,   -48,   -48,
     -48,   -48,   -48,   -48,    44,   112,    84,   -48,    84,    10,
     -48,    47,    51,    58,   106,    45,    10,   -48,   -48,   -48,
     -48,    10,   -48,   -48,   -48,    65,    61,    98,   -48,    84,
      82,    66,    -1,    62,    89,   113,   -48,    90,   -48,   -48,
      98,    91,    12,    98,   -48,    49,   -48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   128,   -48,   -48,   133,   -16,   -48,   -48,   -48,
     -48,   -48,   -48,    63,   -40,   -48,   -48,   -48,   -48,   -48,
     -47,   -48,    73,   -29,   -48,   -48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int8 yytable[] =
{
      24,    57,     6,    68,    17,    18,     7,     8,     9,    19,
      20,     1,    13,    65,    58,     6,    21,    17,    18,     7,
       8,     9,    19,    20,    71,    61,    62,    63,     5,    21,
      22,   -34,    14,     6,    89,    33,    95,     7,     8,     9,
      82,   -30,    15,    22,    16,    65,    34,    88,    39,   104,
      40,    94,     6,    41,    17,    18,     7,     8,     9,    19,
      20,    38,     1,    43,    51,    42,    21,    55,    56,     6,
      74,    92,    54,     7,     8,     9,    73,    69,    72,    75,
      22,    87,    90,    21,   102,    83,   106,   105,     6,    84,
      17,    18,     7,     8,     9,    19,    20,    22,    85,    91,
      96,     6,    21,    17,    18,     7,     8,     9,    19,    20,
      58,    77,    78,    79,    80,    21,    22,    93,    35,    59,
      60,    61,    62,    63,    97,    98,   100,   103,     3,    22,
      44,    45,    46,    47,    48,    49,    12,    86,    76
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      16,    41,     3,    50,     5,     6,     7,     8,     9,    10,
      11,    32,    34,    42,     4,     3,    17,     5,     6,     7,
       8,     9,    10,    11,    53,    15,    16,    17,     0,    17,
      31,    31,    17,     3,    81,    17,    37,     7,     8,     9,
      69,    41,    35,    31,    36,    74,    17,    76,    34,    37,
      34,    91,     3,    34,     5,     6,     7,     8,     9,    10,
      11,    38,    32,    41,    31,    34,    17,    26,    26,     3,
      38,    87,    37,     7,     8,     9,    39,    41,    35,    35,
      31,    36,    17,    17,   100,    38,    37,   103,     3,    38,
       5,     6,     7,     8,     9,    10,    11,    31,    40,    38,
      38,     3,    17,     5,     6,     7,     8,     9,    10,    11,
       4,    27,    28,    29,    30,    17,    31,    35,    33,    13,
      14,    15,    16,    17,    35,    12,    36,    36,     0,    31,
      18,    19,    20,    21,    22,    23,     3,    74,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    43,    44,    45,     0,     3,     7,     8,     9,
      44,    46,    47,    34,    17,    35,    36,     5,     6,    10,
      11,    17,    31,    47,    48,    56,    51,    52,    49,    50,
      58,    59,    60,    17,    17,    33,    48,    66,    38,    34,
      34,    34,    34,    41,    18,    19,    20,    21,    22,    23,
      64,    31,    57,    67,    37,    26,    26,    56,     4,    13,
      14,    15,    16,    17,    55,    65,    62,    65,    62,    41,
      61,    65,    35,    39,    38,    35,    64,    27,    28,    29,
      30,    63,    65,    38,    38,    40,    55,    36,    65,    62,
      17,    38,    48,    35,    56,    37,    38,    35,    12,    53,
      36,    54,    48,    36,    37,    48,    37
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 65 "parser.y"
    { (yyvsp[(2) - (8)].nd_obj).nd = mknode((yyvsp[(6) - (8)].nd_obj).nd, (yyvsp[(7) - (8)].nd_obj).nd, "main"); (yyval.nd_obj).nd = mknode((yyvsp[(1) - (8)].nd_obj).nd, (yyvsp[(2) - (8)].nd_obj).nd, "program"); 
	head = (yyval.nd_obj).nd;
}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 70 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (2)].nd_obj).nd, (yyvsp[(2) - (2)].nd_obj).nd, "headers"); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 71 "parser.y"
    { add('H'); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 71 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (2)].nd_obj).name); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    { add('F'); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 77 "parser.y"
    { insert_type(); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    { insert_type(); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 79 "parser.y"
    { insert_type(); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 80 "parser.y"
    { insert_type(); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 83 "parser.y"
    { add('K'); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 83 "parser.y"
    { 
	struct node *temp = mknode((yyvsp[(6) - (12)].nd_obj).nd, (yyvsp[(8) - (12)].nd_obj).nd, "CONDITION"); 
	struct node *temp2 = mknode((yyvsp[(4) - (12)].nd_obj).nd, temp, "CONDITION"); 
	(yyval.nd_obj).nd = mknode(temp2, (yyvsp[(11) - (12)].nd_obj).nd, (yyvsp[(1) - (12)].nd_obj).name); 
}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 88 "parser.y"
    { add('K'); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 88 "parser.y"
    { 
	struct node *iff = mknode((yyvsp[(4) - (9)].nd_obj).nd, (yyvsp[(7) - (9)].nd_obj).nd, (yyvsp[(1) - (9)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode(iff, (yyvsp[(9) - (9)].nd_obj).nd, "if-else"); 
}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 92 "parser.y"
    { (yyval.nd_obj).nd = (yyvsp[(1) - (2)].nd_obj).nd; }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 93 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (2)].nd_obj).nd, (yyvsp[(2) - (2)].nd_obj).nd, "statements"); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    { add('K'); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, "printf"); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 95 "parser.y"
    { add('K'); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 95 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, "scanf"); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 98 "parser.y"
    { add('K'); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 98 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[(4) - (5)].nd_obj).nd, (yyvsp[(1) - (5)].nd_obj).name); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 99 "parser.y"
    { (yyval.nd_obj).nd = NULL; }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 102 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 103 "parser.y"
    { add('K'); (yyval.nd_obj).nd = NULL; }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    { add('K'); (yyval.nd_obj).nd = NULL; }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 105 "parser.y"
    { (yyval.nd_obj).nd = NULL; }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    { add('V'); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    { 
	(yyvsp[(2) - (4)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(2) - (4)].nd_obj).name); 
	int t = check_types((yyvsp[(1) - (4)].nd_obj).name, (yyvsp[(4) - (4)].nd_obj2).type); 
	if(t>0) { 
		if(t == 1) {
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "floattoint"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 2) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "inttofloat"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 3) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "chartoint"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 4) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "inttochar"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 5) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "chartofloat"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else{
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "floattochar"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		}
	} 
	else { 
		(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, (yyvsp[(4) - (4)].nd_obj2).nd, "declaration"); 
	} 
}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 141 "parser.y"
    { check_declaration((yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 141 "parser.y"
    {
	(yyvsp[(1) - (4)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (4)].nd_obj).name); 
	char *id_type = get_type((yyvsp[(1) - (4)].nd_obj).name); 
	if(strcmp(id_type, (yyvsp[(4) - (4)].nd_obj2).type)) {
		if(!strcmp(id_type, "int")) {
			if(!strcmp((yyvsp[(4) - (4)].nd_obj2).type, "float")){
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "floattoint");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			else{
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "chartoint");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			
		}
		else if(!strcmp(id_type, "float")) {
			if(!strcmp((yyvsp[(4) - (4)].nd_obj2).type, "int")){
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "inttofloat");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			else{
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "chartofloat");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			
		}
		else{
			if(!strcmp((yyvsp[(4) - (4)].nd_obj2).type, "int")){
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "inttochar");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			else{
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "floattochar");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
		}
	}
	else {
		(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, (yyvsp[(4) - (4)].nd_obj2).nd, "="); 
	}
}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 182 "parser.y"
    { check_declaration((yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 182 "parser.y"
    { (yyvsp[(1) - (4)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (4)].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, (yyvsp[(4) - (4)].nd_obj2).nd, (yyvsp[(3) - (4)].nd_obj).name); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 183 "parser.y"
    { check_declaration((yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 183 "parser.y"
    { 
	(yyvsp[(1) - (3)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (3)].nd_obj).name); 
	(yyvsp[(3) - (3)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(3) - (3)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode((yyvsp[(1) - (3)].nd_obj).nd, (yyvsp[(3) - (3)].nd_obj).nd, "ITERATOR");  
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 188 "parser.y"
    { 
	check_declaration((yyvsp[(2) - (2)].nd_obj).name); 
	(yyvsp[(1) - (2)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (2)].nd_obj).name); 
	(yyvsp[(2) - (2)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(2) - (2)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode((yyvsp[(1) - (2)].nd_obj).nd, (yyvsp[(2) - (2)].nd_obj).nd, "ITERATOR"); 
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 196 "parser.y"
    { (yyval.nd_obj2).nd = (yyvsp[(2) - (2)].nd_obj2).nd; sprintf((yyval.nd_obj2).type, (yyvsp[(2) - (2)].nd_obj2).type); strcpy((yyval.nd_obj2).name, (yyvsp[(2) - (2)].nd_obj2).name); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 197 "parser.y"
    { sprintf((yyval.nd_obj2).type, "null"); (yyval.nd_obj2).nd = mknode(NULL, NULL, "NULL"); strcpy((yyval.nd_obj2).name, "NULL"); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 200 "parser.y"
    { 
	if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type)) {
		sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
		(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name); 
	}
	else {
		if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "int") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "float")) {
			struct node *temp = mknode(NULL, (yyvsp[(1) - (3)].nd_obj2).nd, "inttofloat");
			sprintf((yyval.nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode(temp, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "float") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "int")) {
			struct node *temp = mknode(NULL, (yyvsp[(3) - (3)].nd_obj2).nd, "inttofloat");
			sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, temp, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "int") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "char")) {
			struct node *temp = mknode(NULL, (yyvsp[(3) - (3)].nd_obj2).nd, "chartoint");
			sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, temp, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "char") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "int")) {
			struct node *temp = mknode(NULL, (yyvsp[(1) - (3)].nd_obj2).nd, "chartoint");
			sprintf((yyval.nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode(temp, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "float") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "char")) {
			struct node *temp = mknode(NULL, (yyvsp[(3) - (3)].nd_obj2).nd, "chartofloat");
			sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, temp, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else {
			struct node *temp = mknode(NULL, (yyvsp[(1) - (3)].nd_obj2).nd, "chartofloat");
			sprintf((yyval.nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode(temp, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name);
		}
	}
}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 238 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj2).name); sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (1)].nd_obj2).type); (yyval.nd_obj2).nd = (yyvsp[(1) - (1)].nd_obj2).nd; }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 255 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, "int"); add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 256 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, "float"); add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 257 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, "char"); add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 258 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); char *id_type = get_type((yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, id_type); check_declaration((yyvsp[(1) - (1)].nd_obj).name); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 261 "parser.y"
    { add('K'); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 261 "parser.y"
    { check_return_type((yyvsp[(3) - (4)].nd_obj2).name); (yyvsp[(1) - (4)].nd_obj).nd = mknode(NULL, NULL, "return"); (yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, (yyvsp[(3) - (4)].nd_obj2).nd, "RETURN"); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 262 "parser.y"
    { (yyval.nd_obj).nd = NULL; }
    break;


/* Line 1792 of yacc.c  */
#line 1919 "parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 265 "parser.y"


int main() {
    yyparse();
    printf("\n\n");
	printf("\t\t\t\t\t\t\t\t PHASE 1: LEXICAL ANALYSIS \n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t PHASE 2: SYNTAX ANALYSIS \n\n");
	print_tree(head); 
	printf("\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t PHASE 3: SEMANTIC ANALYSIS \n\n");
	if(sem_errors>0) {
		printf("Semantic analysis completed with %d errors\n", sem_errors);
		for(int i=0; i<sem_errors; i++){
			printf("\t - %s", errors[i]);
		}
	} else {
		printf("Semantic analysis completed with no errors");
	}
	printf("\n\n");
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void check_declaration(char *c) {
    q = search(c);
    if(!q) {
        sprintf(errors[sem_errors], "Line %d: Variable \"%s\" not declared before usage!\n", countn+1, c);
		sem_errors++;
    }
}

void check_return_type(char *value) {
	char *main_datatype = get_type("main");
	char *return_datatype = get_type(value);
	if((!strcmp(main_datatype, "int") && !strcmp(return_datatype, "CONST")) || !strcmp(main_datatype, return_datatype)){
		return ;
	}
	else {
		sprintf(errors[sem_errors], "Line %d: Return type mismatch\n", countn+1);
		sem_errors++;
	}
}

int check_types(char *type1, char *type2){
	// declaration with no init
	if(!strcmp(type2, "null"))
		return -1;
	// both datatypes are same
	if(!strcmp(type1, type2))
		return 0;
	// both datatypes are different
	if(!strcmp(type1, "int") && !strcmp(type2, "float"))
		return 1;
	if(!strcmp(type1, "float") && !strcmp(type2, "int"))
		return 2;
	if(!strcmp(type1, "int") && !strcmp(type2, "char"))
		return 3;
	if(!strcmp(type1, "char") && !strcmp(type2, "int"))
		return 4;
	if(!strcmp(type1, "float") && !strcmp(type2, "char"))
		return 5;
	if(!strcmp(type1, "char") && !strcmp(type2, "float"))
		return 6;
}

char *get_type(char *var){
	for(int i=0; i<count; i++) {
		// Handle case of use before declaration
		if(!strcmp(symbol_table[i].id_name, var)) {
			return symbol_table[i].data_type;
		}
	}
}

void add(char c) {
	if(c == 'V'){
		for(int i=0; i<10; i++){
			if(!strcmp(reserved[i], strdup(yytext))){
        		sprintf(errors[sem_errors], "Line %d: Variable name \"%s\" is a reserved keyword!\n", countn+1, yytext);
				sem_errors++;
				return;
			}
		}
	}
    q=search(yytext);
	if(!q) {
		if(c == 'H') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Header");
			count++;
		}
		else if(c == 'K') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c == 'V') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Function");
			count++;
		}
    }
    else if(c == 'V' && q) {
        sprintf(errors[sem_errors], "Line %d: Multiple declarations of \"%s\" not allowed!\n", countn+1, yytext);
		sem_errors++;
    }
}

struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *) malloc(sizeof(struct node));
	char *newstr = (char *) malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void print_tree(struct node* tree) {
	printf("\n\nInorder traversal of the Parse Tree is: \n\n");
	print_inorder(tree);
}

void print_inorder(struct node *tree) {
	int i;
	if (tree->left) {
		print_inorder(tree->left);
	}
	printf("%s, ", tree->token);
	if (tree->right) {
		print_inorder(tree->right);
	}
}

void insert_type() {
	strcpy(type, yytext);
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
}