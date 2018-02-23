#include "FabricaCajas.h"
#include "Caja.h"
#include <iostream>

using namespace std;

void FabricarCajas()
{
    // creamos dos cajas.
    caja c1(10,20,10);
    caja c2(15,25,35);

    // Creamos una tercera caja que es la suma de las dos anteriores.
    caja c3 = c1 + c2;
}
