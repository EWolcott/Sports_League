#include <string>
#include <iostream>
#include "LeagueManager.h"
#include "Player.h"
#include "Soccer.h"
#include "Sport.h"
#include "Team.h"
#include <vector>
#include "UltimateFrisbee.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Division.h"
#include "League.h"
#include <limits>

//default constructor
League::League()
{
    sportType = nullptr;
}
League::League(Sport *sport)
{
    sportType = sport;
    
}

void League::displayDivisions()//display divisions in league
{
    std::cout << "West Lineup:" << std::endl;
    _divisions[0]->displayLineup();
    std::cout << "" << std::endl;
    std::cout << "East Lineup:" << std::endl;
    _divisions[1]->displayLineup();
}
void League::getSport()//return sport name for display purposes
{
    std::cout << sportType->getSportName() << std::endl;
}
void League::options(Team *t)//navigate options within league class
{
    int type;
    std::cout << "Press 1 to display your divisions" << std::endl;
    std::cout << "Press 2 to make a different league" << std::endl;
    std::cout << "Press 3 to edit West division teams" << std::endl;
    std::cout << "Press 4 to edit East division teams" << std::endl;
    std::cout << "Press 5 to exit" << std::endl;
    bool valid = false;
    std::cin >> type;//user input
    if (type != 1 && type != 2 && type != 3 && type != 4 && type != 5)
    {
        throw new std::invalid_argument(type + "is not a valid entry");//exception thrown if input invalid
    }
    switch (type)
    {
    case 1://display teams in divisions
        displayDivisions();
        break;
    case 2://exit and create a new league
        break;
    case 3://make changes to West division
        _divisions[0]->options(t);
        break;
    case 4://make changes to East division
        _divisions[1]->options(t);
        break;
    case 5://exit
        break;
        break;
    }
}
