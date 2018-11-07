/********************************************************************* 
** Author: Genevieve Conty
** Date: 11/7/2018
** Description: Header file for Person class. Contains definitions
** for Person class. 
*********************************************************************/ 

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
using std::string;

class Person
{
private:
    string name;
    double age;

public:

    // constuctor: initializes name and age
    Person(string name, int age);
    
    // getters
    string getName();
    int getAge();

};

#endif