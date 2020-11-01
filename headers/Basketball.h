#ifndef BASKETBALL_H
#define BASKETBALL_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
//basketball class
class Basketball : public Sport
{
public:
    std::string _season;//track season
    int _minPlayers;//track min allowed
    int _maxplayers;//track max allowed
    std::string _sportName;//track sport name

    //Base empty constructor
    Basketball();

    std::string getSeason();//return season
    int getMin();//return min allowed
    int getMax();//return max allowed
    std::string getSportName();//return sport name
};

#endif