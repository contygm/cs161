
#include "Box.hpp"
#include "Taxicab.hpp"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
    // Box box1(2.4, 7.1, 5.0);
    // Box box2;
    // double volume1 = box1.calcVolume();
    // double surfaceArea1 = box1.calcSurfaceArea();
    // double volume2 = box2.calcVolume();
    // double surfaceArea2 = box2.calcSurfaceArea();

    // cout << "box1" << endl;
    // cout << volume1 << endl;
    // cout << surfaceArea1 << endl;
    // cout << "box2" << endl;
    // cout << volume2 << endl;
    // cout << surfaceArea2 << endl;

    Taxicab cab1;
    Taxicab cab2(5, -8);
    cab1.moveX(3);
    cab1.moveY(-4);
    cab1.moveX(-1);
    cout << "cab1.getDistanceTraveled()" << endl;
    cout << cab1.getDistanceTraveled() << endl;
    cout << cab1.getXCoord() << endl;
    cout << cab1.getYCoord() << endl;

    cab2.moveY(7);
    cout << "cab2.getYCoord()" << endl;
    cout << cab2.getYCoord() << endl;
}