#include <iostream>
using namespace std;

float sumar(float a, float b) 
{
    return a + b;
}

float restar(float a, float b) 
{
    return a - b;
}

float multiplicar(float a, float b) 
{
    return a * b;
}

float dividir(float a, float b) 
{
    return a / b;
}

int main() 
{
    int opcion;
    float num1, num2;

    cout << "Calculadora " << endl;
    cout << "1. Sumar " << endl;
    cout << "2. Restar " << endl;
    cout << "3. Multiplicar " << endl;
    cout << "4. Dividir " << endl;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;

    if (opcion >= 1 && opcion <= 4) 
    {
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
    }

    switch (opcion) 
    {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case 4:
            if (num2 == 0) 
            {
                cout << "No se puede dividir entre cero " << endl;
            } 
            else 
            {
                cout << "Resultado: " << dividir(num1, num2) << endl;
            }
            break;
        default:
            cout << "Opcion invalida " << endl;
            break;
    }

    return 0;
}