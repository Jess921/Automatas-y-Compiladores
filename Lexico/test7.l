%option noyywrap
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h> // Incluir la biblioteca para tolower
%}

%%

[\n\t] { /* Ignorar */ }


[a-zA-Z]+ {
    int i; // Declarar 'i' aqu�

    // Convertir a min�sculas
    for (i = 0; yytext[i]; i++) {
        yytext[i] = tolower(yytext[i]);
    }
    
    // Imprimir la palabra encontrada
    printf("Palabra encontrada: %s\n", yytext);
}

%% 

int main(int argc, char *argv[]) {
    yyin = fopen("textotest7.txt", "r");  // Abre el archivo de entrada
    if (!yyin) {  // Verifica si el archivo se abri� correctamente
        perror("Error al abrir el archivo");
        return 1;
    }
    yylex();  // Ejecuta el analizador l�xico
    fclose(yyin);  // Cierra el archivo
    return 0;
}