#include <iostream> // Biblioteca para entrada y salida estándar
using namespace std;

int main() {
    // Declaración de variables
    double num1, num2, resultado;
    char operacion;

    // Mensaje al usuario para introducir los números y la operación deseada
    cout << "---- Calculadora basica ----.\n";
    cout << "Introduce el primer numero: ";
    cin >> num1; // Se almacena el primer número

    cout << "Introduce el segundo numero: ";
    cin >> num2; // Se almacena el segundo número

    cout << "Introduce la operacion que deseas realizar (+, -, *, /): ";
    cin >> operacion; // Se almacena la operación deseada

    // Evaluación de la operación seleccionada
    switch (operacion) {
        case '+': // Suma
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case '-': // Resta
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case '*': // Multiplicación
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case '/': // División
            if (num2 != 0) { // Verifica que el divisor no sea cero
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no está permitida." << endl;
            }
            break;
        default: // Caso en el que el usuario introduce una operación no válida
            cout << "Operacion no válida. Por favor, introduce +, -, * o /." << endl;
    }

    return 0; // Fin del programa
}
