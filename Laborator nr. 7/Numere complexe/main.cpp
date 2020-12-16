#include "nrComplexe.h"

int main()
{
	nrComplexe z1, z2;
	nrComplexe sum1, sum2;
	int  nr;
	vector<nrComplexe> vect1, vect2;
	cout << "Introdu doua numere complexe: ";
	cin >> z1 >> z2;
	cout << "z1= " << z1 << "\n";
	cout << "z2= " << z2 << "\n";
	nrComplexe sum = z1 + z2;
	nrComplexe dif = z1 - z2;
	nrComplexe produs = z1 * z1;
	nrComplexe imp = z1 / z2;
	cout << "Suma: " << sum << "\n";
	cout << "Diferenta : " << dif << "\n";
	cout << "Produsul: " << produs << "\n";
	cout << "Impartire: " << imp << "\n";
	cout << "Citeste puterea la care sa fie ridica nr. complex: "; 
	cin >> nr;
	nrComplexe putere = z1 ^ nr;
	cout << "\nNumarul complex ridicat la puterea " << nr << " este: " << putere;
	cout << "\n\n\nTablou de numere complexe:";
	/*int n; cin >> n; 
	for (int i = 1; i <= n; i++)
	{
		nrComplexe numar;
		cin >> numar;
		nrComplexe nr = numar ^ 3;
		sum1 = sum1 + nr;
	}
	for (int i = 1; i <= n; i++)
	{
		nrComplexe numar;
		cin >> numar;
		nrComplexe nr = numar ^ 3;
		sum2 = sum2 + nr;
	}
	cout << sum1 << " " << sum2;
	cout << sum1 / sum2;*/
	test();

	return 0;
}