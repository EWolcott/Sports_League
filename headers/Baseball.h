#ifndef BASEBALL_H
#define BASEBALL_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Sport.h"
//baseball class
class Baseball : public Sport
{
public:
    std::string _season;//track season
    int _minPlayers;//track min allowed
    int _maxplayers;//track max allowed
    std::string _sportName;//track sport name

    //Base empty constructor
    Baseball();

    std::string getSeason();//return season
    int getMin();//return min allowed
    int getMax();//return max allowed
    std::string getSportName();//return sport name
};

#endif