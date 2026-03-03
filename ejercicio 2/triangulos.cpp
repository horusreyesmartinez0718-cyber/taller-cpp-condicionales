#include <iostream>
using namespace std;

int main () {
     double lado1, lado2, lado3; 

     cout << "Ingrese el primer lado: ";
     cin >> lado1; 
     cout << "ingrese el segundo lado ";
     cin >> lado2; 
     cout << "Ingrese el segundo lado: ";
     cin >> lado3; 

     if (lado1 + lado2 > lado3 &&, lado1 + lado3 > lado2 &&, lado2 + lado3 > lado1)
     {
        cout << "Es un triangulo valido. ";

        if(lado1 == lado2 && lado2 == lado3)
        {
            cout << "Equilatero ";
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            cout << "Isosceles ";
        }
        else
        {
            cout << "Escaleno";
        }

        double mayor, ladoa, ladob;

        if (lado1 >= lado2 && lado1 >= lado3)
        {
            mayor = lado1; 
            ladoa = lado2;
            ladob = lado3; 
        }
        else if (lado2 >= lado1 && lado2 >= lado3)
        {
            mayor = lado2; 
            ladoa = lado1;
            ladob = lado3;
        }
        else 
        {
            mayor = lado3; 
            ladoa = lado1;
            ladob = lado2;
        }

        if (mayor * mayor == ladoa * ladoa + ladob * ladob)
        {
            cout << "Rectangulo ";
        }
        else if (mayor * mayor < ladoa * ladoa + ladob * ladob)
        {
            cout << "Acutangulo ";
        }
        else 
        {
            cout << "Obtusangulo ";
        }
     }
     else 
     {
        cout << "ERROR ";
     }

     return 0;

}
