#include "Cdreapta.h"
#include "Ccerc.h"
#include "Cpunct.h"
#include "Cdreptunghi.h"
#include "Cpatrat.h"
using namespace std;
int main()
{
	//citire si afisarea unui singur punct
	float x, y, x1, y1, x2, y2;
	float raza;

	cout << "Citeste coordonatele punctului:";
	cin >> x >> y; 
	Cpunct punct(x, y);
	punct.afisare();

	// cerc
	cout << "Citeste raza cercului:";
	cout << "\nRaza:"; 
	cin >> raza;
	Ccerc cerc=Ccerc(x, y, raza);
	cout << "Perimetru cerc:";
	cout << cerc.getPerimetru();
	cout << "\nArie cerc:";
	cout << cerc.getArie();

	// dreapta
	cout << "\nDa-ti punctele pentru dreapta:\n";
	cin >> x1 >> y1 >> x2 >> y2;
	Cdreapta dreapta = Cdreapta(x1, y1, x2, y2);
	cout <<"\nLungimea dreptei este:"<< dreapta.getLungime();
	//dreptunghi
	cout << "\nCoordonate dreptunghi:";
	cin >> x1 >> y1 >> x2 >> y2;
	Cdreptunghi dreptunghi = Cdreptunghi(x1, y1, x2, y2);
	cout << dreptunghi.getAria() << "\n";
	cout << dreptunghi.getPerimetru();

	//patrat
	cout << "\nCoordonate patrat:";
	cin >> x1 >> y1 >> x2 >> y2;
	Cpatrat patrat = Cpatrat(x1, y1, x2, y2);
	cout << patrat.getArie() << " " << patrat.getPerimetru();
	return 0;
}