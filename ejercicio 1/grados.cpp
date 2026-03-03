#include <iostream>
using namespace std;

int main () {
    double celsius;
    double fahrenheit;
    double kelvin;
    double rankine;

    cout << "Ingrese la temperatura en grados celcius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 237.15;
    rankine = (celsius + 273.15) * 9 / 5;

    cout << "Temperatura en Fahrenheit: " << fahrenheit << endl;
    cout << "Temperatura en Kelvin: " << kelvin << endl; 
    cout << "Temperatura en Rankine: " << rankine << endl; 
    
    return 0;
}
