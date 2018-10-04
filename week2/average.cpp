/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/01/2018
** Description:  Asks the user for 5 numbers (doubles) and returns the average 
**               (double) of the 5 numbers
*******************************************************************************/ 

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main() 
{
    double total;
    double inputNumber;
    double average;

    // ask user for input
    cout << "Please enter five numbers." << endl;

    // recieve 1st number and add to total
    cin >> inputNumber;
    total += inputNumber;
    
    // recieve 2nd number and add to total
    cin >> inputNumber;
    total += inputNumber;
    
    // recieve 3rd number and add to total
    cin >> inputNumber;
    total += inputNumber;
    
    // recieve 4th number and add to total
    cin >> inputNumber;
    total += inputNumber;
    
    // recieve 5th number and add to total
    cin >> inputNumber;
    total += inputNumber;

    // calculate average
    average = total/5;

    // display average to user
    cout << "The average of those numbers is:" << endl;
    cout << average << endl;;

    return 0;
}