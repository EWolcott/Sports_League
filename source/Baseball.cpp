#include "Sport.h"
#include "Baseball.h"

//Base empty constructor

Baseball::Baseball()
{
    _season = "Summer";
    _minPlayers = 9;
    _maxplayers = 15;
    _sportName = "Baseball";
}

std::string Baseball::getSeason()//return season
{
    return _season;
}
int Baseball::getMin()//return min allowed
{
    return _minPlayers;
}
int Baseball::getMax()//return max allowed
{
    return _maxplayers;
}
std::string Baseball::getSportName()//return sport name
{
    return _sportName;
}