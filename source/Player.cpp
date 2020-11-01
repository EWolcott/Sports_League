#include "Player.h"

//Base empty constructor
Player::Player() : Player("Free Position", 0) {}
//constructor with parameters
Player::Player(std::string name, int number)
{
    _name = name;
    _number = number;
}

std::string Player::getName()//return name
{ //return player name
    return _name;
}
int Player::getNumber()//return number
{ //return player number
    return _number;
}

void Player::toString()//display player name and number
{
    std::cout << _name << ", Number: " << _number << std::endl;
}