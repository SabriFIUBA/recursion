#include <iostream>

using namespace std;

int mcd ( int a, int b){


if (a<b) {return mcd(b,a); }
else { if (a%b==0) {return b; }
        else { return (mcd(b,a%b)); } }

}

int main() {

int a;
int b;


cout << "Maximo comun divisor entre dos numeros"  << endl << endl;

cout << "Ingrese numero 1:   " ; cin >> a; cout << endl << endl;
cout << "Ingrese numero 2:   " ; cin >> b; cout << endl << endl;

cout << "Maximo comun divisor:  " << mcd(a,b) << endl;


return 0;


}
