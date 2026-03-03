#include <iostream>
using namespace std; 

int main () {
    int a = 5; 
    int b = 10; 

    cout << "Valores: a =" << a << ", b = " << b << endl; 

    int x = a; 
    int y = b; 
    int temporal = x; 
    x = y; 
    y = temporal; 
    cout << "Metodo 1 (temporal): a = " << x << ", b = " << y << endl; 

    int x = a; 
    int y = b; 
    x = x + y; 
    y = x - y; 
    x = x - y; 
    cout << "Metodo 2 (aritmetico): a = " << x << ", b = " << y << endl; 

    int x = a; 
    int y = b; 
    x = x + y; 
    y = x - y; 
    x = x - y; 
    cout << "Metodo 3 (XOR): a =" << x << ", b = " << y << endl; 

    return 0; 
}
