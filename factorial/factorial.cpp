#include <iostream>

using namespace std;


int factorial(int n) {

    if ( n==0 || n==1 ) { cout << "1" << endl; return 1; }
    else { cout << n*factorial(n-1) << endl; return n*factorial(n-1); }
}

int main() {


int n;

cout << "Calculadora de factorial n!" << endl << endl;

cout << "Ingrese un numero entero >=0 :   ";

cin >> n ;

cout << endl << "Resultado:   " << factorial(n) << endl;


}
