#include "Cdreptunghi.h"
Cdreptunghi::Cdreptunghi() 
{
	Cpunct punct1 = Cpunct(0.0, 0.0);
	Cpunct punct2 = Cpunct(0.0, 0.0);

}
Cdreptunghi::Cdreptunghi(const float& x1, const float& y1, const float& x2, const float& y2)
{
	Cpunct punct1 = Cpunct(x1, y1);
	Cpunct punct2 = Cpunct(x2, y2);
	lungime =abs(y2 - y1);
	latime =abs( x1 - x2);
	cout << "\nLungime:"<<lungime << "  Latime:" << latime << "\n";

}
Cdreptunghi::~Cdreptunghi()
{

}
float Cdreptunghi::getPerimetru()
{
	return 2 * lungime + 2 * latime;
}
float Cdreptunghi::getAria()
{
	return lungime * latime;
}