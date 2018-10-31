/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/31/2018
** Description: Constucter file for Team class. Contains functions for
** Team class. 
*********************************************************************/ 

#include "Team.hpp"
#include "Player.hpp"

// constructor
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
    pointGuard = p1;
    shootingGuard = p2;
    smallForward = p3;
    powerForward = p4;
    center = p5;
}

// getters
Player Team::getPointGuard()
{
    return pointGuard;
}

Player Team::getShootingGuard()
{
    return shootingGuard;
}

Player Team::getSmallForward()
{
    return smallForward;
}
Player Team::getPowerForward()
{
    return powerForward;
}
Player Team::getCenter()
{
    return center;
}

// setters
void Team::setPointGuard(Player p)
{   
    pointGuard = p;
}

void Team::setShootingGuard(Player p)
{
    shootingGuard = p;
}

void Team::setSmallForward(Player p)
{
    smallForward = p;
}

void Team::setPowerForward(Player p)
{
    powerForward = p;
}

void Team::setCenter(Player p)
{
    center = p;
}

/********************************************************************* 
** Description: calculate total points for the team
*********************************************************************/
int Team::totalPoints()
{
    return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
}