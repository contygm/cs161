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
    int* transformedArray = new int[size*2];

    for (int i=0; i < (size); i++)
        transformArray[i] = array[i];

    for (int i=0; i < (size); i++)
        cout << transformArray[i] << endl;

    delete []transformedArray;
}