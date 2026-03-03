#include <iostream>
using namespace std;

int main () {
    int nota;  

    cout << "Ingrese la calificación: ";
    cin >> nota;
    
    if(nota < 0 || nota > 50) {
        cout << "ERROR";
    }
    
    cout << "Calificacion: " << nota << endl; 

    if (nota >= 30)
    {
        cout << "APROBADO"; 
    }
    else
    {
        cout << "REPROBADO"; 
    }

    return 0; 

}
