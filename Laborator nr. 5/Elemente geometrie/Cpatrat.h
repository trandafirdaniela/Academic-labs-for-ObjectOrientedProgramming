#pragma once
#include "Cdreptunghi.h"
class Cpatrat: public Cdreptunghi
{
protected:
public:
	Cpatrat();
	Cpatrat(const float& x1, const float& y1, const float& x2, const float& x3);
	~Cpatrat();
	float getArie();
	float getPerimetru();

};

