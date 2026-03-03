#include <iostream>
using namespace std; 

int main () {
    int año; 
    bool bisiesto; 

    cout << "Ingrese el año "; 
    cin >> año; 

    bisiesto = (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);

    if(bisiesto)
    {
        cout << "El año " << año << " es bisiesto. ";
    }
    else 
    {
        cout << "El año " << año << " no es bisiesto. ";
    }

    return 0;
}
