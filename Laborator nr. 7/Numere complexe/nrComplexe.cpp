#include "nrComplexe.h"
nrComplexe::nrComplexe()
{
	real = 0.0;
	imaginar = 0.0;
}
nrComplexe::nrComplexe(double real, double imaginar)
{
	this->real = real;
	this->imaginar = imaginar;
}
nrComplexe::~nrComplexe()
{
}
nrComplexe& nrComplexe::operator = (const nrComplexe numar)
{
	real = numar.real;
	imaginar = numar.imaginar;
	return *this;
}
nrComplexe& nrComplexe::operator +(const nrComplexe numar)
{
	nrComplexe rezultat = *this;
	rezultat.real += numar.real;
	rezultat.imaginar += numar.imaginar;
	return rezultat;
}
nrComplexe& nrComplexe::operator - (const nrComplexe numar)
{
	nrComplexe rezultat = *this;
	rezultat.real -= numar.real;
	rezultat.imaginar -= numar.imaginar;
	return rezultat;
}
nrComplexe& nrComplexe::operator * (const nrComplexe numar)
{
	nrComplexe rezultat = *this; // this-> == *this == (*this)
	rezultat.real = real* numar.real- imaginar*numar.imaginar;
	rezultat.imaginar = (real * numar.imaginar) + (numar.real * imaginar);
	return rezultat;
}
nrComplexe& nrComplexe:: operator / (const nrComplexe numar)
{
	nrComplexe rezultat ;
	
	int div = (numar.real * numar.real) + (numar.imaginar * numar.imaginar);
	rezultat.real = (real * numar.real) + (imaginar * numar.imaginar);
	rezultat.real /= div;
    //cout << rezultat.real << endl;
	rezultat.imaginar = (imaginar * numar.real) - (real * numar.imaginar);
	rezultat.imaginar /= div;
	return rezultat;
}
double nrComplexe:: operator ~ () //pentru modul nr
{
	return sqrt((real * real) + (imaginar * imaginar));
}
nrComplexe& nrComplexe::operator ^ (int putere)
{
	nrComplexe r = *this;
	nrComplexe pw = *this;
	putere--;
	while (putere)
	{
		if (putere % 2 == 1)
		{
			r = r * pw;
		}
		pw = pw * pw;
		putere /= 2;
	}
	return r;
}
//nrComplexe& nrComplexe::operator ^ (int putere)
//{
//	int i;
//
//	nrComplexe rezultat=*this;
//	for (i = 1; i <putere; i++)
//	{
//		rezultat = rezultat * (*this);
//	}
//	return rezultat;
//
//}
void nrComplexe::citire()
{
	cin >> real >> imaginar;
}
ostream& operator<<(ostream& os, const nrComplexe&numar)
{
	os << numar.real;
	if (numar.imaginar >= 0)
		cout << "+";
	cout << numar.imaginar<<"i";
	return os;
}
istream& operator >>(istream& is, nrComplexe&numar)
{
	is >> numar.real >> numar.imaginar;
	return is;  
}
bool& nrComplexe::operator == (const nrComplexe numar)
{
	bool ok = 1;
	if (real != numar.real || imaginar != numar.imaginar)
		ok = 0;
	return ok;
}
nrComplexe& nrComplexe::operator +=(const nrComplexe numar)
{
	return *this + numar;
}
nrComplexe& nrComplexe::operator -= (const nrComplexe numar)
{
	return *this - numar;
}
nrComplexe& nrComplexe::operator *= (const nrComplexe numar)
{
	return *this * numar;
}
nrComplexe& nrComplexe::operator /= (const nrComplexe numar)
{
	return *this / numar;

}
void test()
{
	vector<nrComplexe> v;
	int n;
	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		nrComplexe nr; 
		cin >> nr;
		v.push_back(nr);
	}
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
	nrComplexe sum1, sum2;
	for (int i = 0; i < v.size(); i++)
	{
		if (i % 2 == 1)
			sum1 = sum1 +( v[i] ^ 3);
		else
			sum2 = sum2 +( v[i] ^ 4);
	}
	cout << sum1 << " " << sum2<<"\n";
	nrComplexe rezultat = sum1 / sum2;
	cout <<"Rezultat pentru functia de testat:"<< rezultat;
}