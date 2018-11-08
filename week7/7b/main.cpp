#include <iostream>
#include "Person.hpp"
#include "stdDev.cpp"
using std::cout;
using std::endl;

int main() 
{
    // initialize
    Person you("You", 26.5);
    Person jay("Jay", 29.75);
    Person steve("Steve", 33);
    Person elder("Elder", 109);
    Person child("child", 7);
    Person baby("Baby", 0.5);

    // check initialization and getters work
    cout << you.getName() << " are " << you.getAge() << endl; // 26.5
    cout << jay.getName() << " is " << jay.getAge() << endl; // 29.75
    cout << steve.getName() << " is " << steve.getAge() << endl; // 33
    cout << elder.getName() << " is " << elder.getAge() << endl; // 109
    cout << child.getName() << " is " << child.getAge() << endl; // 7
    cout << baby.getName() << " is " << baby.getAge() << endl; // 0.5

    // check std deviation is as expected
    Person peeps[3] = {you, jay, steve};
    stdDev(peeps, 3); // 2.6536138880151

    Person peeps1[6] = {you, jay, steve, elder, child, baby};
    stdDev(peeps1, 6); // 35.475465896244


    return 0;
}