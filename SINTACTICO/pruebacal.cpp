#include <iostream> // Biblioteca para entrada y salida est�ndar
using namespace std;

int main() {
    // Declaraci�n de variables
    double num1, num2, resultado;
    char operacion;

    // Mensaje al usuario para introducir los n�meros y la operaci�n deseada
    cout << "---- Calculadora basica ----.\n";
    cout << "Introduce el primer numero: ";
    cin >> num1; // Se almacena el primer n�mero

    cout << "Introduce el segundo numero: ";
    cin >> num2; // Se almacena el segundo n�mero

    cout << "Introduce la operacion que deseas realizar (+, -, *, /): ";
    cin >> operacion; // Se almacena la operaci�n deseada

    // Evaluaci�n de la operaci�n seleccionada
    switch (operacion) {
        case '+': // Suma
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case '-': // Resta
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case '*': // Multiplicaci�n
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case '/': // Divisi�n
            if (num2 != 0) { // Verifica que el divisor no sea cero
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no est� permitida." << endl;
            }
            break;
        default: // Caso en el que el usuario introduce una operaci�n no v�lida
            cout << "Operacion no v�lida. Por favor, introduce +, -, * o /." << endl;
    }

    return 0; // Fin del programa
}
