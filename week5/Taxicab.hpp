/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/24/2018
** Description: Header file for Taxicab class. Contains definitions
** Taxicab class. 
*********************************************************************/ 

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
private:
    int xVal;
    int yVal;

public:
    // default constructor
    Taxicab();

    // constructor
    Taxicab(int x, int y);

    // getters
    void getXCoord();
    void getYCoord();
    void getDistanceTraveled();

    /********************************************************************* 
    ** Description: calculate x-axis distance
    *********************************************************************/
    int moveX();

    /********************************************************************* 
    ** Description: calculate y-axis distance
    *********************************************************************/
    int moveY()
}
