/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/01/2018
** Description:  Asks the user for cents and returns correct change in quarters, 
**               dimes, nickels, and pennies.
*******************************************************************************/

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main() 
{
    int quarters;
    int nickels;
    int dimes;
    int pennies;
    int amount;

    // ask user for an amount
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> amount;

    // calculate the amount of each coin needed
    // aim for least amount of coins, so largest first
    quarters = amount / 25;
    amount = amount % 25;

    dimes = amount / 10;
    amount = amount % 10;

    nickels = amount / 5;
    pennies = amount % 5;
    
    // display amount of each coin
    cout << "Your change will be:" << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;

    return 0;
}