
#include <algorithm>
using std::sort;

int findMedian (int array, int length)
{
    // initialize needed variables
    int halfLength = length / 2;
    int median = 0;
    
    // initialize array with two parameters
    int intArray[length] = array;

    // sort array
    sort(intArray, length)
    
    // check sort total
    for (int i = 0, i < 5, i++) 
    {
        cout << intArray[i] << endl;
    }


    // even
    if (length % 2) 
    {
        
    } 
    // odd
    else 
    {
        median = intArray[halfLength + 1];
    }

    return median;
}