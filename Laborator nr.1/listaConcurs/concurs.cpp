#include <iostream>
#include <string>
#include "concurs.h"
using namespace std; 
void adaugareLista(lista *&l, concurent x)
{
	lista* c = new lista;
	c->info = x;
	c->urm = NULL;
	if (l == NULL) ///daca lista e vida inserez concurentul
	{
		l = c;
	}
	else ///daca lista nu e vida inserez la finalul listei
	{
		lista* t = l;
		while (t->urm != NULL)
			t = t->urm;
		t->urm = c;
	}
}
void afisareLista(lista* l)
{
	if (l == NULL)
		cout << "Nu exista concurenti.\n";
	else
		while (l != NULL)
		{
			l->info.afisare();
			l = l->urm;
		}
}
void concurent::afisare() {
	cout << "Nume: " << nume << "\tNota: " << nota << "\n";
}

void sortareDupaNota(lista *&l)
{
	lista *x = l;
	lista *y;
	while (x->urm)
	{
		y = x->urm; 
		while (y)
		{
			if (x->info.nota > y->info.nota)
				swap(x->info, y->info);
			y = y->urm;
		}
		x = x->urm; 

	}

}
bool cautareNume(lista *l, char numeCautat[50])
{

	while (l != NULL)
	{
		     if (strcmp(l->info.nume, numeCautat))
			return 1;

	}
	return 0;
}
void separareListe(lista *l, lista  *&a, lista *&r)
{
	lista *elementCurent =l; 
	while (elementCurent != NULL)
	{
		if (elementCurent->info.nota >= 5)
			adaugareLista(a, elementCurent->info);
		else if (elementCurent->info.nota < 5)
			adaugareLista(r, elementCurent->info);
		elementCurent = elementCurent->urm;

	}
}