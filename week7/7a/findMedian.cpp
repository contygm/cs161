
/********************************************************************* 
** Author: Genevieve Conty
** Date: 11/7/2018
** Description: Function for finding median of int array. Takes 
** array (int) and length (int) of array params respectively. 
*********************************************************************/ 

#include <algorithm>
using std::sort;

int findMedian (int intArray[], int length)
{
    // initialize needed variables
    int halfLength = length / 2;
    int median = 0;

    // sort array
    sort(intArray, intArray+length);

    // even array length
    if (length % 2 == 0) 
    {
        median = (intArray[halfLength - 1] + intArray[halfLength]) / 2;
    } 
    // odd array length
    else 
    {
        median = intArray[halfLength];
    }
    
    return median;
}