#pragma once

#include "Ccaine.h"

class CcaineCuPete:public Ccaine
{
protected:
	int nrPete;
public:
	CcaineCuPete();
	CcaineCuPete(const string& nume, const float& inaltime, const float& greutate, const int& varsta, const string& culoare, const int& nrPete);
	~CcaineCuPete();
	void citire();
	void afisare() const;
};

