/* Recursividad anidada*/

#include <iostream>

using namespace std;


unsigned long long ack(int m, int n){

    if (m==0) { return n + 1;}
    else
        if (n==0) { return ack( m-1, 1); }
        else { return ack(m-1, ack(m, n-1)); }
}



int main(){

    int m; int n;
    cout << "Ingrese m:  "; cin >> m; cout << endl;
    cout << "Ingrese n:  "; cin >> n; cout << endl;

    cout << "Resultado:  " << ack(m, n) << endl;


    return 0;
}
