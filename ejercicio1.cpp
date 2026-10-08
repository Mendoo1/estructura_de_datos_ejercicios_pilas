#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;

    // pedimos 5 numeros y los guardamos en la pila
    for (int i = 1; i <= 5; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        pila.push(numero);
    }

    // sacamos los numeros uno por uno
    cout << "Salida: ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    return 0;
}
