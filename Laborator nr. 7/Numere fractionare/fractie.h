#pragma once
#include <iostream>
using namespace std;
class fractie
{
private:
	int numarator; 
	int numitor;
public:
	fractie();
	fractie(int&, int&);
	~fractie();
	fractie& operator =(const fractie& fr);
	fractie operator +(const fractie& fr);
	fractie operator -(const fractie& fr);
	fractie operator *(const fractie& fr);
	fractie operator /(const fractie& fr);
	fractie& operator !();//operator pentru simplificare
	friend ostream& operator << (ostream& os, const fractie&);
	friend istream& operator >> (istream& is,  fractie&);

};
int cmmdc(int a,int b);

