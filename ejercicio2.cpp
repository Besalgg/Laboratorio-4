#include <iostream>
using namespace std;

int main() {
    double MontoOriginal, MontoFinal, descuento = 0;

    cout << "Ingresa el monto de la compra ($): ";
    cin >> MontoOriginal;

    if (MontoOriginal > 200) {
        descuento = 0.2;
        cout << "Se aplico un veinte porciento de descuento. " << endl;
    }
    else if (MontoOriginal > 100) {
        descuento = 0.1;
        cout << "Se aplico un diez porciento de descuento. " << endl;
    }
    else {
        cout << "No aplica descuento para esta compra. " << endl; 
    }
    MontoFinal = MontoOriginal - (MontoOriginal * descuento);
    cout << "El total a pagar es: $ " << MontoFinal << endl;

    return 0;
}