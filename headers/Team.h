#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Soccer.h"
#include "UltimateFrisbee.h"
#include "Player.h"
//Team class
class Team
{
public:
    std::vector<Player *> _players;//track collection of players
    std::string _teamName;//track team name
    Sport *_sportType;//track sport type
    int _teamMax;//track team max

    //Base empty constructor
    Team();
    //constructor with parameters
    Team(std::string teamName, Sport *sportType);

    void displayRoster();//display players on team
    Sport *getSportType();//return sport type
    std::string getTeamName();//return team name
    void addPlayer(Player *);//add player to team
    void removePlayer(Player *);//remove player from team
    std::vector<Player *> getPlayers();//return collection of players
};

#endif