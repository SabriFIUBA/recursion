#include "esPar.h"

void esPar(int n){

    if (n==0){
        cout << "Es par" << endl;
    } else {
        esImpar(n-1);
    }
}
