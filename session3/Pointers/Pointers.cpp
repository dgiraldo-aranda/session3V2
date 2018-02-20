#include "Pointers.h"
#include <iostream>

using namespace std;
/**
 * @brief PointersExample
 * This function  is an example for the usage of pointers.
 * A pointer is a variable that stores the address of another variable.
 * It is used for dynamic memory management and allocation.
 */
void PointersExample()
{
    // Basics
    int a = 5; // a variable.
    int* p = &a; // The pointer p stores the addres of variable a.
                // We can get the addres of any variable with &.
    cout << "Address of variable a is: "<< p << endl;
    cout << "The value stored by p is: " << *p << endl;

    // Pointers atirmetic.
     char buf[5] = {'a', 'b', 'c', 'd','e'};
     char* pbuf = &buf[0];
     cout << "Value stored by pbuf: " << *pbuf << endl;
     cout << "pbuf[0]: " << pbuf[0] << endl;
     cout << "pbuf[2]: " << pbuf[2] << endl;
     pbuf  += 2 ;
     cout << " pbuf + 2: " << *pbuf << endl;
     cout << "pbuf[1]: " << pbuf[1] << endl;

     pbuf - 1;
     cout << "Decrementing pbuf: " << *pbuf << endl;

     // Dynamic memory
     char *pch = new char[5];
     for(int i = 0; i < 5; i++ )
     {
         pch[i] = 'a';
     }
     delete pch;


}
