/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         10/17/2018
** Description:  Determine the distance an object falls due to gravity in a 
**               given time period. Return distance in meters.                
*******************************************************************************/ 

#include <cmath>

const float GRAVITY = 9.8;

float fallDistance(float fallTime) 
{
    float fallDistance = .5 * GRAVITY * pow(fallTime, 2);
    return fallDistance;
}