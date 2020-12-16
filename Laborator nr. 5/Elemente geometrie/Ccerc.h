#pragma once
#include "Cpunct.h"
const float pi =(float)3.14159;
class Ccerc : public Cpunct
{
protected:
	float raza;
public:
	Ccerc();
	Ccerc(const float& x, const float& y, const float& r);
	~Ccerc();
	float getArie();
	void setRaza(float raza) { this->raza = raza; };
	float getPerimetru();


};
