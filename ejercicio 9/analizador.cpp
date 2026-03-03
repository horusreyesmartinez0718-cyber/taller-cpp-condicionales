#include <iostream>
using namespace std;

int main() {

    double peso, altura, imc;

    cout << "Ingrese su peso (kg): ";
    cin >> peso;

    cout << "Ingrese su altura (m): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Su IMC es: " << imc << endl;

    if (imc < 18.5)
        {
            cout << "Clasificacion: Bajo peso";
        }    
    else if (imc < 25)
    {
        cout << "Clasificacion: Normal";
    }
    else if (imc < 30)
    {
        cout << "Clasificacion: Sobrepeso";
    }
    else if (imc < 35)
    {
        cout << "Clasificacion: Obesidad I";
    }
    else
    {
        cout << "Clasificacion: Obesidad II";
    }

    return 0;
}
