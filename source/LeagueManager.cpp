#include <string>
#include <iostream>
#include "LeagueManager.h"
#include "League.h"
#include "Player.h"
#include "Soccer.h"
#include "Sport.h"
#include "Team.h"
#include <vector>
#include "UltimateFrisbee.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Division.h"
#include <limits>
#include <ctime>

//Base empty constructor
LeagueManager::LeagueManager() : LeagueManager(nullptr) {}
//constructor with parameters
LeagueManager::LeagueManager(Sport *sport)
{
    _sport = sport;
}

League *LeagueManager::buildLeague(Sport *sport)//take user-desired sport and automate the creation of a league
{
    int numPref;
    std::cout << "How many teams would you like on the West Division?" << std::endl;
    std::cin >> numPref;
    _divisions.push_back(buildDivision(numPref, "West Division"));
    std::cout << "How many teams would you like on the East Division?" << std::endl;
    std::cin >> numPref;
    _divisions.push_back(buildDivision(numPref, "East Division"));
    League *l = new League(sport, _divisions);
    return l;
}

Division *LeagueManager::buildDivision(int numOfTeams, std::string name)//automate the creation of a division for the league
{
    Division *division = new Division(_sport, name);
    Team *team;
    for (int i = 0; i < numOfTeams; i++)
    {
        std::string teamName = generateName("team");//make a name for the teams
        team = buildTeam(teamName);//create teams
        division->addTeam(team);//add team to division
    }
    return division;
}
Player *LeagueManager::buildPlayer(std::string playerName, int num)//automate creation of players
{
    Player *p = new Player(playerName, num);
    return p;
}
Team *LeagueManager::buildTeam(std::string teamName)//automate creation of teams
{
    Team *t = new Team(teamName, _sport);
    Player *p;
    for (int i = 0; i < _sport->getMin(); i++)
    {
        _playerNumber = (rand() % 99);
        std::string playerName = generateName("player");
        p = buildPlayer(playerName, _playerNumber);
        t->addPlayer(p);
    }
    return t;
}
std::string LeagueManager::generateName(std::string pref)//generate name for team and player based on vector strings
{
    std::vector<std::string> _firstNames;
    std::vector<std::string> _lastNames;
    std::vector<std::string> _firstTeamNames;
    std::vector<std::string> _lastTeamNames;
    _firstNames = {"Roy", "Wyatt", "Owen", "Herschel", "Bill", "Florencio", "Guy", "Renato", "Octavio", "Alexis",
                   "Gaylord", "Kyle", "Danny", "Aurelio", "Wilfredo", "Mel", "Rosario", "Clay", "Max", "Dino", "Elvin",
                   "Donnell", "Darrell", "Seymour", "Chong", "Lionel", "Noel", "Victor", "Marc", "Trevor", "Rusty", "Russ",
                   "Jonathan", "Chris", "Chauncey", "Emmitt", "Antony", "Deandre", "Anthony", "Raymond", "Eliseo", "Kris",
                   "Travis", "Felton", "Britt", "Pierre", "Patrick", "Mauro", "Erwin", "Gregorio"};
    _lastNames = {"Parrish", "Garner", "Blackwell", "Valentine", "Guerra", "Cox", "Kirk", "Clements", "Pratt",
                  "Coffey", "Romero", "Mayo", "Patel", "Page", "Oneal", "Bowen", "Chapman", "Buchanan", "Schmitt", "Mckee",
                  "Foster", "Collier", "Shea", "Velez", "Booth"};
    _firstTeamNames = {"muddled", "cultural", "overrated", "ludicrous", "illegal", "versed", "fanatical", "sleepy"
                                                                                                          "momentous",
                       "separate", "horrible", "graceful", "adamant", "full", "alluring", "complete", "gusty", "tangy",
                       "wet", "gifted", "talented", "cuddly", "peaceful", "hapless", "bright"};
    _lastTeamNames = {"Spur-winged Geese", "Kori Bustards", "Roseat Flamingos", "Wattled Cranes", "Western palm tanagers",
                      "Porcupines", "African Storks", "White Leopards", "Indian Bengal Vultures", "Moccasins", "Water Deer", "Spotted Raccoons",
                      "Common Steller's Sea Lions", "Bush Dogs", "Musk Oxen", "Ferruginous Hawks", "African lions", "Dragons",
                      "western bearded Egrets", "great Phalaropes", "grey Godwits", "hudsonian Mudskippers", "Macaques", "pig-tailed Bears",
                      "polar Waxbills"};

    if (pref == "player")
    {
        std::string first = _firstNames[rand() % 50];
        std::string last = _lastNames[rand() % 25];
        std::string name = first + " " + last;
        return name;
    }
    else if (pref == "team")
    {
        std::string first = _firstTeamNames[rand() % 25];
        std::string last = _lastTeamNames[rand() % 25];
        std::string name = first + " " + last;
        return name;
    }
    return "The No Names";
}
