%option noyywrap
%{
	#include<stdio.h>
%}

%%
[\n\t] ;
[A-Za-z]+[_0-9] {printf("variables\n");}

%%

int main()
{

printf("Ingrese las variables: ");

yylex();
	return 0;
}