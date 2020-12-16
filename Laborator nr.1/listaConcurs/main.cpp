#include <iostream>
#include <string>
#include "concurs.h"
using namespace std;

int main()
{
	string bar(100, '-');
	//bar[bar.size() / 2] = 130;
	bar += "\n\n";
	lista *l=NULL;
	cout << bar;
    int n, i;
	concurent x;
	cout << "Introdu numarul de concurenti:";
	cin >> n; 
	for(i=0 ; i<n ; i++)
	{
		cin>>x.nume>> x.nota;
		adaugareLista(l, x);
	}
	afisareLista(l);
	cout << bar;
	sortareDupaNota(l);
	cout << "Lista concurenti sortata crescator dupa note:\n";
	afisareLista(l);
	cout << bar;
	char cuv[50];
	cout << "Introduceti numele cautat:\t";  cin >> cuv;
	if (cautareNume(l, cuv))
		cout << "Concurentul se afla in lista.\n";
	else
		cout << "Concurentul nu se afla in lista.\n";
	lista* a = NULL;
	lista* r = NULL;
	separareListe(l, a, r);
	cout << bar;
	cout << "Lista cu admisi:\n";
	afisareLista(a);
	cout << bar; 
	cout << "Lista cu respinsi:\n";
	afisareLista(r);
	
	return 0;
}