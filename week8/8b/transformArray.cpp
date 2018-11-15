/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/14/2018
** Description:  
**          
*******************************************************************************/ 
#include <iostream>
using std::endl;
using std::cout;

void transformArray(int *& array, int size)
{
    // dynamically allocate array that is twice as long
    int* newArray = new int[size*2];

    // populate newArray 
    for (int i=0; i < size; i++)
    {
        // fill first half with original array value
        newArray[i] = *(array+i);

        // fill last half with original array value plus one
        newArray[size+i] = *(array+i)+1;
    }
        
    for (int i=0; i < (size*2); i++)
    {
        cout << "YO: " << newArray[i] << endl;
    }
    
    delete []array;
    // update original array
    array = newArray;

    // clear memory
    delete []newArray;
}