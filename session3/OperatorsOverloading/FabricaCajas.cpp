#include "FabricaCajas.h"
#include "Caja.h"
#include <iostream>

using namespace std;

void FabricarCajas()
{
    caja c1(10,20,10);
    caja c2(15,25,35);

    caja c3 = c1 + c2;
}
