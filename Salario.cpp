#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Declaración de variables
    string nombre;
    int horas_trabajadas;
    double tarifa_base = 10.0;
    double salario_bruto, salario_neto, impuestos;

    // Pedir nombre del trabajador y horas trabajadas
    cout << "Ingrese el nombre del trabajador: ";
    getline(cin, nombre);
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_trabajadas;

    // Calcular salario bruto
    if (horas_trabajadas <= 160) {
        salario_bruto = horas_trabajadas * tarifa_base;
    } else {
        int horas_normales = 160;
        int horas_extra = horas_trabajadas - horas_normales;
        salario_bruto = horas_normales * tarifa_base + horas_extra * (tarifa_base * 1.5);
    }

    // Calcular impuestos
    if (salario_bruto <= 2000) {
        impuestos = 0;
    } else if (salario_bruto <= 2200) {
        impuestos = salario_bruto * 0.2;
    } else {
        impuestos = salario_bruto * 0.3;
    }

    // Calcular salario neto
    salario_neto = salario_bruto - impuestos;

    // Mostrar resultado
    cout << "Nombre del trabajador: " << nombre << endl;
    cout << "Salario bruto: $" << salario_bruto << endl;
    cout << "Impuestos: $" << impuestos << endl;
    cout << "Salario neto: " << salario_neto << endl;
}
