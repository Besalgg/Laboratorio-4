#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    const string passwordCorrecta = "password123";

    do {
        cout << "Ingresa la contraseña: ";
        cin >> password;
        if (password != passwordCorrecta) 
        {
            cout << "Contraseña incorrecta, intenta de nuevo " << endl;
        }
    } 
    while (password != passwordCorrecta); 
    cout << "Contraseña correcta, acceso concedido " << endl;

    return 0;
}