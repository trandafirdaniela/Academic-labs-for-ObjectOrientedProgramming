#include <iostream>
#include <string>
#include "secventa.h"
using namespace std; 
int main()
{
	int n;
	cout << "Nr. de siruri:\n";
	cin >> n;
	cin.get();
	
	tablouSiruri* s = new tablouSiruri[n];
	citire(s,n);
	afisare(s,n);
	char sirCautat[100];
	cout << "Introduceti sirul cautat:\n";
	cin.get(sirCautat, 100);
	cout << "Sirul cautat este: " << sirCautat << "\n";
	if (cautare(s, sirCautat, n))
	{
		cout << "Sirul exista.\n";
		cout << "Sirul apare de : " << contorizareAparitie(s, sirCautat, n);

	}
	else
	{
		cout << "Sirul nu exista.\n";
	}
	delete[] s;
	return 0;
}
