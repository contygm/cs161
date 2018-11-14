
/********************************************************************* 
** Author: Genevieve Conty
** Date: 11/7/2018
** Description: Standard Deviation function. Accepts array (Person)
** and size (int) of array. 
*********************************************************************/

/*
*   Standard Deviation Formula:
*   sqrt( sum( (X_i - µ)^2 ) / N )
*
*   X_i = single input
*   µ = avg of all inputs
*   N = total number of inputs
*/

#include <iostream>
#include <cmath>
#include "Person.hpp"

double stdDev(Person people[], int size)
{
    // initialize needed variables
    double stdDev = 0;
    double ages[size];
    double sumAge = 0;
    double averageAge = 0;
    double sumDiff = 0;

    // loop through people array to: 
    // - create age array
    // - add all ages together in sumAge
    for (int i = 0; i < size; i++)
    {
        double personAge = people[i].getAge();
        ages[i] = personAge;
        sumAge += personAge;
    }

    // find averageAge
    averageAge = ( sumAge / size );
    
    // loop through age array to:
    // - find difference between averageAge and each individual age
    // - square each differnce and add to sumDiff
    for (int i = 0; i < size; i++)
    {
        double diff = ages[i] - averageAge;
        sumDiff += pow(diff, 2);
    }

    // find square root of average sumDiff
    stdDev = sqrt(sumDiff / size); 

    return stdDev;
}