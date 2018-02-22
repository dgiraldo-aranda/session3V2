#include "Car.h"

using namespace std;

Car::Car(std::string brand):
    brand(brand)
{
    pos = 0;
    engineCapacity = 1000;
}
void Car::run(int distance)
{
    pos += distance;
}

