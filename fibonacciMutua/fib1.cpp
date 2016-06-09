#include "fib1.h"




int fib1 (int n){

    if (n==0) { return 1; }
    else { return fib2(n-1); }
}


