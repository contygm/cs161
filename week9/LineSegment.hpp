/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/21/2018
** Description:  Class declaration for "LineSegment"". 
**          
*******************************************************************************/ 

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
	private:
		Point* endPnt1;
		Point* endPnt2;
	
	public:
		// constructor
		LineSegment(Point* ep1, Point* ep2);

		// setters
		void setEnd1(Point* ep1);
        void setEnd2(Point* ep2);

		// getters
		Point getEnd1();
        Point getEnd2();
		
        /********************************************************************* 
		** Description: returns length (double) between two endpoints 
		*********************************************************************/
		double length();
		
		/********************************************************************* 
		** Description: returns slope (double) between two endpoints 
		*********************************************************************/
		double slope();

};

#endif
