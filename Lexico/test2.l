%option noyywrap
%{
	#include<stdio.h>
%}

%%
[\n\t] ;
-?[0-9]+(\.[0-9]+) {printf("numero decimal\n");}
%%

int main()
{

printf("Ingrese numero decimal: ");

yylex();
	return 0;
}