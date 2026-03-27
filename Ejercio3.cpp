#include <iostream>
using namespace std;

int main() {
    int opcion;
    float saldo = 500, monto;

    do {
        cout << "\n1. Consultar saldo\n2. Depositar\n3. Retirar\n4. Salir\n";
        cout << "Seleccione: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: Q" << saldo << endl;
                break;

            case 2:
                cout << "Monto a depositar: ";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito realizado.\n";
                }
                break;

            case 3:
                cout << "Monto a retirar: ";
                cin >> monto;
                if (monto <= saldo && monto > 0) {
                    saldo -= monto;
                    cout << "Retiro realizado.\n";
                } else {
                    cout << "Fondos insuficientes.\n";
                }
                break;

            case 4:
                cout << "Gracias por usar el sistema.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 4);

    return 0;
}