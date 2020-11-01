#ifndef SOCCER_H
#define SOCCER_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
//Soccer class
class Soccer : public Sport
{
public:
    std::string _season;//track season
    int _minPlayers;//track min players
    int _maxplayers;//track max players
    std::string _sportName;//track sport name

    //Base empty constructor
    Soccer();

    std::string getSeason();//return season
    int getMin();//return min allowed
    int getMax();//return max allowed
    std::string getSportName();//return sport name
};

#endif