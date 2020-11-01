#include "Sport.h"
#include "Soccer.h"

//Base empty constructor

Soccer::Soccer()
{
    _season = "Fall";
    _minPlayers = 11;
    _maxplayers = 18;
    _sportName = "Soccer";
}

std::string Soccer::getSeason()//return season
{
    return _season;
}
int Soccer::getMin()//return min allowed
{
    return _minPlayers;
}
int Soccer::getMax()//return max allowed
{
    return _maxplayers;
}
std::string Soccer::getSportName()//return sport name
{
    return _sportName;
}