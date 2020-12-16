#include <string>
#include <iostream>
using namespace std;
class isbn
{
private:
	string value;

public:

	isbn(const int&, const int&, const int&);
	isbn(const string&);
	isbn();
	string grup()const; /// determina grupul format de primele 3 campuri -> tara,editura,titlu
	bool validareCifraControl() const;
	void afisare() const;
	void setIsbn(string );
	string  getIsbn() const { return value; }
	friend class carte;
};
char cifraControl(const string&);
/// clasa biblioteca care va avea vector<carte> si mosteneste carte ca sa ai acces la carte.verificare

