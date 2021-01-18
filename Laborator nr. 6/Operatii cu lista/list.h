#pragma once
#include "node.h"
class list
{
protected:
	node* prim;
public:
	list();
	~list();
	bool eGoala();
	void adaugareElement(int val);
	void stergereElement(int pozitie);
	void stergereElementeConditie(int valoare );
    double mediaAritmetca();

	node* getPrimul() const;
	int getElementLaPozitia(int pozitie);
	
	friend ostream& operator<<(ostream& , list&);
	//friend ostream& operator>>(ofstream& , list&);

	
};

