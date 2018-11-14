#include <iostream>
#include "transformArray.cpp"
using std::endl;
using std::cout;

int main()
{
    int* myArray = new int[3];
    myArray[0] = 4;
    myArray[1] = 2;
    myArray[2] = 5;

    transformArray(myArray, 3);

    for (int i=0; i<6; i++)
        cout << myArray[i] << endl;

    delete []myArray;

    return 0;
}