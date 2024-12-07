%{
#include <stdio.h>
%}
IZQ [a-zA-Z0-9._%+-]
DER [a-zA-Z0-9.-]
ARROBA @
DOMINIO \.[a-zA-Z]{2,}
%%
{IZQ}+{ARROBA}{DER}+{DOMINIO} printf("Correo electronico valido: %s\n", yytext);
.|\n    /* Ignorar otros caracteres */
%%
int main(int argc, char *argv[]) {
    yyin = fopen("prog2.txt", "r");  // Abre el archivo de entrada
    if (!yyin) {  // Verifica si el archivo se abri� correctamente
        perror("Error al abrir el archivo");
        return 1;
    }
    yylex();  // Ejecuta el analizador l�xico
    fclose(yyin);  // Cierra el archivo
    return 0;
}