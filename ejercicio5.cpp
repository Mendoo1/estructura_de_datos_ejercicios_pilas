#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;

    cout << "Ingrese un numero decimal positivo: ";
    cin >> numero;

    cout << "Binario: ";

    if (numero == 0) {
        cout << 0;
    }

    // dividimos entre 2 y guardamos el residuo
    while (numero > 0) {
        pila.push(numero % 2);
        numero = numero / 2;
    }

    // al sacar los residuos queda en el orden correcto
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }
    cout << endl;

    return 0;
}
