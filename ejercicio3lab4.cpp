#include <iostream>
using namespace std;

int main() {
    double numero;

    cout << "Ingresa el numero. ";
    cin >> numero;

    if (numero < 1) {
        cout << "El numero esta fuera del rango por debajo de 1. " << endl;
    }
    else if (numero > 100) {
        cout << "El numero esta fuera del rango por encima de 100. " << endl;
    }
    else {
        cout << "El numero se encuentra dentro del rango de 1 a 100. " <<endl;
    }
    
    return 0;
}