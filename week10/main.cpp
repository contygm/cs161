#include <iostream>
#include "GBoard.hpp"
#include "basicTest.cpp"
#include "drawTest.cpp"
#include "diagonalTest.cpp"
#include "horizontalTest.cpp"
#include "verticalTest.cpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // GBoard myBoard;
    char move;
    bool correctState;

    basicTest();
    drawTest();
    horizontalTest();
    verticalTest();
    diagonalTest();

    return 0;
};