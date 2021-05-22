#include <iostream>
#include <stdlib.h>
#include <conio.h>

// included files
#include "Ninja.h"
#include "Pirate.h"

// Prototype functions
void DisplayIntro();
int RNG();
Pirate initPirates();
Ninja initNinjas();


int main() 
{
	std::cout << "\n\n\n\n";
	DisplayIntro();
	
	Pirate pirate1 = initPirates();
	Ninja ninja1 = initNinjas();
	
	//returning a random number in range 
	return rand() % 101 + 1;
}

void DisplayIntro()
{
	std::cout << "\n\nWelcome to Pirates vs Ninjas";
	std::cout << "\nPrepare for war!!!!" << std::endl;
	//std::cout << "\033[1;31m bold red text \033[0m\n";
	//std::cout << "\u001b[31;1m Hello \033[0m\n";
}

int RNG()
{
	return rand() % 101 + 1;
}

Ninja initNinjas()
{
	//calling the Pirate class
	Ninja setNinja;
	//caling the set name class
	setNinja.SetName("ninjas");
	//welcome message
	std::cout << "Welcome ninja " << setNinja.GetName() << "\n";

	std::string GetNinName = setNinja.GetName();
	setNinja.SetHealth(100);
	std::cout << "Health: " << setNinja.GetHealth() << "\n";
	setNinja.Talk(GetNinName, "woosh!");
	setNinja.SetColor("red");
	setNinja.Talk(setNinja.GetName(), " how are you going");
	setNinja.Talk(setNinja.GetName(), " Im doing good as a cool ninja");
	std::cout << setNinja.GetHealth();
	setNinja.attack(10);
	std::cout << setNinja.GetHealth();
	setNinja.Talk(" ouch that hurt!");
	return setNinja;
}

Pirate initPirates()
{
	//calling the Pirate class
	Pirate setPirate;
	//caling the set name class
	setPirate.SetName("Pirate");
	//welcome message
	std::cout << "Welcome Pirate " << setPirate.GetName() << "\n";
	//using the UseSword
	setPirate.UseSword();
	//using the talk function
	setPirate.Talk("ARRRRR IN A DIRTY PIRATE!");
	//std::cout << setPirate.DisplayStats();

	std::string GetNinName = setPirate.GetName();
	setPirate.SetHealth(100);
	std::cout << "Health: " << setPirate.GetHealth() << "\n";

	setPirate.Talk(GetNinName, "woosh!");
	setPirate.SetColor("green");
	setPirate.Talk(setPirate.GetName(), "As a stinky pirate i think im doing okay for myself");
	setPirate.Talk(setPirate.GetName(), "I stoped drinking");
	setPirate.attack(10);
	std::cout << setPirate.GetHealth();
	setPirate.Talk(" ouch that hurt!");
	return setPirate;
}
