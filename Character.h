#pragma once
#include "GameStructure.h"
#include <string>


class Character : public GameStructure
{
//things that can be called publicly
public:
    //setters
    void SetName(std::string name);
    void SetHealth(int damage);
    void SetColor(std::string WantedColor);

    //getters
    std::string GetName();
    int GetHealth();
    auto GetColor();


    
    void DisplayStats();
    void Talk(std::string stuffToSay);
    void Talk(std::string name, std::string stuffToSay);
    void Help();
    void attack(int HP);

private:
    //initialize health to 0 by default.
    int Health;
    std::string Name;
    std::string color;


    //nice to add

};

