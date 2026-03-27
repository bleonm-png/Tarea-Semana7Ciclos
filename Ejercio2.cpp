#include <iostream>
using namespace std;

int main() {
    float monto, total = 0;
    int contador = 0, mayores = 0, menores = 0;

    cout << "Ingrese monto (0 para salir): ";
    cin >> monto;

    while (monto != 0) {
        if (monto < 0) {
            cout << "Monto invalido. Intente nuevamente.\n";
        } else {
            total += monto;
            contador++;

            if (monto >= 100)
                mayores++;
            else
                menores++;
        }

        cout << "Ingrese monto (0 para salir): ";
        cin >> monto;
    }

    if (contador > 0) {
        cout << "\nTotal acumulado: Q" << total << endl;
        cout << "Cantidad de compras: " << contador << endl;
        cout << "Promedio: Q" << total / contador << endl;
        cout << "Compras mayores o iguales a Q100: " << mayores << endl;
        cout << "Compras menores a Q100: " << menores << endl;
    } else {
        cout << "No se ingresaron compras validas.";
    }

    return 0;
}