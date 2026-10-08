#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> acciones;
    int opcion;
    string accion;

    do {
        cout << "\n1. Hacer una accion" << endl;
        cout << "2. Deshacer" << endl;
        cout << "3. Ver la ultima accion (tope)" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore(); // limpia el enter para poder usar getline

        if (opcion == 1) {
            cout << "Escriba la accion: ";
            getline(cin, accion);
            acciones.push(accion);
            cout << "Accion guardada" << endl;
        }
        else if (opcion == 2) {
            if (acciones.empty()) {
                cout << "No hay nada que deshacer" << endl;
            } else {
                cout << "Se deshizo: " << acciones.top() << endl;
                acciones.pop();
            }
        }
        else if (opcion == 3) {
            if (acciones.empty()) {
                cout << "La pila esta vacia" << endl;
            } else {
                cout << "Ultima accion: " << acciones.top() << endl;
            }
        }
    } while (opcion != 4);

    return 0;
}
