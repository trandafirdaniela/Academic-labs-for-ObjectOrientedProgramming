#include "list.h"
list::list()
{
	prim  = 0;
}
list::~list()
{
	node* p = prim;
	node* q; 
	while (p != 0)
	{
		q = p;
		p = p->next;
		delete q;
	}
	prim = 0;
}
bool list::eGoala()
{
	return prim == 0;
}
void list::adaugareElement(int val)
{
	node* p;
	p = new node(val);
	if (eGoala())
		prim = p;
	else
	{
		node* aux = prim;
		while (aux->next != 0)
			aux = aux->next;
		aux->next = p;
	}

}
node* list::getPrimul() const
{
	return prim;
}

int list::getElementLaPozitia(int index) 
{
	int i=0;
	node* p = prim;
	while (p->next != 0 && i < index)
	{
		p = p -> next;
		i++;
	}
	return p->info;

}
 ostream& operator<<(ostream& os , list& lista)
{
	 cout << "\nLISTA: ";
	 node* p = lista.getPrimul();
	 if (p)
	 {
		 while (p)
		 {
			 cout << p->getInfo() << " ";
			 p = p->getNext();
		 }
	 }
	 else
	 os << "Nu exista elemente.\n";
	 cout << "\n";
	
	 return os;

}
 void list::stergereElement(int pozitie)
 {
	 node* curent;
	 node* anterior;
	 curent = prim;
	 anterior = prim;
	 if (prim == 0)
	 {
		 cout << "Lista e goala.\n";
		 return;
	 }
	 for (int i = 1; i < pozitie; i++)
	 {
		 anterior = curent;
		 curent = curent->next;
	 }
	 anterior->next = curent->next;
	 if (pozitie == 1)
		 prim = prim->next;
	 delete curent;
 }
 void list::stergereElementeConditie(int valoare)
 {
	 /// daca element < valoare stergere
	 if (!prim)
		 return;
	 node* p = prim;
	 int poz = 1;
	 while (p->next) {
		 if (p->next->info < valoare) {
			 /// sterg nodul urmator
			 node* aux = p->next;
			 p->next = aux->next;
			 delete aux;
		 }
		 else
			 p = p->next;
	 }
	 if (prim->info < valoare) {
		 node* aux = prim;
		 prim = prim->next;
		 delete aux;
	 }
		
 }
 double list::mediaAritmetca()
 {
	 node* p = prim;
	 int nr = 0;
	 double media = 0.0;
	 int sum = 0;
	 while (p)
	 {
		 sum += p->info;
		 nr++;
		 p = p->next;
	 }
	 media = double(sum / nr);
	 return media;

 }