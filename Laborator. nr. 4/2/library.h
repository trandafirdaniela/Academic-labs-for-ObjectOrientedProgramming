#pragma once
#include "book.h"
class library
{
public:
	vector<carte> carti;
	library();
	library(int);
	bool validareIsbn();
};
void afisare(const library&);
void citire(library&);

