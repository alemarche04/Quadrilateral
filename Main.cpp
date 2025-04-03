#include <iostream>
#include "CQuadrilateral.h"

using namespace std;

int main()
{
    Quadrilateral q1;
    Quadrilateral q2;
    Quadrilateral q3(q1);

    q1.Dump();

    return 0;
}