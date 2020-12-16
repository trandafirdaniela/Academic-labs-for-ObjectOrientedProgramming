#include <iostream>
#include <string>
#include "secventa.h"
using namespace std;
void citire(tablouSiruri s[],const int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Introduceti sirul:" << i + 1 << "\n";
		cin.getline(s[i].sir, 100);
	}
}
void afisare(tablouSiruri s[],const int &n)
{
	cout << "Tabloul de siruri introduse este:\n";
	for (int i = 0; i < n; i++)
		cout << s[i].sir << "\n";
}
bool cautare(tablouSiruri s[], char sirCautat[], const int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (strstr(s[i].sir, sirCautat))
			return 1;
	}
	return 0;
}
int contorizareAparitie(tablouSiruri s[], char sirCautat[], const int& n)
{
	int ap = 0;
	for (int i = 0; i < n; i++) {
		/// cate aparitii are sircautat in s[i]
		char*  p= strstr(s[i].sir, sirCautat);
		while (p != NULL) {
			ap++;
			p = strstr(p + 1, sirCautat);
		}
	}
	return ap;
}