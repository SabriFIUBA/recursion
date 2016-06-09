#include <iostream>
#include "fib1.h"
#include "fib2.h"

using namespace std;

int main(){

    int n;

    cout << "Ingrese posicion:  ";
    cin >> n;


    return ( fib1(n) + fib2(n) );

}
