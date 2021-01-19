#pragma once
#include <iostream>
#include "adresa.h"

using namespace std;
class abonat
{
	
private:
	string nume;
	adresa adr;
	int numarTelefon;
	abonat* next;

public:
	abonat();
	abonat(string, string,string, int);
	~abonat();
	abonat* getNext() const { return next; }
	void setNext(abonat* next);
	friend istream& operator>>(istream&, abonat);
	friend ostream& operator<<(ostream&, abonat);
	friend class carteTelefon;
};

