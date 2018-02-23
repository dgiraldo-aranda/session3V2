#include "OperatorsPrecedence.h"
#include <iostream>
#include<array>

using namespace std;

/**
 * @brief OperatorsPrecedenceExample
 * There are several operators in C++ which we use to perfom operations  with
 * program variables and can be aritmetic (+, -, * /), comparison (==, != < >),
 * logical (&& || !) bitwise (&,  | ^ ~), assignment (= +=), specials (?, cast)
 * and several, you can find a complete list on
 * https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
 *
 * The operators precedence determine the order in which operations are performed
 * or the grouping of terms in an expression with miltiple operators. Operators with higuer precedence are
 * evaluated first, when there are operators are evaluated according to the asociativity.
 * See: https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
 */
void OperatorsPrecedenceExample()
{
    int a = 2*2+3;// a=7, * is evaluated first, * has higuer priority
    cout << a << endl;
    a = 2*(2+3);// a = 10, the parentesis forces tu evaluate first the +.
     cout << a << endl;
    a = 8/2*3; // a= 12, / is evaluated first because it is at left. Multiplicative operateors (*/%)
                //has asociativity left to righ.
     cout << a << endl;
    a = 8*3/4; // * is evaluated first.
     cout << a << endl;
    a += someFunction()[0]; // a = 7, () is evaluated firts, then [] is evaluated and and finally +=.
     cout << a << endl;
    }
array<int, 2> someFunction()
{
    array<int, 2> arr = {1,2};
    return arr;
}


