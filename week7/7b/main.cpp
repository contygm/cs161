#include <iostream>
#include "Person.hpp"
using std::cout;
using std::endl;

int main() 
{
    // initialize
    Person jay("Jay", 29);
    Person steve("Steve", 33);
    Person you("You", 26);

    // check initialization and getters work
    cout << you.getName() << " are " << you.getAge() << endl;
    cout << jay.getName() << " is " << jay.getAge() << endl;
    cout << steve.getName() << " is " << steve.getAge() << endl;

    // TODO: check std deviation is as expected


    return 0;
}