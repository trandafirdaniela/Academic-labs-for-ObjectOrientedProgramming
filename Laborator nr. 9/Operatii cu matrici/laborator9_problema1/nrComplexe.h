#pragma once
#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
using namespace std;
class nrComplexe
{
private:
	double real;
	double imaginar;
public:
	nrComplexe();
	nrComplexe(double real, double imaginar);
	~nrComplexe();
	nrComplexe& operator = (const nrComplexe numar);
	nrComplexe& operator +(const nrComplexe numar);
	nrComplexe& operator - (const nrComplexe numar);
	nrComplexe& operator * (const nrComplexe numar);
	nrComplexe& operator / (const nrComplexe numar);
	double operator ~ (); //pentru modul nr
	nrComplexe& operator ^ (int putere);
	void citire();
	friend ostream& operator<<(ostream&, const nrComplexe&);
	friend istream& operator>>(istream&, nrComplexe&);
	bool& operator == (const nrComplexe numar);
	nrComplexe& operator +=(const nrComplexe numar);
	nrComplexe& operator -= (const nrComplexe numar);
	nrComplexe& operator *= (const nrComplexe numar);
	nrComplexe& operator /= (const nrComplexe numar);


};
void test();
