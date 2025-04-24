#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"
#include "CRhombus.h"

using namespace std;

int main()
{
    //faccio putatore di tipo quadrilatero
    //lo faccio puntare a oggetti di tipo rettangolo
    //chiamo getarea e dump

    Quadrilateral* p;
    p = new Rectangle(2,3);
    cout << endl << "area of p: " << p->GetArea()<< endl << flush;
    p->Dump();
    delete p;

    Rectangle R(2,3);
    cout << endl << "area of R: " << R.GetArea() << endl << flush
    R.Dump();
;
    p = new Rhombus(2,4);
    cout << endl << "area of p: " << p->GetArea()<< endl << flush;
    p->Dump();
    delete p;

    return 0;

}