#include "League.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Soccer.h"
#include "Sport.h"
#include "UltimateFrisbee.h"
#include "Factory.h"
#include <string>

League* Factory::makeLeague(std::string sport_type) {
    League* l;
    if (sport_type == "Baseball") {
        l = new Baseball();
    }
    else if (sport_type == "Basketball") {
        return new Basketball();
    }
    else if (sport_type == "Soccer") {
        return new Soccer();
    }
    else if (sport_type == "Ultimate Frisbee") {
        return new UltimateFrisbee();
    }
    else {
        throw new std::invalid_argument(sport_type + " is not supported here");
    }
}