/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/14/2018
** Description:  Function accepts a pointer by reference for an array and the size
**          of the array. Function transforms array into double size with the first
**          half being the original array values and the last half being 
**          the original array values plus one. 
*******************************************************************************/ 

void transformArray(int* &array, int size)
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
    
    delete[] array;
    
    // update original array
    array = newArray;

    // clear memory
    newArray = NULL;
}