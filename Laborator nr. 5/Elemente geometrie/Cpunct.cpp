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

void Cpunct::afisare()
{
	cout << x << " " << y << "\n";
}
ostream& operator<<(ostream& os, const Cpunct& punct)
{
	os << punct.x << " " << punct.y << "\n";
	return os;
}
//float Cpunct::lungime(const float&a, const float& b)
//{
//	//distanta pana la un punct dat 
//	float part1 = x - a;
//	float part2 = y - b;
//	return part1 * part2;
//}

