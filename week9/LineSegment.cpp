/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/21/2018
** Description:  Implementation for LineSegment class.  
**          	 with several methods.
*******************************************************************************/ 

#include "Point.hpp"
#include "LineSegment.hpp"

// constructor
LineSegment::LineSegment(Point* ep1, Point* ep2)
{
    endPnt1 = ep1;
    endPnt2 = ep2;
}

// setters
void LineSegment::setEnd1(Point* ep1)
{
    endPnt1 = ep1;
}

void LineSegment::setEnd2(Point* ep2)
{
    endPnt2 = ep2;
}

// getters
Point LineSegment::getEnd1()
{
    return *endPnt1;
}

Point LineSegment::getEnd2()
{
    return *endPnt2;
}

/********************************************************************* 
** Description: returns length (double) between two endpoints 
*********************************************************************/
double LineSegment::length()
{
    return endPnt1->distanceTo(*endPnt2);
}

/********************************************************************* 
** Description: returns slope (double) between two endpoints. 
*********************************************************************/
double LineSegment::slope()
{
    double xDiff = endPnt2->getXCoord() - endPnt1->getXCoord();
    double yDiff = endPnt2->getYCoord() - endPnt1->getYCoord();
    
    return (yDiff / xDiff);
}
