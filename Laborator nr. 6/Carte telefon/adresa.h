#pragma once
#include <iostream>
using namespace std;
class adresa
{
private:
	friend class carteTelefon;
	string oras;
	string strada;	
public:
	adresa();
	adresa(string, string);
	~adresa();

	friend ostream& operator<<(ostream&, adresa&);
	friend istream& operator>>(istream&, adresa&);
};

