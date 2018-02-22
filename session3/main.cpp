#include <iostream>
#include "Scope.h"
#include <string>
#include "Pointers.h"
#include "CarsManager.h"

using namespace std;

/*
 * Each name that appears in a C++ program is only valid in some possibly
 * discontiguous portion of the source code called its scope.
 * Taken from: http://en.cppreference.com/w/cpp/language/scope
*/


/**
 * @brief globalInt
 * This is a global parameter, its scope is global, it means that
 * I can use it any where in this file, inside and outside the functions
 * I define within this file.
 */
int globalInt = 3; // Here the scope of globalInt
std::string s ="My global String";

void MyFuction()
{
    cout << "\t Entering local scope of MyFunction " << endl;
    std::string myString  = "This is a string"; // Scope of myString begins, it is a local scope inside of
                                                //a block of a function.
    myString.append(" appending something"); // I can use MyString only inside MyFunction.
    int b = globalInt + 1; // Scope of b begins, I can use global parameters inside functions.
    cout << "\t" + myString << endl;
    cout << "\t Declaration of Local variable b has used a global scoped variable: "<< b << endl;
    cout << "\t getting out local scope of function MyFunction"<< endl;
}// The scope of MyString and b end here.
//b = b + 1 ; This is an error, b has not been defined in global scope.

void MyFunctionWithParams(int a, std::string s)// Scope of global s is interrupted, scope of local s begins
{
    cout << "\t Entering local scope of MyFunctionWithParams" << endl;
    cout << "\t local s is: " << s << endl;
    cout << "\t local a is: " << a << endl;
    {
        cout << "\t \t Entering a new scope inside MyFunctionWithParams scope" << endl;
        cout << "\t \t first a: " << a << endl;
        int a = 7;// Scope of first a is paused, scope of second a starts;
        cout << "\t \t Value of second a in subscope is: " << a << endl;
        cout << "\t \t Getting out subscope" << endl;
    }
    cout << "\t All control flows (if, for loop, while loops) define a new scope" <<endl;
    for(int n = 0; n < a; ++n)// Scope of n starts
    {
        cout << "\t \t we are now in the scope of the for cicle, n :"<< n << endl;
    }
    cout << "\t Getting out local scope of MyFunctionWithParams"<< endl;;
}

int main()
{
    /*cout << "There is  a global scoped variable globalInt, whose value is: " << globalInt << endl;
    cout << "There is  a global scoped variable s, whose value is: " << s << endl;
    MyFuction();
    MyFunctionWithParams(2, " My local string");*/
    //PointersExample();
    ManageCars();
    cout <<"Program finished"<< endl;
    return 0;
}
