#include "Cdreptunghi.h"
Cdreptunghi::Cdreptunghi() 
{
	Cpunct punct1 = Cpunct(0.0, 0.0);
	Cpunct punct2 = Cpunct(0.0, 0.0);

}
Cdreptunghi::Cdreptunghi( float x1,  float y1,  float x2, float y2)
{
	Cpunct punct1 = Cpunct(x1, y1);
	Cpunct punct2 = Cpunct(x2, y2);
	lungime =abs(y2 - y1);
	latime =abs( x1 - x2);
	//cout << "\nLungime:"<<lungime << "  Latime:" << latime << "\n";

}
Cdreptunghi::~Cdreptunghi(){}
float Cdreptunghi::afisarePerimetru() const
{
	return (lungime * latime)*2;
}
ostream& operator<<(ostream& os, const Cdreptunghi& dreapta)
{
	os << dreapta.afisarePerimetru();
	return os;
}

