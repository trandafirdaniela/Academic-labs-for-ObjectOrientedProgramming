#include <iostream>
#include "student.h"
using namespace std;
void citireStudent(student& student)
{
	cout << "Introduceti datele studentului:\n";
	cout << "Nume:";
	cin >> student.nume;
	cout << "Prenume:";
	cin >> student.prenume;
	citireAdresa(student.adresa);
	citireNrTelefon(student.telefon);
	cout << "Facultate:";
	cin >> student.facultate;
	cout << "Varsta:";
	cin >> student.varsta;
	citireNote(student.note);
	cout << "Medie promovare:";
	cin >> student.mediaPromovare;
	cout << "Numar absente:";
	cin >> student.nrAbsente;
}
void afisareStudent(const student& student)
{
	string bar(30, '*');
	cout <<bar << "\n";
	cout << "Datele studentului sunt:\n";
	cout << "Nume si prenume: " << student.nume << " " << student.prenume << "\n";
	afisareAdresa(student.adresa);
	afisareNrTelefon(student.telefon);
	cout << "Facultate: " << student.facultate << "\n";
	cout << "Varsta: " << student.varsta << "\n";
	afisareNote(student.note);
	cout << "Media de promovare: " << student.mediaPromovare << "\n";
	cout << "Numar absente: " << student.nrAbsente << "\n";
	cout << bar << "\n";

}
void citireNote(int note[])
{
	cout << "Intorduceti notele: ";
	for (int i = 0; i < 10; i++)
		cin >> note[i];
}
void afisareNote(const int note[])
{
	cout << "Notele sunt: ";
	for (int i = 0; i < 10; i++)
	{
		cout << note[i] << " ";
	}
	cout << "\n";
}
