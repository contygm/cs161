#include <iostream>
#include "GBoard.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //cout << "" << endl;

    GBoard myBoard;
    char move;

    cout << "TEST 1: basic x and o" << endl;
    myBoard.makeMove(3, 1,'x');
    myBoard.makeMove(7, 9, 'o');
    myBoard.printBoard();


    cout << "TEST 2: Draw" << endl;
    myBoard.printBoard();

    cout << "TEST 3: diagonal" << endl;

    cout << "TEST 4: horizontal" << endl;

    cout << "TEST 5: vertical" << endl;

    return 0;
};