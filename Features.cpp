#include "Features.h"
#include <iostream>
#include <fstream>



//This method return a ansi corlor formated string
//use lowercase red, green, blue for now
//stackoverflow i used https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c
//2 stackoverflow https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
std::string Features::Color(std::string FGcolor, std::string BGcolor, std::string stuffToSay)
{
	/*
	TODO: 
		add a enum and replace the if statments and temp values and bacbroungk and foreground 
		https://www.tutorialspoint.com/how-to-map-cplusplus-enums-to-strings#:~:text=Here%20we%20will%20see%20how,a%20string%20from%20that%20function.
	*/
	//setting to lowwercase
	//FGcolor = std::tolower(FGcolor);
	//BGcolor = std::tolower(BGcolor);

	//settings
	std::string ansiFG;
	std::string ansiBG;
	auto endTag = "\033[0m";
	
	

	//foreground 
	auto FGRed = "\x1B[31m", FGGreen = "\x1B[32m", FGBlue = "\x1B[34m";
	
	//auto FGRed = "\x1B[31m";
	//auto FGGreen = "\x1B[32m";
	//auto FGBlue = "\x1B[34m";

	//background
	//not working currently
	auto BGRed = 41;
	auto BGGreen = 42;
	auto BGBlue = 104;
	auto BGBlack = 40;
	
	//Checking what foreground color the user whats
	if (FGcolor == "red")
	{
		ansiFG = FGRed;
	}
	if (FGcolor == "green")
	{
		ansiFG = FGGreen;
	}
	if (FGcolor == "blue")
	{
		ansiFG = BGBlue;
	}
	//Checking what background color the user whats
	if (BGcolor == "red")
	{
		ansiBG = BGRed;
	}
	if (BGcolor == "green")
	{
		ansiBG = BGGreen;
	}
	if (BGcolor == "blue")
	{
		ansiBG = BGBlue;
	}

	//return the formatted string
	std::string output = ansiFG + stuffToSay + endTag;
	//std::cout << "\n\n\n" << FGRed << "this shoud be colored red" << endTag << std::endl;

	return output;

}

void Features::saveToFile(std::string nameOfFile, std::string stuffToWriteToFile)
{
	std::ofstream myfile;
	myfile.open(nameOfFile);
	myfile << stuffToWriteToFile;
	myfile.close();
}
