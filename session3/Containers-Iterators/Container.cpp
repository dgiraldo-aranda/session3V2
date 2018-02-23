#include "Container.h"
#include <iostream>
#include <vector>

using namespace std;

void ExampleContainer()
{
    // Create the container
    vector<int> integers;
    for(int i = 0; i < 5; i++)
    {
        integers.push_back(i);
    }
    // declaring and iterator for a vector of integers.
    vector<int>::iterator it;
    it = integers.begin(); // integers.begin() returns an iterator pointing to the first
                            //integer it stores.
    cout << *it << endl;
    it++; // now it points  to the second integer within the vector.
    cout << *it << endl;
    *it = 20;   // This iterator allows modifying the element it points, if you don't want to
                // allow modifying elements within  a vector you should use a const iterator
                // integers.cbegin() would return such iterator.

    // Iterating the vector...
    for(it = integers.begin(); it != integers.end(); ++it)
    {
        cout << *it << endl;
    }



}
