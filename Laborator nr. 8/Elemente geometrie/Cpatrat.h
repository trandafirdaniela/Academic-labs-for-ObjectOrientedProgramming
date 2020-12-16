#pragma once
#include "Cdreptunghi.h"
#include "Cdreptunghi.h"
class Cpatrat: public Cdreptunghi,public Cshape
{
protected:

public:
	Cpatrat();
	Cpatrat(float x1, float y1,  float x2, float x3);
	~Cpatrat() ;
	float afisarePerimetru() const override;
	friend ostream& operator<<(ostream& os, const Cpatrat& patrat);
};

