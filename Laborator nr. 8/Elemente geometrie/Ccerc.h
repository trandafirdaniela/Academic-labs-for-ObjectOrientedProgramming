#pragma once
#include "Cpunct.h"
#include "Cshape.h"
const float pi =(float)3.14159;
class Ccerc : public Cpunct,public Cshape
{
protected:
	float raza;
public:
	Ccerc();
	Ccerc(const float& x, const float& y, const float& r);
	~Ccerc() ;
	void setRaza(float raza) { this->raza = raza; };
	float afisarePerimetru()const override;
	friend ostream& operator<<(ostream& os, const Ccerc& cerc);


};
