#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese el numero hasta el que desea mostrar multiplos de 5: ";
    cin >> numero;
    cout << "Multiplos de 5 hasta " << numero << endl;
    
    for (int i = 5; i <= numero; i += 5) 
    {
        cout << i << endl;
    }

    return 0;
}