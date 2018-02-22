class caja
{
private:
    int largo;
    int ancho;
    int alto;
public:
    caja() = delete;
    caja(int largo, int ancho, int alto);

    caja operator+(caja c);
};

