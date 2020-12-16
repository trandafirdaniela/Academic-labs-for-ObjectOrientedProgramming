#include "isbn.h"

isbn::isbn()
{
	cout << "apel constructor implicit\n";
	

}
isbn::isbn(string  a, string b, string c)
{
	cout << "apel constructor1\n";
	string tara = a;
	string editura = b;
	string titlu = c;

}
isbn::isbn(string a, string b, string c, string d)
{
	cout << "apel constructor2\n";
	string tara = a;
	string editura = b;
	string titlu = c;
	string cifControl = d;
}

void isbn::citire()
{
	cin >> s;

}
void isbn::afisare()
{
	cout << s;
}
isbn::~isbn()
{
	s ="\0";
}


