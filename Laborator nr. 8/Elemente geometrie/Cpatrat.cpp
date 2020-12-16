#include "Cpatrat.h"
Cpatrat::Cpatrat(): Cdreptunghi(float(0.0), float(0.0), float(0.0), float(0.0))
{
}
Cpatrat::Cpatrat( float x1,  float y1, float x2,  float y2): Cdreptunghi(x1,y1,x2,y2)
{ }
Cpatrat::~Cpatrat()
{ }
float Cpatrat::afisarePerimetru() const
{
   return 2*Cdreptunghi::afisarePerimetru();
}
ostream& operator<<(ostream& os, const Cpatrat& patrat)
{
	os << patrat.afisarePerimetru();
	return os;
}