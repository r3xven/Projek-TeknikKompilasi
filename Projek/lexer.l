%{
    /*definitions */
    #include "parser.tab.h"
%}

%option noyywrap
/* rules */
%%

[0-9]+ { yylval.num = atoi(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9]* {printf("Identifier\n"); return 0; }
"+" {return PLUS; }
"-" {return MINUS; }
"*" {return MULTIPLY; }
\n {return EOL; }
. {}

%%

