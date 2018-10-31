/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/31/2018
** Description: Constucter file for Player class. Contains functions for
** Player class. 
*********************************************************************/ 

#include "Player.hpp"
#include <string>
using std::string;

// default constructor
Player::Player()
{
    name = "";
    points = -100;
    rebounds = -100;
    assists = -100;
}

// constructor
Player::Player(string n, int p, int r, int a)
{
    name = n;
    points = p;
    rebounds = r;
    assists = a;
}

// getters
string Player::getName()
{
    return name;
}

int Player::getPoints()
{
    return points;
}

int Player::getRebounds()
{
    return rebounds;
}

int Player::getAssists()
{
    return assists;
}

// setters
void Player::setPoints(int p)
{
    points = p;
}

void Player::setRebounds(int r)
{
    rebounds = r;
}

void Player::setAssists(int a)
{
    assists = a;
}

/********************************************************************* 
** Description: calculate if p1 has more points than p2
*********************************************************************/
bool Player::hasMorePointsThan(Player otherPlayer)
{
    return points > otherPlayer.getPoints();
}