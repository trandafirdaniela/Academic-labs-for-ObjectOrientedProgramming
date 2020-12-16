#include "Book.h"

carte::carte()

{
	//cout << "constructor implicit\n";
	titlu = "";
	autor = "";
	editura = "";
	isbn = "";
	anAp = 0;
	pret = 0.0;

}
carte::carte(const string&titlu, const string&autor, const string&editura, const string&isbn, const int&anAp, const double&pret)
{
	//cout << "constructor general\n";
	this->titlu = titlu;
	this->autor =autor;
	this->editura = editura;
	this->isbn = isbn;
	this->anAp = anAp;
	this->pret = pret;
}
void carte::citire()
{
	cout << "Introduceti informatiile despre carte:\n";
	cout << " Titlul: "; cin >> titlu;
	cout << "Autor: "; cin >> autor;
	cout << "Editura: "; cin>> editura;
	cout << "Isbn: "; cin>> isbn;
	cout << "An aparitie: "; cin >> anAp;
	cout << "Pret: "; cin >> pret;
}
void carte::afisare() const
{
	cout << "Titlu: " << titlu << "\n";
	cout << "Autor: " << autor << "\n";
	cout << "Editura: " << editura << "\n";
	cout << "Isbn: " << isbn<< "\n";
	cout << "An aparitie: " << anAp << "\n";
	cout << "Pret: " << pret << "\n";

}
bool cautareTitlu(const string&elementCautat,const  vector<carte>& mybook)
{
	for (int i = 0; i < int(mybook.size()); i++)
	{
		carte aux = mybook[i];
		if (elementCautat == aux.getTitlu())
			return 1;

	}
	return 0;
}
bool cautareEditura(const string& elementCautat,const vector<carte>& mybook)
{
	for (int i = 0; i < int(mybook.size()); i++)
	{
		carte aux = mybook[i];
		if (elementCautat == aux.getEditura())
			return 1;

	}
	return 0;

}
bool cautareIsbn(const string& elementCautat,const vector<carte>& mybook)
{
	for (int i = 0; i < int(mybook.size()); i++)
	{
		carte aux = mybook[i];
		if (elementCautat == aux.getIsbn())
			return 1;

	}
	return 0;
}


