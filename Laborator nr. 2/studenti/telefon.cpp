#include <iostream>
#include "telefon.h"
using namespace std; 
void citireNrTelefon(nrTelefon& nrTelefon)
{
	cout << "Introduceti numarul de telefon:\n ";
	cout << "Prefix:";
	cin >> nrTelefon.prefix;
	cout << "Numar efectiv:";
	cin >> nrTelefon.numarEfectiv;
}
void afisareNrTelefon(const nrTelefon& nrTelefon)
{
	
	cout << "Numarul de telefon: ";
	cout << nrTelefon.prefix << " " << nrTelefon.numarEfectiv;
	cout << "\n";
}

