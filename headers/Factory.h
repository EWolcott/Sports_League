#ifndef FACTORY_H
#define FACTORY_H

#include "League.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Soccer.h"
#include "Sport.h"
#include "UltimateFrisbee.h"
#include <string>

class Factory {
public:
    static League* makeLeague(std::string sport_type);
};

#endif