#include "CcaineCuPete.h"
CcaineCuPete::CcaineCuPete():Ccaine(), nrPete(0)
{ }
CcaineCuPete::CcaineCuPete(const string& nume, const float& inaltime, const float& greutate, const int& varsta, const string& culoare, const int& numarPete): Ccaine(nume, inaltime, greutate, varsta, culoare), nrPete(numarPete)
{ }
CcaineCuPete::~CcaineCuPete()
{ }
void CcaineCuPete::citire() 
{
	cout << "Citeste informatiile despre caine cu pete(nume,inaltime,greutate,varsta,culoare,numar pete):\n";
	cin >> nume >> inaltime >> greutate >> varsta >> culoare >> nrPete;
}
void CcaineCuPete::afisare() const 
{
	cout << "Caine cu pete:\n";
	cout << "Nume: " << nume << "\nInaltime: " << inaltime << "\nGreutate: " << greutate << "\nVarsta: " << varsta << "\nCuloare: " << culoare;
	cout << "\nNumar pete: " << nrPete;
}