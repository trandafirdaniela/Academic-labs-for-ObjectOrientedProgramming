#include "Ccaine.h"
#include "CcaineFaraPete.h"
#include "CcaineCuPete.h"
int main()
{
	cout << "Citire date caine fara pete:";
	CcaineFaraPete caine;
	caine.citire();
	caine.afisare();
	cout << "\nCitire date caine cu pete:";
	CcaineCuPete caineP;
	caineP.citire();
	caineP.afisare();
	return 0;
}