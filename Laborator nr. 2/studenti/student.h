#include "adresa.h"
#include "telefon.h"

struct student {
	char nume[20]; 
	char prenume[20];
	adresa adresa;
	nrTelefon telefon;
	char facultate[3]; ///cod format din 3 caractere
	int varsta;
	int note[10]; 
	double mediaPromovare;
	int nrAbsente;

};
void citireStudent(student& student);
void afisareStudent(const student& student);
void citireNote(int note[]);
void afisareNote(const int note[]);



