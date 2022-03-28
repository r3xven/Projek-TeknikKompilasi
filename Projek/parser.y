%{
    /*definitions */
%}

%union {
    int num;
    char sym;
}

%token EOL
%token<num> NUMBER
%type<num> exp
%token PLUS MINUS MULTIPLY
%token IDENTIFIER

/* rules */
%%

input:
|   line input
;

line: 
    exp EOL {printf("%d\n", $1); }
|   EOL
;

exp: 
    NUMBER { $$ = $1; }
|   exp PLUS exp { $$ = $1 + $3; }
|   exp MINUS exp { $$ = $1 - $3; }
|   exp MULTIPLY exp { $$ = $1 * $3; }
|   exp IDENTIFIER { $$ = $1; }
;

%%

int main(){
    yyparse();
    return 0;
}

yyerror(char* s) {
    printf("ERROR: %s\n");
    return 0;
}