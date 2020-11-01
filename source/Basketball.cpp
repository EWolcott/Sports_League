#include "Sport.h"
#include "Basketball.h"

//Base empty constructor

Basketball::Basketball()
{
    _season = "Winter";
    _minPlayers = 7;
    _maxplayers = 10;
    _sportName = "Basketball";
}

std::string Basketball::getSeason()//return season
{
    return _season;
}
int Basketball::getMin()//return min allowed
{
    return _minPlayers;
}
int Basketball::getMax()//return max allowed
{
    return _maxplayers;
}
std::string Basketball::getSportName()//return sport name
{
    return _sportName;
}