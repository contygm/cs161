
#include <iostream>
#include <cmath>
#include "Person.hpp"

// REMOVE
using std::cout;
using std::endl;

double stdDev(Person people[], int size)
{
    double stdDev = 0;
    double ages[size];
    double sumAge = 0;
    double averageAge = 0;
    double sumDiff = 0;

    for (int i = 0; i < size; i++)
    {
        double personAge = people[i].getAge();
        cout << "personAge: " << personAge << endl;

        ages[i] = personAge;
        sumAge += personAge;
    }

    cout << "sumAge: " << sumAge << endl;

    averageAge = ( sumAge / size );

    cout << "averageAge: " << averageAge << endl;

    
    for (int i = 0; i < size; i++)
    {
        double diff = ages[i] - averageAge;
        
        sumDiff += pow(diff, 2);
    }

    stdDev = sqrt(sumDiff / size); 
    // squareRoot ( sum( (X_i - avg)^2) ) / N ) 
    cout << "Standard Deviation is " << stdDev << endl; // 2.6536138880151

    return stdDev;
}