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

    cout << "Gimmie an x or o: " << endl;
    cin >> move;
    myBoard.makeMove(3, 1, move);

    cout << "TEST 1" << endl;
    myBoard.printBoard();

    cout << "Gimmie an x or o: " << endl;
    cin >> move;
    myBoard.makeMove(4, 1, move);
    
    cout << "TEST 2" << endl;
    myBoard.printBoard();

    return 0;
};