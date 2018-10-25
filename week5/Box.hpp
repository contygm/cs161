/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/24/2018
** Description: Header file for Box class. Contains definitions
** Box class. 
*********************************************************************/ 

// Box.hpp
#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
    double width;
    double height;
    double length;

public:
    // default box constructor
    Box();

    // box constructor
    Box(double w, double h, double l);
    
    // setters
    void setWidth(double);
    void setHeight(double);
    void setLength(double);

    /********************************************************************* 
    ** Description: calculate box's volume
    *********************************************************************/ 
    double calcVolume();

    /********************************************************************* 
    ** Description: calculate box's surface area
    *********************************************************************/ 
    double calcSurfaceArea();
};

#endif