#include <iostream>

using namespace std;

int potencia (int n, int e){
    int resultado;


    if ( e == 0 ) { resultado = 1; }
    else { resultado = n * potencia( n , (e-1) ); }

    return resultado;

}




int main(){


int num;
int exp;



cout << "Calculadora de potencias" << endl<<endl;

cout << "Ingrese numero:   "; cin >> num; cout << endl;

cout << "Ingrese exponente:   "; cin >> exp; cout << endl << endl;



cout << "Resultado:   " << potencia(num, exp) << endl;


return 0;
}

