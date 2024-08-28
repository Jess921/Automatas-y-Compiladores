#include <iostream>
#include <sstream>
#include <cctype>

bool esEntero(const std::string &str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return !str.empty();
}

bool esPalabra(const std::string &str) {
    for (char c : str) {
        if (!isalpha(c)) return false;
    }
    return !str.empty();
}

bool esCompuesta(const std::string &str) {
    bool tieneLetra = false, tieneNumero = false;
    for (char c : str) {
        if (isalpha(c)) tieneLetra = true;
        if (isdigit(c)) tieneNumero = true;
    }
    return tieneLetra && tieneNumero;
}

int main() {
    std::string input;
    std::cout << "Ingresa una cadena de caracteres: ";
    std::getline(std::cin, input);

    int caracteresConEspacios = input.length();
    int caracteresSinEspacios = 0;
    int totalLexemas = 0;

    for (char c : input) {
        if (!isspace(c)) {
            caracteresSinEspacios++;
        }
    }

    std::istringstream ss(input);
    std::string palabra;
    int enteros = 0, palabras = 0, compuestas = 0;

    while (ss >> palabra) {
        totalLexemas++;
        if (esEntero(palabra)) {
            enteros++;
        } else if (esPalabra(palabra)) {
            palabras++;
        } else if (esCompuesta(palabra)) {
            compuestas++;
        }
    }

	std::cout << "Total de caracteres (con espacios): " << caracteresConEspacios << std::endl;
	std::cout << "Total de caracteres (sin espacios): " << caracteresSinEspacios << std::endl;
	std::cout << "Total de lexemas: " << totalLexemas << std::endl;
    std::cout << "Total de palabras: " << palabras << std::endl;
    std::cout << "Total de numeros: " << enteros << std::endl;
    std::cout << "Total de combinadas: " << compuestas << std::endl;

    return 0;
}