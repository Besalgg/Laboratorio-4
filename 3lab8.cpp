#include <iostream>
using namespace std;

int mayor(int a, int b, int c) 
{
    int maxVal = a;
    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }
    return maxVal;
}

int main() 
{
    int n1, n2, n3;
    cout << "Ingrese tres numeros enteros separados por espacio: ";
    cin >> n1 >> n2 >> n3;
    cout << "El mayor de los tres numeros es: " << mayor(n1, n2, n3) << endl;

    return 0;
}