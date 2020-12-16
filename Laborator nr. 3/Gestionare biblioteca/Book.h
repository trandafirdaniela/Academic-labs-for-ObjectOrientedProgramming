#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
class carte
{
private:
	string titlu;
	string autor;
	string editura;
	string isbn;
	int anAp;
	double pret;
public:
	// constructor implicit
	carte();
	// constructor general
	carte(const string&, const string&, const string&, const string&, const int&, const double&);
	void citire() ;
	void afisare() const;
	string getTitlu() { return titlu; }
	string getAutor() { return autor; }
	string getEditura() { return editura; }
	string getIsbn() { return isbn; }
	int getAnAp() {return anAp; }
	double GetPret(){ return pret; }
};
bool cautareTitlu(const string&,const  vector<carte>&);
bool cautareEditura(const string&,const vector<carte>&);
bool cautareIsbn(const string&,const vector<carte>&);
