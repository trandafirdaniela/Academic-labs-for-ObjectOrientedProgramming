
#include "book.h"
isbn::isbn(const int& tara, const int& editura, const int& titlu) {
	char cif = cifraControl(to_string(tara) + to_string(editura) + to_string(titlu));
	this->value = to_string(tara) + '-' + to_string(editura) + '-' + to_string(titlu) + '-' + cif;
}
isbn::isbn(const string& value) {
	this->value = value;
	if (!this->validareCifraControl()) {
		cout << "Cifra de control invalida\n";
		this->value = "";
	}
}
isbn::isbn() {
	this->value = "000-000-000-0";
}
char cifraControl(const string& grup) {
	int val = stoi(grup);
	val %= 11;
	if (val < 10)
		return '0' + val;
	return 'X';
}
void isbn::setIsbn(string Isbn) {
	*this = isbn(Isbn);
}
string isbn::grup() const {
	/// prelucram value ca sa obtinem un string din primele 3 campuri
	/// 123-123-123-1
	string r = this->value.substr(0, 11);
	while (r.find('-') != string::npos)
	{
		r.erase(r.find('-'));
	}
	return r;
}
bool isbn::validareCifraControl() const {
	string grup = this->grup();
	if (cifraControl(grup) == *(this->value.rbegin()))
		return 1;
	return 0;
}
void isbn::afisare() const
{
	cout << this->value << "\n";
}
