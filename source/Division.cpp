#include "Team.h"
#include "Division.h"
#include "LeagueManager.h"
//Base empty constructor
Division::Division() : Division(nullptr, "") {}
//constructor with parameters
Division::Division(Sport *sportType, std::string name)
{
    _sportType = sportType;
    divName = name;
}

std::vector<Team *> Division::getTeams()//return container of teams
{
    return _teams;
}
Sport *Division::getSport()//return sport type
{
    return _sportType;
}
void Division::displayLineup()//display collection of teams
{
    for (int i = 0; i < _teams.size(); i++)
    {
        std::cout << _teams[i]->getTeamName() << std::endl;
    }
}
void Division::addTeam(Team *t)//add team to collection
{
    _teams.push_back(t);
}
void Division::removeTeam(Team *t)//remove team from collection
{
    for (int i = 0; i < _teams.size(); i++)
    {
        if (_teams[i] == t)
        {
            delete _teams[i];
            _teams.erase(_teams.begin() + i);
            return;
        }
    }
    return;
}
void Division::options(Team *t)//navigate division class options
{
    int type;
    std::cout << "Press 1 to add a team to your divisions" << std::endl;
    std::cout << "Press 2 to remove a team from your division" << std::endl;
    std::cout << "Press 3 to manage the individual teams" << std::endl;
    std::cout << "Press 4 to exit" << std::endl;
    bool valid = false;
    std::cin >> type;//input from user
    if (type != 1 && type != 2 && type != 3 && type != 4)
    {
        throw new std::invalid_argument(type + "is not a valid entry");//exception thrown if invladi entry
    }
    switch (type)
    {
    case 1://add a team and print new lineup
        addTeam(t);
        displayLineup();
        break;
    case 2://remove a team and print new lineup
        std::cout << "Please choose one" << std::endl;
        for (int i = 0; i < _teams.size(); i++)
        {
            std::cout << i + 1 << ". " << _teams[i]->getTeamName() << std::endl;
        }
        std::cin >> type;
        removeTeam(_teams[type - 1]);
        displayLineup();
        break;
    case 3://delve deeper into team options
        std::cout << "Please choose one" << std::endl;
        for (int i = 0; i < _teams.size(); i++)
        {
            std::cout << i + 1 << ". " << _teams[i]->getTeamName() << std::endl;
        }
        std::cin >> type;
        teamoptions(_teams[type - 1]);
        break;
    case 4://exit
        break;
        break;
    }
}
void Division::teamoptions(Team *t)//navigation options within team class
{
    std::cout << "Here is the roster:" << std::endl;
    t->displayRoster();
    std::cout << "What would you like to do now:" << std::endl;
    int type;
    std::cout << "Press 1 to add a player to your team" << std::endl;
    std::cout << "Press 2 to remove a player from your team" << std::endl;
    std::cout << "Press 3 display the roster again" << std::endl;
    std::cout << "Press 4 to exit" << std::endl;
    bool valid = false;
    std::cin >> type;//user input
    if (type != 1 && type != 2 && type != 3 && type != 4)
    {
        throw new std::invalid_argument(type + "is not a valid entry");//exception thrown if invalid entry
    }
    LeagueManager *lm = new LeagueManager();
    std::string name = lm->generateName("player");//create a manager and player name for ease of construction
    Player *p;//track new player from factory
    switch (type)
    {
    case 1://add a player
        p = lm->buildPlayer(name, (rand() % 99));
        t->addPlayer(p);//add new player
        t->displayRoster();//print new roster
        break;
    case 2://remove a player
        std::cout << "Please choose one to remove" << std::endl;
        for (int i = 0; i < t->_players.size(); i++)
        {
            t->_players[i]->toString();
        }
        std::cin >> type;//user input
        t->removePlayer(t->_players[type - 1]);
        t->displayRoster();//display new roster
        break;
    case 3://display players on team
        t->displayRoster();
        break;
    case 4://exit
        break;
        break;
    }
}