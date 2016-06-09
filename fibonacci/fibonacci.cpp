#include <iostream>

using namespace std;


int contadorLlamadas=0;

int Fibo(int pos) {
    int fib;
    if (pos==0 || pos==1) {
        fib=1;
        //contadorLlamadas++;
    }
    else {
        fib = Fibo(pos-2) + Fibo(pos-1);
        contadorLlamadas=contadorLlamadas+2;
    }

    return fib;
}

int main() {

int pos=0;



cout << "Sucesion de Fibonacci" << endl<<endl<< "La sucesion comienza con los numeros Fibonacci(pos=0)=Fibonacci(pos=1)=1 y a partir de estos, cada termino  es la suma de los dos anteriores." <<endl<<endl;


do {
    cout << "Ingrese la posicion de la sucesion (mayor o igual a cero):  ";
    cin >> pos;
} while ( pos < 0 );

cout << "El numero Fibonacci para la posicion "<<pos<<" es:  ";
pos = Fibo(pos);
cout << pos << endl<<endl;

cout << "Llamadas:   " << contadorLlamadas << endl;

return pos;
}
