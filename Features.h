#pragma once
#include <string>

// This is a class that has game fetures like saving, setting a color and more
class Features
{
public:
	//setters
	
	//getters

	//Normal functions
	//this function uses ansi color codes to colorize text
	std::string Color(std::string FGcolor, std::string BGcolor, std::string stuffToSay);
	void saveToFile(std::string nameOfFile, std::string stuffToWriteToFile);
	


private:


};
