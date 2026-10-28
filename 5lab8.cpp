#include <iostream>
using namespace std;

int factorial(int n) 
{
    int resultado = 1;
    for (int i = 1; i <= n; i++) 
    {
        resultado *= i;
    }
    return resultado;
}

void mostrarFactoriales(int limite) 
{
    cout << "Tabla de factoriales del 1 al " << limite << ":" << endl;
    for (int i = 1; i <= limite; i++) 
    {
        cout << i << "! = " << factorial(i) << endl;
    }
}

int main() 
{
    int limite;
    cout << "Ingrese el numero limite para mostrar la tabla de factoriales: ";
    cin >> limite;

    if (limite < 0) 
    {
        cout << "El limite debe ser un numero entero positivo o cero." << endl;
    } 
    else 
    {
        mostrarFactoriales(limite);
    }

    return 0;
}