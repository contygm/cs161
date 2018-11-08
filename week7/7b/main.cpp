#include <iostream>
#include "Person.hpp"
using std::cout;
using std::endl;

int main() 
{
    // initialize
    Person you("You", 26.5);
    Person jay("Jay", 29.75);
    Person steve("Steve", 33);
    // Person elder("Elder", 109);
    // Person child("child", 7);
    // Person baby("Baby", 0.5);

    // check initialization and getters work
    cout << you.getName() << " are " << you.getAge() << endl; // 26.5
    cout << jay.getName() << " is " << jay.getAge() << endl; // 29.75
    cout << steve.getName() << " is " << steve.getAge() << endl; // 33
    // cout << elder.getName() << " is " << elder.getAge() << endl; // 109
    // cout << child.getName() << " is " << child.getAge() << endl; // 7
    // cout << baby.getName() << " is " << baby.getAge() << endl; // 0.5

    Person peeps[3] = {you, jay, steve}
    // TODO: check std deviation is as expected
    cout << "Standard Deviation 0 is " << stdDeviation(peeps, 3) << endl; // 2.6536138880151

    // Person peeps1[6] = {you, jay, steve, elder, child, baby}
    // cout << "Standard Deviation 1 is " << stdDeviation(peeps1, 6) << endl; // 35.475465896244


    return 0;
}