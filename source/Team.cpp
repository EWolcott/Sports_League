#include "Team.h"

//Base empty constructor
Team::Team() : Team("", nullptr) {}
//constructor with parameters
Team::Team(std::string teamName, Sport *sportType)
{
    _teamName = teamName;
    _sportType = sportType;
}

void Team::displayRoster()//print players on team
{
    for (int i = 0; i < _players.size(); i++)
    {
        _players[i]->toString();
    }
}
Sport *Team::getSportType()//return sport type
{
    return _sportType;
}
std::string Team::getTeamName()//return team name
{
    return _teamName;
}
void Team::addPlayer(Player *p)//add player to team
{
    _players.push_back(p);
}
void Team::removePlayer(Player *p)//remove player from team
{
    for (int i = 0; i < _players.size(); i++)
    {
        if (_players[i] == p)
        {
            delete _players[i];
            _players.erase(_players.begin() + i);
            return;
        }
    }
    return;
}
std::vector<Player *> Team::getPlayers()//return container of players
{
    return _players;
}