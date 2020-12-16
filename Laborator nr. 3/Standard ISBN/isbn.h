#include <iostream>
#include <cstring>
#include <string>
using namespace std; 

class isbn
{
private:
	string s;
public:
	//functia constructor implicit
	isbn();

	isbn(string, string, string);
	isbn(string, string, string,string);
	void citire();
	void afisare();
	~isbn();


};
