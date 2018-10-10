/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/01/2018
** Description:  Asks user for number of integers. Intakes said number of 
**               integers from user. Returns the min and max of number set. 
*******************************************************************************/ 

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
    int size;
    int min;
    int max;
    int i;
    
    // ask user for size of number set
    cout << "How many integers would you like to enter?" << endl;
    
    // set size and initilizer equal to user input
    cin >> size;
    i = size;

    // ask user for all integers in number set
    cout << "Please enter " << size << " integers." << endl;

    // set min and max while user inputs integers
    while(i > 0) 
    {
        int currentInt;

        // set user input as current integer
        cin >> currentInt;

        // if first integer, set both max and min to currentInt
        if (i == size) 
        {
            max = currentInt;
            min = currentInt;
        } 
        // reset max with currentInt if it is more
        else if (currentInt > max) 
        {
            max = currentInt;
        }
        // reset min with currentInt if it is less
        else if (currentInt < min) 
        {
            min = currentInt;
        }

        // decrease iterator
        i--;
    }

    // print min and max
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

}