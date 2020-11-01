#ifndef DIVISION_H
#define DIVISION_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Baseball.h"
#include "Sport.h"
#include "Basketball.h"
#include "Player.h"
#include "Soccer.h"
#include "Team.h"
#include "UltimateFrisbee.h"
//division class
class Division
{
public:
    std::vector<Team *> _teams;//track teams in division
    Sport *_sportType;//track sport type
    std::string divName;//track name of division

    //Base empty constructor
    Division();
    //constructor with parameters
    Division(Sport *sportType, std::string name);

    std::vector<Team *> getTeams();//return vector of teams
    Sport *getSport();//return sport type
    void displayLineup();//display team lineup
    void addTeam(Team *t);//add a team to division
    void removeTeam(Team *t);//remove a team from division
    void options(Team *t);//print options within division class
    void teamoptions(Team *t);//print option within team class
};

#endif