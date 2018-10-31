/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/24/2018
** Description: Constucter file for Box class. Contains functions for
** Box class. 
*********************************************************************/ 

#include "Box.hpp"

// default box constructor
Box::Box()
{
    width = 0;
    height = 0;
    length = 0;
}

// box constructor
Box::Box(double w, double h, double l) 
{
    width = w;
    height = h;
    length = l;
}

// setters
void Box::setWidth(double w)
{
    width = w;
}

void Box::setHeight(double h)
{
    height = h;
}

void Box::setLength(double l)
{
    length = l;
}

/********************************************************************* 
** Description: calculate box's volume
*********************************************************************/ 
double Box::calcVolume()
{
    return width * height * length;
}

/********************************************************************* 
** Description: calculate box's surface area
*********************************************************************/ 
double Box::calcSurfaceArea()
{
    double surfaceArea = 2 * ((width * length) + (height * length) + (width * height));
    return surfaceArea;
}