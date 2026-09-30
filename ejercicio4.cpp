#include <iostream>
using namespace std;

int main() {
    double saldo = 500.0; 
    int opcion;

    cout << "Cajero automatico " << endl;
    cout << "1. Consultar saldo " << endl;
    cout << "2. Ingresar dinero " << endl;
    cout << "3. Retirar dinero " << endl;
    cout << "Seleccione una opcion (1-3): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Su saldo actual es: $ " << saldo << endl;
            break;
        case 2: {
            double ingreso;
            cout << "Ingrese el monto a depositar: $ ";
            cin >> ingreso;
            if (ingreso > 0) {
                saldo += ingreso;
                cout << "Deposito exitoso. Nuevo saldo: $ " << saldo << endl;
            } else {
                cout << "Monto invalido. " << endl;
            }
            break;
        }
        case 3: {
            double retiro;
            cout << "Ingrese el monto a retirar: $ ";
            cin >> retiro;
            if (retiro <= 0) {
                cout << "Monto invalido. " << endl;
            } else if (retiro <= saldo) {
                saldo -= retiro;
                cout << "Retiro exitoso. Saldo restante: $ " << saldo << endl;
            } else {
                cout << "Error: Saldo insuficiente. " << endl;
            }
            break;
        }
        default:
            cout << "Opcion invalida. " << endl;
    }

    return 0;
}