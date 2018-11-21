
/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/21/2018
** Description:  Implementation for Point class. Point is a (x, y) coordinate 
**          	 with several methods.
*******************************************************************************/ 

#include "Point.hpp"
#include <cmath>
#include <iostream>

using std::sqrt;

// default constructor
Point::Point()
{
    setXCoord(0.0);
    setYCoord(0.0);
}

// constructor
Point::Point(double x, double y)
{
    setXCoord(x);
    setYCoord(y);
}

// setters
void Point::setXCoord(double x)
{
    xCoord = x;
}

void Point::setYCoord(double y)
{
    yCoord = y;
}

// getters
double Point::getXCoord()
{
    return xCoord;
}

double Point::getYCoord()
{
    return yCoord;
}

/********************************************************************* 
** Description: returns distance (double) between this point and a  
** different point; Uses pythagorean theorem
** 
** hypotenuse = sqrt( opposed^2 + adjacent^2);
*********************************************************************/
double Point::distanceTo(Point diffPnt)
{
    double length = 0.0;
    double xSquared = 0.0;
    double ySquared = 0.0;

    // determine length of X side of triangle
    length = getXCoord() - diffPnt.getXCoord();

    // get x^2 value 
    xSquared = pow(length, 2);

    // determine length of Y side of triangle
    length = getYCoord() - diffPnt.getYCoord();

    // get y^2 value 
    ySquared = pow(length, 2);

    // return distance between two points
    return sqrt(xSquared + ySquared);
}