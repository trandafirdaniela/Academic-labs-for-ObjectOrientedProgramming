#include "Cpunct.h"
Cpunct::Cpunct()
{
    x= 0.0;
	y = 0.0;
}
Cpunct::Cpunct(const float& x, const float& y)
{
	this->x = x;
	this->y = y;
}
Cpunct::~Cpunct() {

}

istream& operator>>(istream& is, Cpunct& punct)
{
	is >> punct.x >> punct.y;
	return is;
}
ostream& operator<<(ostream& os, const Cpunct& punct)
{
	os << punct.x << " " << punct.y << "\n";
	return os;
}


