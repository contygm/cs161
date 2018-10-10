/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/09/2018
** Description:  
**               
*******************************************************************************/ 

#include <iostream>
#include <fstream>
#include <string>
using std::endl;
using std::cout;
using std::cin;


int main()
{
    std::ifstream inputFile;
    std::string fileName;
    std::ofstream outputFile;

    // ask user for name of input file
    cout << "Please enter your filename." << endl;
    cin >> fileName;    

    // attempt to open input file
    inputFile.open(fileName);

    // if file exists
    if (inputFile)
    {
        int sum;
        int number;

        // add integers in input file
        while (inputFile >> number) 
        {
            sum += number;
        }

        // close input file
        inputFile.close();

        // create output file and store sum in it
        outputFile.open("sum.txt");
        outputFile << sum << endl;
        outputFile.close();

        // print success notification to user
        cout << "result written to sum.txt" << endl;
    } 
    // print error if file does not exist
    else {
        cout << "could not access file" << endl;
    }

    return 0;
}