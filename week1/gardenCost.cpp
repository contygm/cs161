/*******************************************************************************
** Author:       Genevieve Conty
** Date:         09/25/2018
** Description:  Asks the user for cost of garden supplies and then prints out
**               the total cost of garden supplies.
*******************************************************************************/ 

#include <iostream>
using namespace std;

int main()
{
	double soil, seeds, fence, total;

	//Get soil cost
	cout << "What does the soil cost? ";
	cin >> soil;

	//Get seeds cost
	cout << "What do the flower seeds cost? ";
	cin >> seeds;

	//Get fence cost
	cout << "What does the fence cost? ";
	cin >> fence;

	//Calculate total
	total = fence + seeds + soil;

	//Print total 
	cout << "The total cost is " << total << endl;	
	return 0;
}
