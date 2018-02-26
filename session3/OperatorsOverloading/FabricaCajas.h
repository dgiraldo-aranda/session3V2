/**
 * @brief The caja class
 * Several build-in operators in C++ can be overloaded in order to define
 * custom behavior of a class or a user-defined type.
 * The overloadable operators
 * are: + - * / % ^  & | ~ !  = < > <= >= ++ -- << >> == != && || += -= /= *= %=
 * ^= &= |= *= <<= >>= [] () -> ->* new, new[] delete delete[]
 *The non overloadable operators are: :: .* . ?:
 */
class caja
{
private:
    int largo;
    int ancho;
    int alto;
public:
    caja() = delete;
    caja(int largo, int ancho, int alto):
        largo(largo), ancho(ancho), alto(alto)
    {

    }
    /**
     * @brief operator +
     * @param c
     * @return Caja
     * In this example, we are overloading the operator + in order to define the ssume of boxes,
     * the result is another box with higuer dimensions.
     */
    caja operator+(caja c)
    {
        caja r(0,0,0);
        r.alto = this->alto + c.alto;
        r.ancho =  this->ancho + c.ancho;
        r.largo = this->largo + c.largo;
        return r;
    }
};


void FabricarCaja(){
    caja c1(10,20,10);
    caja c2(15,25,35);

    // Creamos una tercera caja que es la suma de las dos anteriores.
    caja c3 = c1 + c2;
}

