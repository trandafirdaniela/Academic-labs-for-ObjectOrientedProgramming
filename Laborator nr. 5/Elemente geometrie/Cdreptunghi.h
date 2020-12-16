#pragma once
#include "Cpunct.h"
class Cdreptunghi: public Cpunct
{
protected:
	float lungime;
	float latime;
public:
	Cdreptunghi();
	Cdreptunghi(const float& x1, const float& y1, const float& x2, const float& y2);
	~Cdreptunghi();
	float getPerimetru();
	float getAria();

};

