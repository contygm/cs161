/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/31/2018
** Description: Header file for Team class. Contains definitions
** Team class. 
*********************************************************************/ 

#ifndef TEAM_HPP
#define TEAM_HPP
#include "Player.hpp"

class Team
{
private:
    Player pointGuard;
    Player shootingGuard;
    Player smallForward;
    Player powerForward;
    Player center;

public:

    // constructor
    Team(Player p1, Player p2, Player p3, Player p4, Player p5);

    // getters
    Player getPointGuard();
    Player getShootingGuard();
    Player getSmallForward();
    Player getPowerForward();
    Player getCenter();

    // setters
    void setPointGuard(Player p);
    void setShootingGuard(Player p);
    void setSmallForward(Player p);
    void setPowerForward(Player p);
    void setCenter(Player p);


    /********************************************************************* 
    ** Description: calculate total points
    *********************************************************************/
    int totalPoints();
};

#endif
