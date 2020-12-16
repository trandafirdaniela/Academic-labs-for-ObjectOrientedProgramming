#include "Cdreapta.h"
Cdreapta::Cdreapta() :Cpunct(), x2(0), y2(0)
{ }
Cdreapta::Cdreapta( float& x1,  float& y1,  float& _x2, float& _y2): Cpunct(x1,y1),x2(_x2),y2(_y2)
{
	//this->x2 = x2;
	//this->y2 = y2;
	//cout << "Apel constructor.\n";
}
Cdreapta::~Cdreapta() { }
float Cdreapta::afisarePerimetru() const
{
	float part1 = x - x2;
	float part2 = y - y2;
	return sqrt(part1 * part1 + part2 * part2);
}
ostream& operator<<(ostream& os,  Cdreapta& dreapta)
{
	os << dreapta.afisarePerimetru();
	return os;
}
istream& operator>>(istream& is, Cdreapta& dreapta)
{
	is >> dreapta.x2 >> dreapta.y2;
	return is;
}




