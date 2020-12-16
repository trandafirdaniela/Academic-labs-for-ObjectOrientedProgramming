#include "fractie.h"
fractie::fractie()
{
	numitor = 0;
	numarator = 0;
}
fractie::fractie(int&n, int&m)
{
	numitor = n;
	numarator = m;
}
fractie::~fractie()
{

}
fractie& fractie::operator =(const fractie& fr)
{
	numarator = fr.numarator;
	numitor = fr.numitor;
	return *this;
}
fractie fractie::operator +(const fractie& fr)
{
	fractie rezultat = *this;
	rezultat.numarator = numarator * fr.numitor + fr.numarator * numitor;
	rezultat.numitor = numitor * fr.numitor;
	return rezultat;

}
fractie fractie::operator -(const fractie& fr)
{
	fractie rezultat = *this;
	rezultat.numarator = numarator * fr.numitor - fr.numarator * numitor;
	rezultat.numitor = numitor * fr.numitor;
	return rezultat;
}
fractie fractie::operator *(const fractie& fr)
{
	fractie rezultat = *this;
	rezultat.numarator = numarator * fr.numarator;
	rezultat.numitor = numitor * fr.numitor;
	return rezultat;

}
fractie fractie:: operator /(const fractie& fr)
{
	if (numarator == 0)
	{
		throw "NU se poate.\n";
	}
	fractie rezultat = *this;
	rezultat.numarator = numarator * fr.numitor;
	rezultat.numitor = numitor * fr.numarator;
	return rezultat;
}
fractie& fractie:: operator !()//operator pentru simplificare
{

	if(numarator<0)
	{
		numarator = numarator * -1;
		numitor = numitor * -1;
	}
	int div = cmmdc(numitor, numarator);
	numarator = numarator / div; 
	numitor = numitor / div;
	return *this;

}
ostream& operator << (ostream& os, const fractie&fr)
{
	os << fr.numarator << "/" << fr.numitor;
	return os;
}
istream& operator >> (istream& is,  fractie&fr)
{
	is >> fr.numarator >> fr.numitor;
	return is;
}
int cmmdc(int a, int b)
{
	if(b == 0)
		return a;
	return cmmdc(b, a % b);

}