#include <iostream>

using namespace std;

int potencia (int n, int e){
    int resultado;


    if ( e == 0 ) { resultado = 1; }
    else { resultado = n * potencia( n , (e-1) ); }

    return resultado;

}

int potenciaDyV (int b, int e){

    if (e==0) {return 1;}
    else    if (e==1) {return b;}
            else {
                int r=potencia(b, e/2);
                if (e%2==0) {return r*r;}
                else {return r*r*b;}
            }
}


int main(){


int num;
int exp;



cout << "Calculadora de potencias" << endl<<endl;

cout << "Ingrese numero:   "; cin >> num; cout << endl;

cout << "Ingrese exponente:   "; cin >> exp; cout << endl << endl;



cout << "Resultado:   " << potenciaDyV(num, exp) << endl;


return 0;
}
