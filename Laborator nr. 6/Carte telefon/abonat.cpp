#include "abonat.h"
abonat::abonat()
{
	nume = " ";
	numarTelefon = 0;
	next = 0;
	adr=adresa();
}
abonat::abonat(string nume, string oras,string strada, int numar)
{
	this->nume = nume;
	adr=adresa(oras, strada);
	numarTelefon = numar;
	next = 0;
}
void abonat::setNext(abonat* next)
{
	this->next = next;
}
abonat::~abonat()
{

}

istream& operator>>(istream& is, abonat user)
{
	string oras, strada;
	cout << "\nCiteste datele contactului: \n citeste numele:";
	is >> user.nume;
	cout << "\nCiteste adresa";
	is >> oras>>strada;
	cout << "\nCiteste numar telefon.";
	is >> user.numarTelefon;
	return is;
}
ostream& operator<<(ostream& os, abonat user)
{
	cout << "******************Datele contactului sunt:******************";
	cout << "\nNume:"; os << user.nume;
	cout << "\nAdresa:"; os << user.adr;
	cout << "\nNumarul de telefon:"; os << user.numarTelefon;
	cout << "\n";
	return os;

}