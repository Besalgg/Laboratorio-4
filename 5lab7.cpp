#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int contadorPares = 0;

    while (i <= 100) {
        if (i % 2 == 0) 
        {
            contadorPares++;
        }
        i++; 
    }
    cout << "Hay " << contadorPares << " numeros pares entre 1 y 100 " << endl;

    return 0;
}