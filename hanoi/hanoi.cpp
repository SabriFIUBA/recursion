#include <iostream>

using namespace std;

void Hanoi( int N, char Ori, char Des, char Aux){

    if ( N > 0 ) {
        cout << "Hanoi (" << N-1 << ", " << Ori << ", " << Aux << ", " << Des << ")" << endl << endl;
        Hanoi(N-1, Ori, Aux, Des);

        cout << "Mover disco de  " << Ori << "  a  " << Des << endl << endl << endl;

        cout << "Hanoi (" << N-1 << ", " << Aux << ", " << Des << ", " << Ori << ")" << endl << endl;
        Hanoi (N-1, Aux, Des, Ori);
    }


}


int main(){

    int N=3; char Ori='A'; char Aux='B'; char Des='C';

    cout << "Hanoi (" << N << ", " << Ori << ", " << Des << ", " << Aux << ")" << endl << endl;

    Hanoi (N, Ori, Des, Aux);

    return 0;
}

