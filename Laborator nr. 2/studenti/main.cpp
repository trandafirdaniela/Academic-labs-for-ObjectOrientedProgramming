#include <iostream>
#include "student.h"
using namespace std; 


int main()
{
	int nrStudenti;
	cout << "Introduceti numarul de studenti: ";
	cin >> nrStudenti;
	student* studenti = new student[nrStudenti];
	for (int i = 0; i < nrStudenti; i++) {
		citireStudent(studenti[i]);
	}
	for (int i = 0; i < nrStudenti; i++) {
		afisareStudent(studenti[i]);
	}


	delete[] studenti;


}