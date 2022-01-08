#include <iostream>

class Player
{
	std::string name;
	char value;

public:
	Player();
	void setPlayer(std::string name, char value);
	std::string getPlayer();
};

Player::Player()
{
	name = "unknown";
}

void Player::setPlayer(std::string Inname, char Invalue)
{
	name = Inname;
	value = Invalue;
}

std::string Player::getPlayer()
{
	return name;
}