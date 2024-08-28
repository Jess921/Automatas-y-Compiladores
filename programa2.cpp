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

    std::istringstream ss(input);
    std::string palabra;

    int enteros = 0, palabras = 0, compuestas = 0;

    while (ss >> palabra) {
        if (esEntero(palabra)) {
            enteros++;
        } else if (esPalabra(palabra)) {
            palabras++;
        } else if (esCompuesta(palabra)) {
            compuestas++;
        }
    }

    std::cout << enteros << " enteros, "
              << palabras << " palabras, "
              << compuestas << " compuestas" << std::endl;

    return 0;
}