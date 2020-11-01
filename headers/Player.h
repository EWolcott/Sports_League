#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
#include "Player.h"
//PLayer class
class Player
{
public:
    int _number;//track number
    std::string _name;//track name

    //Base empty constructor
    Player();
    //constructor with parameters
    Player(std::string name, int number);

    std::string getName(); //return player name
    int getNumber();       //return player number
    void toString();       //display player info
};

#endif