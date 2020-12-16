struct concurent
{
	char  nume[100];
	double nota;
	void afisare();

};
struct lista
{
	concurent info;
	lista* urm;
};

void adaugareLista(lista *&l, concurent X);
void afisareLista(lista *l);
void sortareDupaNota(lista *&l);
void separareListe(lista *l, lista *&admisi, lista *&respinsi);
bool cautareNume(lista* l, char nume[]);