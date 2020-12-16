#include "Cshape.h"
#include "Cpunct.h"
#include "Cdreptunghi.h"
#include "Cpatrat.h"
#include "Ccerc.h"
#include "Cdreapta.h"
int main()
{
    Cpunct o(0, 0);
    Cpunct a(0, 1);
    Cpunct b(1, 0);
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Cshape* shapes[] = { new Cpatrat(0,1, 1,0), new Cdreptunghi(x1,y1, x2,y2), new Ccerc(2, 1,1),new Cdreapta(x1,y1,x2,y2) };

    for (int i = 0; i <=3; ++i)
        cout << "Fig."<<i << " perim=" << shapes[i]->afisarePerimetru() << endl;
    for (int i = 0; i <= 3; i++)
    {
        
        delete shapes[i];
    }
    
   

    return 0;
}