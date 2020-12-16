#pragma once
#include <iostream>
using namespace std;
class Cpunct
{
protected:
	float x, y;
public:
	Cpunct();
	Cpunct(const float& x, const float& y);
	~Cpunct() ;
	float getX() { return x; };
	float getY() { return y; };
	friend istream& operator>>(istream& is, Cpunct& punct);
	friend ostream& operator<<(ostream& os, const Cpunct& punct);
	//float lungime(const float&a, const float&b);
	 
};