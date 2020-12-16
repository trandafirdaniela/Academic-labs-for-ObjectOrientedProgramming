#include "CcaineCuPete.h"
CcaineCuPete::CcaineCuPete()
{
	Ccaine();
	nrPete = 0;
}
CcaineCuPete::CcaineCuPete(const string& nume, const float& inaltime, const float& greutate, const int& varsta, const string& culoare, const int& nrPete)
{
	Ccaine(nume, inaltime, greutate, varsta, culoare);
	this -> nrPete = nrPete;

}
CcaineCuPete::~CcaineCuPete()
{
}
void CcaineCuPete::citire() 
{
	cin >> nume >> inaltime >> greutate >> varsta >> culoare >> nrPete;
}
void CcaineCuPete::afisare() const 
{
	cout << "nume: " << nume << "\ninaltime: " << inaltime << "\ngreutate: " << greutate << "\nvarsta: " << varsta << "\nculoare: " << culoare;
	cout << "\nnumar pete: " << nrPete;
}