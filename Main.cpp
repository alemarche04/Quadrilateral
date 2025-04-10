#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"

using namespace std;

int main()
{
    float area;
    float a0, a1, a2, a3;

    Quadrilateral* A; // non viene chiamato nessun costruttore
    Rectangle r1;
    Rectangle r2(1, 7);

    A = &r1; // il puntatore della classe madre puo' puntare a un oggetto della classe figlia

    A -> Dump(); //Dump del quadrilatero
    r1.Dump(); //Dump del rettangolo

    area = r1.GetArea();
    cout << "Area of r1: " << area << endl;

    r1 = r2;

    area = r1.GetArea();
    cout << "Area of r1: " << area << endl;

    A -> Dump();
    // A -> SetWidth(11, 4); // non si puo' usare il puntatore della classe madre per accedere ai metodi della classe figlia
    r1.GetAngles(a0, a1, a2, a3);

    return 0;

}