/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/09/2018
** Description:  Ask user for a secret number. Ask user to guess the secret
**               number. Tell user when guess is too high/low. Display number
**               of guesses when user guesses correctly.
*******************************************************************************/ 

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
    bool correct = false;
    int guesses = 0;
    int secretNum;

    // ask for secret number
    cout << "Enter the number for the player to guess." << endl;
    cin >> secretNum;

    // ask for 1st guess
    cout << "Enter your guess." << endl;

    // Ask for guesses until user is ga
    while (!correct)
    {
        int currentGuess;
        cin >> currentGuess;
    
        // check if number is too high, low or is correct
        if (currentGuess > secretNum)
        {
            cout << "Too high - try again." << endl;
        } 
        else if (currentGuess < secretNum)
        {
            cout << "Too low - try again." << endl;
        } else {
            correct = true;
        }

        guesses++;
    }

    // print number of guesses
    cout << "You guessed it in " << guesses <<" tries." << endl;

}