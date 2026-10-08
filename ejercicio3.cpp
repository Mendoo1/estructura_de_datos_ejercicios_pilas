#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> pila;
    string expresion;
    bool correcto = true;

    cout << "Ingrese la expresion: ";
    getline(cin, expresion);

    for (int i = 0; i < expresion.length(); i++) {
        if (expresion[i] == '(') {
            // si abre, lo guardamos
            pila.push('(');
        }
        else if (expresion[i] == ')') {
            // si cierra, tiene que haber uno abierto
            if (pila.empty()) {
                correcto = false;
                break;
            }
            pila.pop();
        }
    }

    // si sobraron parentesis abiertos tambien esta mal
    if (!pila.empty()) {
        correcto = false;
    }

    if (correcto) {
        cout << "Los parentesis estan balanceados (correcto)" << endl;
    } else {
        cout << "Los parentesis NO estan balanceados (incorrecto)" << endl;
    }

    return 0;
}
