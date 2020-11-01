#ifndef LEAGUEMANAGER_H
#define LEAGUEMANAGER_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Soccer.h"
#include "UltimateFrisbee.h"
#include "Division.h"
#include "Player.h"
#include "Team.h"
#include "League.h"
//league manager factory
class LeagueManager
{
public:
    int _playerNumber;
    int randomNumber;
    std::vector<Division *> _divisions;
    Sport *_sport;

    //Base empty constructor
    LeagueManager();
    //constructor with parameters
    LeagueManager(Sport *sport);

    League *buildLeague(Sport *sport);//accept user parameter and build a league
    Division *buildDivision(int num, std::string name);//autofill league with two divisions
    Player *buildPlayer(std::string playerName, int num); //autofill teams with players
    Team *buildTeam(std::string teamName);//autofill divisions with teams
    std::string generateName(std::string pref);//create random names for teams and players
};

#endif