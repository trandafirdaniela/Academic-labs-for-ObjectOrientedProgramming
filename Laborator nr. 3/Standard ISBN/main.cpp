#include "isbn.h"
int main()
{
	isbn x;
	int a[4];
	x.citire();
	x.afisare();
	string s;
	cin >> s;
	string delimitare = "-";
	size_t pos = 0;
	string token;
	int i = 0;
	while ((pos = s.find(delimitare)) != string::npos) {
		token = s.substr(0, pos);
		a[++i]= stoi(token);
		s.erase(0, pos + delimitare.length());
	}
	a[++i] = stoi(s);
	for (i = 1; i <= 4; i++)
		cout << s[i] << "\n";

	return 0;
}