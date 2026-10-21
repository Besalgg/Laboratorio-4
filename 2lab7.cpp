#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;

    cout << "Ingresa un numero para ver su tabla de multiplicar: ";
    cin >> n;
    cout << "Tabla de multiplicar del " << n << endl;
    while (i <= 10) 
    {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}