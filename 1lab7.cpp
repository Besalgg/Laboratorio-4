#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;
    int i = 1;

    cout << "Ingresa un numero: ";
    cin >> n;
    while (i <= n) 
    {
        suma += i;
        i++;
    }
    cout << "La suma de los numeros del 1 al " << n << " es: " << suma << endl;

    return 0;
}