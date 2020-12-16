#include "matrix.h"
#include "nrComplexe.h"
int main()
{

	Matrice<int> intM1, intM2;
	cin >> intM1; cout << intM1;
	cin >> intM2; cout << intM2;
	intM1.adj();
	cout << "Suma:\n";
	cout<< intM1 + intM2;
	cout <<"Diferenta\n";
	cout << intM1 - intM2;
	cout << "Produsul:\n";
	cout << intM1 * intM2;
	
	/// pentru float
	Matrice<float> floatM1, floatM2;
	cin >> floatM1; cout << floatM1;
	cin >> floatM2; cout << floatM2;
	cout << "Suma:\n";
	cout << floatM1 + floatM2;
	cout << "Diferenta:\n";
	cout << floatM1 - floatM2;
	cout << "Produsul:\n";
	cout << floatM1 * floatM2;

	 //pentru numere complexe
	Matrice<nrComplexe> mat1, mat2;
	cin >> mat1; cin >> mat2;
	cout << mat1 + mat2;
	cout << mat1;
	return 0;
}