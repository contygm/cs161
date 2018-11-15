/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/14/2018
** Description:  
**          
*******************************************************************************/ 
#include <iostream>
using std::endl;
using std::cout;

void transformArray(int* array, int size)
{
    // dynamically allocate an array that is twice as long, 
    int* transformedArray = new int[size*2];

    // fill with the values from the original array 
    // then after, fill remaining space with each of those values plus one
    for (int i=0; i < size; i++)
    {
        transformArray[i] = *(array+i);
        transformArray[size+i] = *(array+i)+1;
    }
        
    for (int i=size; i < (size*2); i++)
        cout << transformArray[i] << endl;
    
    // for (int i=0; i < size; i++)
    //     cout << "YO" << *(array+i) << endl;
    
    // array = transformedArray;

    delete []transformedArray;
}