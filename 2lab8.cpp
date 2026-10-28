#include <iostream>
using namespace std;

float celsiusAFahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() 
{
    float celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    float fahrenheit = celsiusAFahrenheit(celsius);
    cout << celsius << " C equivalen a " << fahrenheit << " F " << endl;

    return 0;
}