#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "isbn.h"
using namespace std;
class carte
{
private:
	string titlu;
	string autor;
	string editura;
	int anAp;
	double pret;
	isbn Isbn;
public:
	// constructor implicit
	carte();
	// constructor general
	carte(const string&, const string&, const string&, const string&, const int&, const double&);
	void citire();
	void afisare() const;
	string getTitlu() { return titlu; }
	string getAutor() { return autor; }
	string getEditura() { return editura; }
	int getAnAp() { return anAp; }
	isbn getIsbn() { return Isbn; }
	double GetPret() { return pret; }
};
bool cautareTitlu(const string&, const  vector<carte>&);
bool cautareEditura(const string&, const vector<carte>&);
bool cautareIsbn(const string&, const vector<carte>&);