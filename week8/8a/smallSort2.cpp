/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/14/2018
** Description:  Sort 3 given numbers from lowest to highest.          
*******************************************************************************/ 
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
/********************************************************************* 
** Description: extracted swap method to avoid redundancy
*********************************************************************/
void swap(int* num1, int* num2)
{
    int* temp; 
    *temp = *num2;
    *num2 = *num1;
    *num1 = *temp;
}

/********************************************************************* 
** Description: Sort 3 given numbers from lowest to highest. 
*********************************************************************/
void smallSort2(int* num1, int* num2, int* num3)
{
    cout << *num1 << ", " << *num2 << ", " << *num3 << endl;

    // check if numbers are in proper order already
    while ( (*num2 < *num1) || (*num3 < *num2) || (*num3 < *num1))
    {
        cout << *num1 << ", " << *num2 << ", " << *num3 << endl;

        // swap if numbers are out of order
        if (*num2 < *num1) 
            swap(num2, num1);
        else if (*num3 < *num2)
            swap(num3, num2);
        else if (*num3 < *num1)
            swap(num3, num1);
    }
}