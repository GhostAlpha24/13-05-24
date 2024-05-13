#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    // Verificar si el número ingresado es negativo
    if (numero < 0) {
        cout << "No se puede calcular el factorial de un número negativo." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Calcular el factorial utilizando un bucle for
    int factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0; // Salir del programa con éxito
}
