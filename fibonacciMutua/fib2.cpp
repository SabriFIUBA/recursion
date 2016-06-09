#include "fib2.h"


int fib2 (int n){

    if (n==0) { return 0; }
    else { return fib2(n-1) + fib1(n-1); }
}
