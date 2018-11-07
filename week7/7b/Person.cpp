/********************************************************************* 
** Author: Genevieve Conty
** Date: 11/7/2018
** Description: Constucter file for Person class. Contains functions for
** Person class. 
*********************************************************************/

#include "Person.hpp"
#include <string>
using std::string;

// constuctor: initializes name and age
Person::Person(string n, double a)
{
    name = n;
    age = a;
}

// getters
string Person::getName()
{
    return name;
}

double Person::getAge()
{
    return age;
}