#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "library.h"

using namespace std;
int main()
{

	//vector<carte> mybook;
	int n;
	library books;
	citire(books);
	afisare(books);
	

	//cout << "Introdu numarul de carti din biblioteca:"; cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	carte book;
	//	book.citire();
	//	mybook.push_back(book);
	//}
	////afisare carti
	//string bar(30, '-');
	//bar += '\n';
	//cout << bar;

	//for (size_t i = 0; i < mybook.size(); i++)
	//{
	//	mybook[i].afisare();
	//}
	//string elementCautat;
	//int optiune;

	//while (1)
	//{
	//	cout << "Alege optiunea de cautare:\n";
	//	cout << "\t1. Cauta dupa titlu:\n";
	//	cout << "\t2. Cauta dupa editura:\n";
	//	cout << "\t3. Cauta dupa isbn:\n";
	//	cout << "Introdu optiunea:\n";

	//	cin >> optiune;
	//	switch (optiune)
	//	{
	//	case 1:
	//	{
	//		cout << "Introdu titlul cautat: "; cin >> elementCautat;
	//		if (cautareTitlu(elementCautat, mybook))
	//			cout << "Cartea cu titlul cautat se gaseste in biblioteca.\n";
	//		else
	//			cout << "Cartea cu titlul cautat nu se gaseste in biblioteca.\n\n";
	//		break;
	//	}
	//	case 2:
	//	{
	//		cout << "Introdu editura cautata: "; cin >> elementCautat;
	//		if (cautareEditura(elementCautat, mybook))
	//			cout << "Cartea cu editura cautata se gaseste in biblioteca.\n\n";
	//		else
	//			cout << "Cartea cu editura cautata nu se gaseste in biblioteca.\n\n";
	//		break;
	//	}
	//	case 3:
	//	{
	//		cout << "Introdu isbn cautat: "; cin >> elementCautat;
	//		if (cautareIsbn(elementCautat, mybook))
	//			cout << "Cartea cu ISBN cautat se gaseste in biblioteca.\n\n";
	//		else
	//			cout << "Cartea cu ISBN cautat se gaseste in biblioteca.\n\n";
	//		break;

	//	}
	//	default:
	//		cout << "Optiune gresita.";
	//	}
	//}


	return 0;
}