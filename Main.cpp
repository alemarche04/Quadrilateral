#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"
#include "CRhombus.h"

using namespace std;

int main()
{
    Quadrilateral* A;
    Rectangle Re1(2,3);
    Rhombus Rh1 (1,2);

    A = &Re1;
    A->Dump();

    A = &Rh1;
    A->Dump();

    return 0;

}