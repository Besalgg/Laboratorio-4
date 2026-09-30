#include <iostream>
using namespace std;

int main() {
    char color;
    cout << "Ingrese el color del semaforo (R = Rojo, A = Amarillo, V = Verde): ";
    cin >> color;

    switch (color) {
        case 'R':
        case 'r':
            cout << "Alto " << endl;
            break;
        case 'A':
        case 'a':
            cout << "Precaucion " << endl;
            break;
        case 'V':
        case 'v':
            cout << "Avance " << endl;
            break;
        default:
            cout << "Color no reconocido " << endl;
    }

    return 0;
}