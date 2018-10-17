/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/17/2018
** Description:  Sort 3 given numbers from lowest to highest.          
*******************************************************************************/ 

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

void swap(int &num1, int &num2)
{
    int temp; 
    temp = num2;
    num2 = num1;
    num1 = temp;
}

void smallSort(int &num1, int &num2, int &num3)
{
    while ( (num2 < num1) || (num3 < num2) || (num3 < num1))
    {
        if (num2 < num1) 
            swap(num2, num1);
        else if (num3 < num2)
            swap(num3, num2);
        else if (num3 < num1)
            swap(num3, num1);
    }
     
}