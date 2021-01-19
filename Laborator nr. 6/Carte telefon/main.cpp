#include "carteTelefon.h"
int main()
{
	carteTelefon carte;
	
	int expr;
	string num;
	bool ok = true;
	while (ok)
	{
		cout << "\t\nMeniu:";
		cout << "\n1.Afisare contacte.";
		cout << "\n2.Adaugare contact.";
		cout << "\n3.Cautare contact dupa nume.\n";
		cin >> expr;
		switch (expr)
		{
		case 1:
		    carte.afisareContacte();
			break;
		case 2:
			carte.adaugareContact();
			break;
		case 3:
			cin >> num;
			carte.cautareContact(num);
			break;
		default:
			cout << "\nOptiunea gresita.";
			break;
		}
	}

}