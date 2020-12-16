#include "Ccerc.h"
Ccerc::Ccerc():Cpunct(0.0, 0.0), raza(0.0)
{ }
Ccerc::Ccerc(const float& x = 0.0, const float& y = 0.0, const float& r = 1.0) : Cpunct(x, y), raza(r)
{ }
Ccerc::~Ccerc() { }
float Ccerc::getArie()
{
	return pi * raza * raza;
}
float Ccerc::getPerimetru()
{
	return 2 * pi * raza;
}
