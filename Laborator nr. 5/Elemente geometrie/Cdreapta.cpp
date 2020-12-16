#include "Cdreapta.h"
Cdreapta::Cdreapta() :Cpunct()
{
	this->x2 = 0;
	this->y2 = 0;

}
Cdreapta::Cdreapta(const float& x1, const float& y1, const float& x2, const float& y2): Cpunct(x1,y1)
{
	this->x2 = x2;
	this->y2 = y2;
	//cout << "Apel constructor.\n";
}
Cdreapta::~Cdreapta() { }
float Cdreapta::getLungime( )
{
	float part1 = x - x2;
	float part2 = y - y2;
	return sqrt(part1 * part1 + part2 * part2);
}




