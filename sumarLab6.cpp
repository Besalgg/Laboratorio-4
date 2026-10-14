#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0; 
    int suma = 0;     
    
    cout << "Ingrese hasta que numero desea buscar los impares: ";
    cin >> numero;

    for (int i = 1; i <= numero; i += 2) 
    {
        suma += i;     
        contador++;    
    }

    cout << "Resultados: " << endl;
    cout << "Cantidad de numeros impares encontrados: " << contador << endl;
    cout << "La suma total de los numeros impares es: " << suma << endl;

    return 0;
}