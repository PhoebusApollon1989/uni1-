#include <iostream>
using namespace std;

int main() {
    int horas;
    double tarifaPorHora;

    cout << "Introduzca las horas trabajadas (-1 para salir): ";
    cin >> horas;

    while (horas != -1) {
        cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
        cin >> tarifaPorHora;

        double salario;
        if (horas <= 40) {
            salario = horas * tarifaPorHora;
        } else {
            salario = 40 * tarifaPorHora + (horas - 40) * (tarifaPorHora * 1.5);
        }

        cout << "El salario es $" << salario << endl;

        cout << "Introduzca las horas trabajadas (-1 para salir): ";
        cin >> horas;
    }

    return 0;
}

