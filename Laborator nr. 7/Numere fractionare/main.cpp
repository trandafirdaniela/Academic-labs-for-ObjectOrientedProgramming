#include "fractie.h"
int main()
{
	fractie fr1, fr2;
	cin >> fr1 >> fr2;
	cout << fr1 << " " << fr2 << endl;
	fractie suma = fr1 + fr2;
	cout << suma << endl;
	fractie scadere = fr1 - fr2;
	cout << scadere << endl;
	fractie produs = fr1 * fr2;
	cout << produs << endl;
	fractie dif = fr1 / fr2;
	cout << dif << endl;
	fractie fr3;
	cin >> fr3;
	cout << !fr3;
	return 0;

}