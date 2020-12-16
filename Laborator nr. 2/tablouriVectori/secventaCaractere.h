#include <iostream>
#include <cstring>
using namespace std;
struct tablouSiruri
{
	char sir[100];
};
void citire(tablouSiruri s[], const int& n);
void afisare(tablouSiruri s[], const int& n);
bool cautare(tablouSiruri s[], char sirCautat[], const int& n);
int contorizareAparitie(tablouSiruri s[], char sirCautat[], const int& n);