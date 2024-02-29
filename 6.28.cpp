#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool probarPalindromo(const string &cadena, size_t inicio, size_t fin);

int main() {
    string pruebas[] = {"radar", "reconocer", "anita lava la tina"};

    for (const string &prueba : pruebas) {
        cout << "¿Es \"" << prueba << "\" un palíndromo? " << (probarPalindromo(prueba, 0, prueba.length() - 1) ? "Sí" : "No") << endl;
    }

    return 0;
}

bool probarPalindromo(const string &cadena, size_t inicio, size_t fin) {
    return (inicio >= fin) || (tolower(cadena[inicio]) == tolower(cadena[fin]) && probarPalindromo(cadena, inicio + 1, fin - 1));
}

