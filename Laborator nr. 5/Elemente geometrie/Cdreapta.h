#pragma once
#include "Cpunct.h"
class Cdreapta : public Cpunct
{
protected:
	float x2, y2;
public:
	Cdreapta();
	Cdreapta(const float& x1, const float& y1, const float& x2, const float& y2);
	~Cdreapta();
	float getLungime();
};
