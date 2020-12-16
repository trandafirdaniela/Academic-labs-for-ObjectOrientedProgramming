#include <iostream>
#include "nrComplexe.h"
using namespace std;
int main()
{
    nr_complex x, y;
    cout << "Primul nr: "; cin >> x.real >> x.imaginar;
    cout << x.real << "+" << x.imaginar << "i\n";
    cout << "Al doilea nr:"; cin >> y.real >> y.imaginar;;
    cout << y.real << " " << y.imaginar << "i\n";
    nr_complex rez;
    rez = impartire(x, y);
    cout << rez.real << "+" << rez.imaginar << "i";;
    return 0;
}