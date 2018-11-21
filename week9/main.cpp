#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

using std::cout;
using std::endl;

int main()
{
    // Test 1: perfect pyth triples w/ 0 & negative
    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);
    double dist = p1.distanceTo(p2);
    cout << (dist == 5.0) << ": Distance equals 5" << endl;


    // Test 2: perfect pyth triples w/o 0 or negative
    Point p3(2.0, 1.0);
    Point p4(10.0, 7.0);

    dist = p3.distanceTo(p4);

    cout << (dist == 10.0) << ": Distance equals 10" << endl;

    // Test 3: not perfect pyth triple, should have decimals
    Point p5(0.0, 0.0);
    Point p6(4.0, 7.0);

    dist = p5.distanceTo(p6);

    cout << (dist) << ": Distance equals 8.06226" << endl;

    // Test 4: LineSegment
    LineSegment ls1(&p1, &p2);
    double length = ls1.length();
    double slope = ls1.slope();
    cout << (length) << ": Length equals 5" << endl;
    cout << (slope) << ": Slope equals 1.33333" << endl;

    Point p7(4.3, 7.52);
    Point p8(-17.0, 1.5);
    LineSegment ls2(&p7, &p8);
    length = ls2.length();
    slope = ls2.slope();
    cout << (length) << ": Length equals 22.13437" << endl;
    cout << (slope) << ": Slope equals 0.28163" << endl;

    // vertical lines = infinity? CHECK THIS
    // horizontal lines

};

// compile with:
// g++ main.cpp Point.cpp LineSegment.cpp -o main
