#include "nrComplexe.h"
nr_complex impartire(nr_complex a, nr_complex b)
{
    nr_complex rezultat;
    rezultat.real = (a.real * b.real + a.imaginar * b.imaginar) / (a.imaginar * a.imaginar + b.imaginar * b.imaginar);
    rezultat.imaginar = (b.real * a.imaginar - a.real * b.imaginar) / (a.imaginar * a.imaginar + b.imaginar * b.imaginar);
    return rezultat;
}


