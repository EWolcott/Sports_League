#ifndef LEAGUE_H
#define LEAGUE_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Soccer.h"
#include "UltimateFrisbee.h"
#include "LeagueManager.h"
#include "Division.h"
#include "Player.h"
#include "Team.h"
//league class
class League
{
public:
    std::vector<Division *> _divisions;//track divisions
    Sport *sportType; //track sport type

    //Base empty constructor
    League();
    //constructor with parameters
    League(Sport *sport);

    void displayDivisions();//print division info
    void getSport();//print sport type
    void options(Team *t);//display options within league class
};

#endif