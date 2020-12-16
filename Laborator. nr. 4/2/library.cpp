#include "library.h"
library::library() {
	this->carti = vector<carte>(0);
}
library::library(int n) {
	this->carti = vector<carte>(0);
	for (int i = 1; i <= n; i++) {
		carte aux;
		aux.citire();
		this->carti.push_back(aux);
	}
}
bool library::validareIsbn() {
	for (size_t i = 0; i < carti.size(); i++) {
		if (!carti[i].getIsbn().validareCifraControl()) {
			return false;
		}
	}
	return true;
}
void afisare(const library &lib) {
	for (size_t i = 0; i < lib.carti.size();i++) {
		carte aux = lib.carti[i];
		aux.afisare();

	}
}
void citire(library &lib) {
	cout << "Numarul de carti din biblioteca:";
	int n;
	cin >> n;
	lib = library(n);
}