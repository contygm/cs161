#include <iostream>
#include "Person.hpp"
using std::cout;
using std::endl;

int main() 
{
    // initialize
    Person jay("Jay", 29.75);
    Person steve("Steve", 33);
    Person you("You", 26.5);

    // check initialization and getters work
    cout << you.getName() << " are " << you.getAge() << endl; // 26
    cout << jay.getName() << " is " << jay.getAge() << endl; // 29
    cout << steve.getName() << " is " << steve.getAge() << endl; // 33

    // TODO: check std deviation is as expected


    return 0;
}