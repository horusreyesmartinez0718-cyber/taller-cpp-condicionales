#include <iostream>
using namespace std;

int main () {
    const int leer = 0b001;
    const int escribir = 0b010;
    const int ejecutar = 0b100;

    int permisos; 

    cout << "Ingrese un valor de permisos (0-7): ";
    cin >> permisos; 

    cout << "Permisos detectados ";

    if (permisos & leer)
    {
        cout << "Tiene permisos para leer ";
    }
    else 
    {
        cout << "No tiene permisos para leer ";
    }
    if (permisos & escribir)
    {
        cout << "Tiene permisos para escribir ";
    }
    else 
    {
        cout << "No tiene permisos para escribir";
    }
    if (permisos & ejecutar)
    {
        cout << "Tiene permisos para ejecutar";
    }
    else 
    {
        cout << "No tiene permisos para ejecutar";
    }

    return 0;
}
