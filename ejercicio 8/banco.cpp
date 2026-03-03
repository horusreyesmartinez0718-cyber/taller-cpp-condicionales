#include <iostream>
using namespace std; 

int main () {
    double saldo = 1000;
    double monto; 
    int opcion; 
    int transacciones = 0; 
    
    cout << "MENU. " << endl;  
    cout << "1. Depositar. " << endl; 
    cout << "2. Retirar. " << endl; 
    cout << "3. Consultar saldo. " << endl; 
    cout << "4. Salir. " << endl; 
    cout << "Seleccione una opcion: ";
    cin >> opcion; 

    switch (opcion) {
        case 1: 
        cout << "Monto a depositar: "; 
        cin >> monto; 
        saldo += monto; 
        transacciones++; 
        break; 

        case 2: 
        cout << "Monto a depositar: ";
        cin >> monto; 
        if (monto > saldo)
        {
            cout << "saldo insuficiente. ";
        }
        else 
        {
            saldo -= monto; 
            transacciones++; 
        }
        break; 

        case 3: 
        cout << "saldo actual: " << saldo << endl; 
        break; 

        case 4: 
        cout << "Saliendo...";
        break; 

        default: 
        cout << "Opcion invalida";

    }
    while (opcion != 4);
    cout << "Total de transacciones realizadas: " << transacciones << endl; 

    return 0; 
}
