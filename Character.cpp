#include "Character.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Features.h"


//Setter methods

//this function sets the "Name" for the class
void Character::SetName(std::string name)
{
	std::cout << "\n";
	std::cout << "What is the " << name << "'s name ";
	std::cin >> Character::Name;
}

void Character::SetHealth(int damage)
{
	//a method that checks if health is less then 0 if it is then set it to 0
	if (Health - damage < 0)
	{
		Health = 0;
	}
	if (Health - damage > 0)
	{
		Health = Health - damage;
	}
	if (Health == 0 || damage == 100)
	{
		Health = damage;
	}
}

//only pick red, green, blue
void Character::SetColor(std::string WantedColor)
{
	color = WantedColor;
}

//-----------------------------------------------------------------------------------------------
//getter methods
std::string Character::GetName()
{
	return Name;
}

int Character::GetHealth()
{
	return Health;
}

auto Character::GetColor()
{
	return color;
}


//-----------------------------------------------------------------------------------------------
//functionality methods 

//this function displays the ststus of the class
void Character::DisplayStats()
{
	std::cout << Character::Name;
	std::cout << Character::Health;
}

//this function takes in a string and outputs it.
void Character::Talk(std::string stuffToSay)
{
	std::cout << stuffToSay<< std::endl;
}

void Character::Talk(std::string name, std::string stuffToSay)
{
	Features Colorized;
	std::string nameColorized = Colorized.Color(color, "black", name + ": ");
	std::cout <<  nameColorized;
	std::cout << stuffToSay << std::endl;
}

//this is the function that overrides Help()
void Character::Help()
{
	std::cout << "\nWhat do you need help with?" << "\nDo it yourself i dont care!";
}

void Character::attack(int HP)
{
	Health = Health - HP;
}

//-----------------------------------------------------------------------------------------------

