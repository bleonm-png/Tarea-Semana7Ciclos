#include <iostream>
using namespace std;

int main() {
    string usuario;
    int clave;
    int intentos = 0;

    while (usuario != "admin" || clave != 2026) {
        cout << "Ingrese usuario: ";
        cin >> usuario;
        cout << "Ingrese clave: ";
        cin >> clave;

        if (usuario != "admin" || clave != 2026) {
            cout << "Datos incorrectos.\n\n";
            intentos++;
        }
    }

    cout << "Bienvenido al sistema.\n";
    cout << "Acceso concedido.\n";
    cout << "Intentos incorrectos: " << intentos;

    return 0;
}