#include <iostream>
using namespace std; 

int main () {
    double num1, num2;
    char signo; 

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese su  operador (+, -, *, /): ";
    cin >> signo; 
    cout << "Ingrese otro numero: ";
    cin >> num2; 

    switch (signo){
        case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break; 
        case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break; 
        case '*':
        cout << "Resultado: " << num1 * num2 << endl; 
        break; 
        case '/': 
        if (num2 == 0)
        {
            cout << "ERROR";
        }  
        else 
        {
            cout << "Resultado: " << num1 / num2 << endl; 
        }
        break; 
        case '%':
        if (num2 == 0)
        {
            cout << "ERROR";
        }
        else
        {
            cout << "Resultado: " << (int) num1 % (int) num2 << endl; 
        }
        break; 

        default: 
        cout << "Operador no valido. ";
    }
    return 0;
}
