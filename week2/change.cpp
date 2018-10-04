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

    // ask user for amount
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> amount;

    // calculate the amount of each coin needed
    quarters = ;
    nickels = ;
    dimes = ;
    pennies = ;

    // display amount of each coin
    cout << "Your change will be:" << endl;
    cout << "Q: " << quarters << endl;
    cout << "N: " << nickels << endl;
    cout << "D: " << dimes << endl;
    cout << "P: " << pennies << endl;

    return 0;
}