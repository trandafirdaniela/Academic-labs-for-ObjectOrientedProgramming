#include "CcaineFaraPete.h"
CcaineFaraPete::CcaineFaraPete()
{
	Ccaine();
}
CcaineFaraPete::CcaineFaraPete(const string& nume, const float& inaltime, const float& greutate, const int& varsta, const string& culoare)
{
	Ccaine(nume, inaltime, greutate, varsta, culoare);

}
CcaineFaraPete::~CcaineFaraPete()
{
	
}
void CcaineFaraPete::citire()
{
	/*string nume, culoare;
	float inaltime, greutate;*/
	//int varsta; /
	cin >> nume >> inaltime >> greutate >> varsta >> culoare;
	CcaineFaraPete(nume, inaltime, greutate, varsta, culoare);

}
void CcaineFaraPete::afisare() const 
{
	cout << "nume: " << nume << "\ninaltime: " << inaltime << "\ngreutate: " << greutate << "\nvarsta: " << varsta << "\nculoare: " << culoare;

}
