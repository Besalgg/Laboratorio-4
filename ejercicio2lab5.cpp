#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Menu de areas: " << endl;
    cout << "1. Circulo " << endl;
    cout << "2. Cuadrado " << endl;
    cout << "3. Triangulo " << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double radio;
            cout << "Ingrese el radio: ";
            cin >> radio;
            cout << "El area del circulo es: " << 3.1416 * radio * radio << endl;
            break;
        }
        case 2: {
            double lado;
            cout << "Ingrese el lado: ";
            cin >> lado;
            cout << "El area del cuadrado es: " << lado * lado << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingrese la base: ";
            cin >> base;
            cout << "Ingrese la altura: ";
            cin >> altura;
            cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}