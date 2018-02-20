#include "Scope.h"
#include <string>

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

void MyFuction()
{
    std::string myString  = "This is a string"; // Scope of myString begins
    myString.append(" appending something"); // I can use MyString onñy inside MyFunction.
    int b = globalInt + 1; // Scope of b begins, I can use global parameters inside functions.

}// The scope of MyString and b end here.
//b = b + 1 ; This is an error, b has not been defined in global scope.

void MyFunctionWithParams(int a, char b)
{

}
