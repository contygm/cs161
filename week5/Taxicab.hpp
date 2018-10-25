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
    int xCoord;
    int yCoord;
    int distanceTraveled;

public:
    // default constructor
    Taxicab();

    // constructor
    Taxicab(int x, int y);

    // getters
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();

    /********************************************************************* 
    ** Description: calculate x-axis distance
    *********************************************************************/
    void moveX(int x);

    /********************************************************************* 
    ** Description: calculate y-axis distance
    *********************************************************************/
    void moveY(int y);
};

#endif