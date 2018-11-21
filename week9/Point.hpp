/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/21/2018
** Description:  Class declaration for "Point". Point is a (x, y) coordinate with
**          	 several methods.
*******************************************************************************/ 

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:
		double xCoord;
		double yCoord;
		
	public:
		// default constructor
		Point();

		// constructor
		Point(double x, double y);
		
		// setters
		void setXCoord(double x);
		void setYCoord(double y);
		
		// getters
		double getXCoord();
		double getYCoord();

		/********************************************************************* 
		** Description: returns distance (double) between this point and a 
		** different point; Uses pythagorean theorem
		*********************************************************************/
		double distanceTo(Point diffPnt);
};

#endif