#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ccaine
{
protected:
	string nume;
	float inaltime;
	float greutate;
	int varsta;
	string culoare;
public:
	Ccaine();
	Ccaine(const string& nume, const float& inaltime, const float& greutate,const int& varsta,const string& culoare);
	~Ccaine();
	


};

