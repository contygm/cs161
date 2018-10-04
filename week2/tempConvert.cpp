/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/01/2018
** Description:  Asks user for a Celsius temperatures, converts user input to
**               Fahrenheit, and returns Fahrenheit temperature.
*******************************************************************************/ 

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main() 
{
    double celsiusTemp;
    double fahrenheitTemp;

    // ask user for celsius temperature
    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsiusTemp;

    // convert celsius temperature to fahrenheit
    fahrenheitTemp = celsiusTemp * 9/5 + 32;

    // display converted temperature to user
    cout << "The equivalent Fahrenheit temperature is:" << endl;
    cout << fahrenheitTemp << endl;;

    return 0;
}