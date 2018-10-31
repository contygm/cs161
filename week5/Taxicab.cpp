/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/24/2018
** Description: Constucter file for Taxicab class. Contains functions for
** Taxicab class. 
*********************************************************************/ 

#include "Taxicab.hpp"
#include <stdlib.h>

// default constructor
Taxicab::Taxicab() 
{
    xCoord = 0;
    yCoord = 0;
    distanceTraveled = 0;
}

// constructor
Taxicab::Taxicab(int x, int y)
{
    xCoord = x;
    yCoord = y;
    distanceTraveled = 0;
}

// getters
int Taxicab::getXCoord()
{
    return xCoord;
}

int Taxicab::getYCoord()
{
    return yCoord;
}

int Taxicab::getDistanceTraveled()
{
    return distanceTraveled;
}

/********************************************************************* 
** Description: calculate x-axis distance
*********************************************************************/
void Taxicab::moveX(int x)
{
    xCoord += x;
    distanceTraveled += abs(x);
}

/********************************************************************* 
** Description: calculate y-axis distance
*********************************************************************/
void Taxicab::moveY(int y)
{
    yCoord += y;
    distanceTraveled += abs(y);
}