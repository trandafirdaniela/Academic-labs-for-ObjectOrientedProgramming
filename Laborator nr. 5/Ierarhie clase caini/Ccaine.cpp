#include "Ccaine.h"
Ccaine::Ccaine()
{
	nume = ' ';
	inaltime = 0.0;
	greutate = 0.0;
	varsta = 0;
	culoare = ' ';
}
Ccaine::Ccaine(const string& nume, const float& inaltime, const float& greutate,const int& varsta,const string& culoare)
{
	this->nume = nume; 
	this->inaltime = inaltime;
	this->greutate = greutate;
	this->varsta = varsta;
	this->culoare = culoare;

}
Ccaine::~Ccaine()
{

}