#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese el numero para iniciar la cuenta regresiva: ";
    cin >> numero;
    cout << "Cuenta regresiva:" << endl;

    for (int i = numero; i >= 0; i--) 
    {
        cout << i << endl;
    }

    return 0;
}