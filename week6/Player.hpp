/********************************************************************* 
** Author: Genevieve Conty
** Date: 10/31/2018
** Description: Header file for Player class. Contains definitions
** Player class. 
*********************************************************************/ 

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
using std::string;

class Player 
{

private: 
    string name;
    int points;
    int rebounds;
    int assists;

public: 
    // default constructor
    Player();

    // constructor
    Player(string n, int p, int r, int a);

    // getters
    string getName();
    int getPoints();
    int getRebounds();
    int getAssists();

    // setters
    void setPoints(int);
    void setRebounds(int);
    void setAssists(int);

    /********************************************************************* 
    ** Description: calculate if p1 has more points than p2
    *********************************************************************/
    bool hasMorePointsThan(Player otherPlayer);

};

#endif
