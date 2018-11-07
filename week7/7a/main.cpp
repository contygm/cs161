#include <iostream>
#include "findMedian.cpp"
using std::cout;

int main() {

    // return median odd
    int array[] = {2, 19, -2, 0, 5};
    cout << findMedian(array, 5) << endl; // [-2, 0, 2, 5, 19]; 2 
    
    int array1[] = {3, 19, -2, 0, 5};
    cout << findMedian(array1, 5) << endl; // [-2, 0, 3, 5, 19]; 3

    // return median even
    int array2[] = {2, 19, -2, 0};
    cout << findMedian(array2, 4) << endl; // [-2, 0, 2, 19]; 1

    int array3[] = {5, 19, -2, 0};
    cout << findMedian(array3, 4) << endl; // [-2, 0, 5, 19]; 2

    return 0;
}