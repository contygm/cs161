#include <iostream>
#include "GBoard.hpp"
#include "basicTest.cpp"
#include "drawTest.cpp"
#include "diagonalTest.cpp"
#include "horizontalTest.cpp"
#include "verticalTest.cpp"
#include "advTest.cpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // basicTest();
    // drawTest();
    // horizontalTest();
    // verticalTest();
    diagonalTest();
    advTest();

    // TODO: Test case for next move after win

    return 0;
};