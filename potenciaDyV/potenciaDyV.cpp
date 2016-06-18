#include <iostream>

using namespace std;


int callsCounter = 0;

int potenciaDyV (int b, int e){

    callsCounter++;

    if (e==0) {return 1;}
    else    if (e==1) {return b;}
            else {
                int r=potenciaDyV(b, e/2);
                if (e%2==0) {return r*r;}
                else {return r*r*b;}
            }
}


int main(){


int num;
int exp;



cout << "Calculadora de potencias" << endl<<endl;

cout << "Ingrese base:   "; cin >> num; cout << endl;

cout << "Ingrese exponente:   "; cin >> exp; cout << endl << endl;



cout << "Resultado:   " << potenciaDyV(num, exp) << endl << endl;

cout << "Llamadas:   " << callsCounter << endl;



return 0;


}
