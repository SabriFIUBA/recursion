#include "esImpar.h"


void esImpar(int n){

    if (n==0){
        cout << "Es impar" << endl;
    } else {
        esPar(n-1);
    }

}

