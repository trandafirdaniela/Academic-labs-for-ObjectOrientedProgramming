#pragma once
#include "Ccaine.h"
class CcaineFaraPete: public Ccaine
{
protected:
public:
	CcaineFaraPete();
	CcaineFaraPete(const string& nume, const float& inaltime, const float& greutate, const int& varsta, const string& culoare);
	~CcaineFaraPete();
	void citire();
	void afisare() const;

};

