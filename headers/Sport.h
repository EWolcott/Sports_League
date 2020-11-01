#ifndef SPORT_H
#define SPORT_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Player.h"
//abstract sport class
class Sport
{
public:
    std::string _season;//track season
    int _minPlayers;//track min players
    int _maxplayers;//track max players
    std::string _sportName;//track sport name

    //Base empty constructor
    Sport();

    virtual std::string getSeason() = 0;//abstract season
    virtual int getMin() = 0;//abstract min
    virtual int getMax() = 0;//abstract max
    virtual std::string getSportName() = 0;//abstract sport name
};

#endif