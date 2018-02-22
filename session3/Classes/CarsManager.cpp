#include "CarsManager.h"
#include <iostream>


using namespace std;

void ManageCars()
{
    cout << "Creating an object of type Car, an instance of Car" << endl;
    Car car("Chevrolet");
    cout << "Running the car" << endl;
    car.run(5);
    cout << "Creating and running a powerfull ferrari"<< endl;
    PowerfullCar ferrari("Ferrari", 5000);
    ferrari.run(10);
    cout<< "Changing the car engine" << endl;
    ferrari.ChangeEngine(7000);
}
