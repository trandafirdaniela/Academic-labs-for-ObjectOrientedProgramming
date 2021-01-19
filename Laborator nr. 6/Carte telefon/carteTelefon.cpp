#pragma once
#include "carteTelefon.h"

carteTelefon::carteTelefon()
{
	prim = 0;
}
carteTelefon::~carteTelefon()
{
	abonat* p = prim;
	abonat* q;
	while (p)
	{
		q = p;
		p = p->next;
		delete q;
	}
	prim = 0;

}
void carteTelefon::adaugareContact()
{
	string tempNume, tempOras, tempStrada;
	int tempNumar;
	cout << "\nCiteste datele contactului:";
	cout<<"\nCiteste numele: ";
	cin >> tempNume;
	cout << "Citeste adresa(oras+strada):";
	cin >> tempOras >> tempStrada;
	cout << "Citeste numar:"; 
	cin>>tempNumar;
	//aici imi creeaza un nou nod cu toate carract pe care trebuie sa l introduc
	abonat* p = new abonat(tempNume, tempOras, tempStrada, tempNumar);
	if (prim == 0)
	{
		prim = p;
	}
	else
	{
		abonat* aux = prim;
		while (aux->next)
			aux = aux->next;
		aux->next = p;
	}
	cout << "\nContactul s-a adaugat cu succes.";
}
void carteTelefon::cautareContact(string numeCautat)
{
	if(prim==0)
	{
		cout << "\nNu exista contacte.";
		return;
	}
	abonat* p = prim;
	while (p)
	{
		if(p->nume==numeCautat)
		{
			cout << "\nExista contactul cu numele dat.";
			return;
		}
		p = p->next;
	}
	cout << "\nContactul cu numele dat nu a fost gasit in lista.";
}
void carteTelefon::afisareContacte()
{
	if (prim == 0)
	{
		cout << "\nLista de contacte este goala. Nu exista contacte de afisat.";
		return;
	}
	abonat* p = prim;
	while (p)
	{
		cout << "\nNume:" << p->nume;
		cout << "\nAdresa:" << p->adr;
		cout << "\nNumar:" << p->numarTelefon;
		cout << "\n";
		p = p->next;
	}
	cout << "\n :) Final de contacte\n\n";
	
}

//ostream& operator<< (ostream&os,const carteTelefon &lista)
//{
//	if (lista.prim == 0)
//	{
//		os << "\nLista contactelor este goala.Nu exista contacte de afisat.";
//		return os;
//	}
//	abonat* p = lista.prim;
//	
//	while (p)
//	{
//		os << p;
//		
//	}
//	return os;
// }
