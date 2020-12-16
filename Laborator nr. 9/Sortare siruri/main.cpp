#include "Sir.h"
#include <vector>
using namespace std;

int main() {
    int intV[] = { 2220,5,43,-17,2 };
    int size = 0;
    size= sizeof(intV) / sizeof(int);
    cout << "Afisare inainte de sortare:\n";
    afisare(intV, size);
    bubbleSort(intV, size);
    cout << "Afisare dupa sortare:\n";

    afisare(intV, size);

    double doubleV[] = { 5.5,-20.45, 0.25,6.1,1.2,458.3 };
    size = sizeof(doubleV) / sizeof(double);
    cout << "Afisare inainte de sortare:\n";
    afisare(doubleV, size);
    bubbleSort(doubleV, size);
    cout << "Afisare dupa sortare:\n";
    afisare(doubleV, size);

    string name[] = { "Maria Ioana", "Bogdan Andrei","Ana","Carmen","Mihai","Andreea","Mircea" };
    size = sizeof(name) / sizeof(string);
    cout << "Afisare inainte de sortare:\n";
    afisare(name, size);
    bubbleSort(name, size);
    cout << "Afisare dupa sortare:\n";
    afisare(name, size);
    
    
    return 0;
}