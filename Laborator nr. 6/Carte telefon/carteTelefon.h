#include <iostream>
#include "abonat.h"
using namespace std; 
class carteTelefon
{
	friend class abonat;
protected:
	abonat* prim;
public:
	carteTelefon();
	~carteTelefon();
	void afisareContacte();
	void adaugareContact();
	void cautareContact(string numeCautat);
	
	//friend ostream& operator<<(ostream&, const carteTelefon&);
};