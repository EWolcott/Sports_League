#include "Sport.h"
#include "UltimateFrisbee.h"

//Base empty constructor

UltimateFrisbee::UltimateFrisbee()
{
    _season = "Summer";
    _minPlayers = 7;
    _maxplayers = 12;
    _sportName = "Ultimate Frisbee";
}

std::string UltimateFrisbee::getSeason()//return season
{
    return _season;
}
int UltimateFrisbee::getMin()//return min allowed
{
    return _minPlayers;
}
int UltimateFrisbee::getMax()//return max allowed
{
    return _maxplayers;
}
std::string UltimateFrisbee::getSportName()//return sport name
{
    return _sportName;
}