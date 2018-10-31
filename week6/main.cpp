
#include <iostream>
#include <string>
#include "Player.hpp"
#include "Team.hpp"
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {

    Player p1("Charlotte", 24, 10, 7);
    Player p2("Emily", 21, 13, 9);
    Player p3("Anne", 20, 10, 8);
    Player p4("Jane", 19, 10, 10);
    Player p5("Mary", 19, 11, 8);
    p5.setRebounds(12);

    Team team1(p1, p2, p3, p4, p5);

    Player p = team1.getShootingGuard();
    
    cout << p2.getName() << endl; // Emily
    cout << p1.hasMorePointsThan(p2) << endl; // true, 1
    cout << p5.hasMorePointsThan(p1) << endl; // false 0
    cout << p4.hasMorePointsThan(p5) << endl; // false 0
    cout << p5.getRebounds() << endl; // 12
    cout << team1.getPointGuard().getName() << endl; //Charlotte
    cout << team1.totalPoints() << endl; // 103

    team1.setPointGuard(p3);
    cout << team1.getPointGuard().getName() << endl; //Anne

    cout << team1.totalPoints() << endl; // 99

    return 0;
}