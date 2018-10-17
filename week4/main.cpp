#include "fallDistance.h"
#include "smallSort.h"
#include "hailstone.h"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main() 
{
    float fallTime;
    cout << "Gimme your object's fall time: " << endl;
    cin >> fallTime;
    cout << fallDistance(fallTime) << endl;

    int num1, num2, num3;
    cout << "Gimme 3 integers to sort: " << endl;
    cin >> num1 >> num2 >> num3;
    smallSort(num1, num2, num3);
    cout << num1 << ", " << num2 << ", " << num3 << endl;

    // int duhHail;
    // cout << "Gimme your hailstone number: " << endl;
    // cin >> hailStone;
    // cout << hailStone(duhHail) << endl;

    return 0;
}
