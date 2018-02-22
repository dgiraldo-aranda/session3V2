#include "PowerfullCar.h"

using namespace std;

PowerfullCar::PowerfullCar(std::string brand, int cap):
    Car(brand)
{
    engineCapacity = cap;
}
void PowerfullCar::ChangeEngine(int cap)
{
    engineCapacity = cap;
}
void PowerfullCar::run(int disance)
{
    pos += disance;
}
