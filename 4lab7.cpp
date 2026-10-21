#include <iostream>
using namespace std;

int main() {
    int opcion;
    double saldo = 500.00;
    double monto;

    do {
        cout << "Cajero automatico " << endl;
        cout << "1. Depositar " << endl;
        cout << "2. Retirar " << endl;
        cout << "3. Salir " << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa la cantidad a depositar: ";
                cin >> monto;
                if (monto > 0) 
                {
                    saldo += monto;
                    cout << "Deposito exitoso. Nuevo saldo: $ " << saldo << endl;
                } 
                else 
                {
                    cout << "Cantidad invalida " << endl;
                }
                break;
            case 2:
                cout << "Ingresa la cantidad a retirar: ";
                cin >> monto;
                if (monto > 0 && monto <= saldo) 
                {
                    saldo -= monto;
                    cout << "Retiro exitoso, saldo restante: $ " << saldo << endl;
                } 
                else 
                {
                    cout << "Fondos insuficientes o cantidad invalida " << endl;
                }
                break;
            case 3:
                cout << "Saliendo del cajero " << endl;
                break;
            default:
                cout << "Opcion invalida, intenta de nuevo " << endl;
        }
    } 
    while (opcion != 3);

    return 0;
}