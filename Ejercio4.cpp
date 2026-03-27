#include <iostream>
using namespace std;

int main() {
    int calificacion;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int total = 0;

    do {
        cout << "Ingrese calificacion (1=Malo, 2=Regular, 3=Bueno, 4=Excelente, 0=Salir): ";
        cin >> calificacion;

        if (calificacion == 1) {
            c1++;
            total++;
        }
        else if (calificacion == 2) {
            c2++;
            total++;
        }
        else if (calificacion == 3) {
            c3++;
            total++;
        }
        else if (calificacion == 4) {
            c4++;
            total++;
        }
        else if (calificacion != 0) {
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }

    } while (calificacion != 0);

    cout << endl;
    cout << "Total de respuestas: " << total << endl;
    cout << "Malo: " << c1 << endl;
    cout << "Regular: " << c2 << endl;
    cout << "Bueno: " << c3 << endl;
    cout << "Excelente: " << c4 << endl;

    return 0;
}