#include "CcaineFaraPete.h"
CcaineFaraPete::CcaineFaraPete()
{
}
CcaineFaraPete::CcaineFaraPete(const string& nume, const float& inaltime, const float& greutate, const int& varsta, const string& culoare):Ccaine(nume, inaltime, greutate, varsta, culoare)
{ }
CcaineFaraPete::~CcaineFaraPete()
{ }
void CcaineFaraPete::citire()
{
	cout << "Citeste informatiile despre caine fara pete(nume,inaltime,greutate,varsta,culoare):\n";
	cin >> nume >> inaltime >> greutate >> varsta >> culoare;
}
void CcaineFaraPete::afisare() const 
{
	cout << "Caine fara pete:\n";
	cout << "Nume: " << nume << "\nInaltime: " << inaltime << "\nGreutate: " << greutate << "\nVarsta: " << varsta << "\nCuloare: " << culoare;

}
