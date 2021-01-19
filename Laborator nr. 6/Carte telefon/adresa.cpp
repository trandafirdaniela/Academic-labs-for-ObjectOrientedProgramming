#include "adresa.h"
adresa::adresa()
{
}
adresa::adresa(string oras, string strada)
{
	this->oras = oras;
	this->strada = strada;
}
adresa::~adresa()
{

}
 ostream& operator<<(ostream&os, adresa& adr)
 {
	 cout << "Adresa este:";
	 os << adr.oras;
	 os << " " << adr.strada;
	 return os;
 }
 istream& operator>>(istream& is, adresa& adr)
 {
	 
	 is >> adr.oras >> adr.strada;
	 return is;
 }