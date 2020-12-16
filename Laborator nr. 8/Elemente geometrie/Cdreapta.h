#pragma once
#include "Cpunct.h"
#include "Cshape.h"
class Cdreapta : public Cpunct,public Cshape
{
protected:
	float x2, y2;
public:
	Cdreapta();
	Cdreapta( float& x1, float& y1,  float& x2, float& y2);
	~Cdreapta();
	float afisarePerimetru() const override;
	friend ostream& operator<<(ostream& os, const Cdreapta& dreapta);
	friend istream& operator>>(istream& is,  Cdreapta& dreapta);

};
