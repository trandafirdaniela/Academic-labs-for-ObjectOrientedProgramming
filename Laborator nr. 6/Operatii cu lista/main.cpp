#include "list.h"
int main()
{
    list L;
    int x;
    bool ok = true;
    int expresie = 0;
    while (ok==true)
    {
        
            cout << "\tMeniu:";
            cout << "\n1.Adaugare element in lista.";
            cout << "\n2.Stergere element de pe pozitie data.";
            cout << "\n3.Stergere elemente mai mici decat un numar dat.";
            cout << "\n4.Afisare media aritmetica a elementelor din lista.";
            cout << "\n5.Afisare lista.";
            cout << "\n6.Iesire din meniu.";
            cout << "\n\nAlege optiunea: "; cin >> expresie;
       switch (expresie)
          {
        case 1:
            cout << "Ce element vrei sa adaugi in lista?\n";
            cin >> x;
            L.adaugareElement(x);
            break;

        case 2:
            cout << "De pe ce pozitie vrei sa stergi elementul?\n";
            cin >> x;
            L.stergereElement(x);
            break;
        case 3:
            cout << "Citeste valoarea pentru care toate elementele mai mici decat ea vor fi sterse din lista: \n";
            cin >> x;
            L.stergereElementeConditie(x);
            break;
        case 4:
            L.mediaAritmetca();
        case 5:
            cout << L;
            break;
        case 6:
            cout << "Iesire din meniu.";
            ok = false;
            break;
        default:
            cout << "Optiune gresita.\n";

            break;
        }
    }
    cout << "Am iesit din meniu.";
    return 0;
}