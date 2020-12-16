#include "Ccerc.h"
Ccerc::Ccerc():Cpunct(0.0, 0.0), raza(0.0)
{ }
Ccerc::Ccerc(const float& x = 0.0, const float& y = 0.0, const float& r = 1.0) : Cpunct(x, y), raza(r)
{ }
Ccerc::~Ccerc() { }
float Ccerc::afisarePerimetru() const
{
	return 3.14 * 2* raza;
}
ostream& operator<<(ostream& os, const Ccerc& cerc)
{
	os << cerc.afisarePerimetru();
	return os;
}
