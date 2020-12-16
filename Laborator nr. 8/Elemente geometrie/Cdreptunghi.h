#pragma once
#include "Cpunct.h"
#include "Cshape.h"
class Cdreptunghi: public Cpunct,public Cshape
{
protected:
	float lungime;
	float latime;
public:
	Cdreptunghi();
	Cdreptunghi( float x1,  float y1,  float x2,  float y2);
	~Cdreptunghi() ;
	float afisarePerimetru() const override;
	friend ostream& operator<<(ostream& os, const Cdreptunghi& dreapta);
};

