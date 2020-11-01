#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Soccer.h"
#include "UltimateFrisbee.h"
#include "Team.h"
#include "Division.h"
#include "LeagueManager.h"
//startup options to clean up main function
void welcomescreen()
{
    std::cout << "Let's make some sports!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "What kind of league would you like?" << std::endl;
    int type;
    std::cout << "Press 1 for Baseball" << std::endl;
    std::cout << "Press 2 for Basketball" << std::endl;
    std::cout << "Press 3 for Soccer" << std::endl;
    std::cout << "Press 4 for Ultimate Frisbee" << std::endl;
    std::cin >> type;
    if (type != 1 && type != 2 && type != 3 && type != 4 && type != 5)
    {
        throw new std::invalid_argument(type + "is not a valid entry");//throw exception if input invalid
    }
    Sport *sport;
    switch (type)
    {
    case 1:
        sport = new Baseball();
        break;
    case 2:
        sport = new Basketball();
        break;
    case 3:
        sport = new Soccer();
        break;
    case 4:
        sport = new UltimateFrisbee();
        break;
        break;
    }
    League *league;
    LeagueManager *manager = new LeagueManager(sport);
    league = manager->buildLeague(sport);//use factory to entirely populate league
    std::cout << "Look at your beautiful new League!" << std::endl;
    league->displayDivisions();//show the end result
    std::cout << "" << std::endl;
    std::cout << "What would you like to do now?" << std::endl;
    //build a team if needed while we're here
    std::string tname = manager->generateName("team");
    Team *t = manager->buildTeam(tname);
    league->options(t);//go deeper into navigation options
}

int main()
{
    welcomescreen();//begin league creation and maintenance

    return 0;
}
