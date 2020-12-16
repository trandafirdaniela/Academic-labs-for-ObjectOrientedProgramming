#include <iostream>
#include "adresa.h"
using namespace std; 
void citireAdresa(adresa& adresa)
{
	cout << "Introduceti adresa:\n";
	cout << "Nume oras:";
	cin >> adresa.numeOras;
	cout << "Cod oras:";
	cin >> adresa.codOras;
	cout << "Strada:";
	cin >> adresa.strada;
	cout << "Numar:";
	cin >> adresa.numar;

}
void afisareAdresa(const adresa& adresa)
{
	cout << "Adresa: ";
	cout << "Oras: " << adresa.numeOras << ", Cod oras: " << adresa.codOras;
	cout << ", Strada: " << adresa.strada << ", Numar: " << adresa.numar;
	cout << "\n";
}