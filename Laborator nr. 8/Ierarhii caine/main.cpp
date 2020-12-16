#include "Ccaine.h"
#include "CcaineFaraPete.h"
#include "CcaineCuPete.h"
int main()
{
	Ccaine *caine1= new CcaineCuPete();
	caine1->citire();
	caine1->afisare();
	delete caine1;
	cout << endl;
	Ccaine *caine2 = new CcaineFaraPete();
	caine2->citire();
	caine2->afisare();
	delete caine2;
    return 0;
}