#include <string>

/**
 * @brief The Car class
 * A class is a collection of variables and functions that is used to define
 * object´s structre and behavior that interact among them according to our pogram's
 * desired behavior. Variables of the class are known as attributes and functions are known as
 * methos, both are class members; methods can modify the class attributs and use external
 * variables to define and object's behavior.
 * Instances of classes are objects.
 */
class Car
{
/*
 * Attributes of a class can be private, protected or public; private attributes can only
 * be accessed by the methods of the class it self, protected attributes can be accesed by methods
 * of the class itself and by methods of its subclasses. Public attributes can be accessed by
 * any function or class in the program.
 */
private:
    std::string brand;    
protected:
    int pos;
    int engineCapacity;
/*
 * Class methods can be private, protected or public as well.
 */
public:
    Car(){}
    Car(std::string brand);
    void run(int disance);
};

/**
 * @brief The PowerfullCar class
 * Classes can be inherited,  a base class is a superClass (in this case is car)
 * and a dereived or inherited class is a subclass (in this case is powerfullcar).
 *Subclasses inherit  the attributes and behavior of a superclass and are used to
 * extend or specializase behavior. PowerfullCar is a subclass of Car, and has and aditional
 * feature: its engine can be replaced.
 */
class PowerfullCar: Car
{
public:
    PowerfullCar() {}
    PowerfullCar(std::string brand, int cap);
    void ChangeEngine(int cap);
    void run(int disance);

};
