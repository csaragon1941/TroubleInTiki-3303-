#pragma once
#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier

#include "gameStart.h"
#include "TroubleInTiki.cpp"

void Intro() //user input name
{
	system("color 3");
	std::cout << "Next person in line... Hey hun whats ur name? \n";
	std::string name;
	std::cout << "\n>t";
	std::cin >> name;

	std::cout << "Welcome " << name << " to FGCU! What are u planning to major in? \n\n";
	system("pause");
	system("cls");
	chooseClass();
}
void chooseClass() //use input for class they want to be
{
	int classChoice = 0;
	std::cout << "What is your playstyle? \n\n";
	std::cout << "[1] Warrior - balanced/ higher damage\n";
	std::cout << "[2] Wizard - Magic Specilist \n";
	std::cout << "[3] Mage - support \n";

	std::cout << "\n>\t";
	while (!(std::cin >> classChoice) || classChoice < 1 || classChoice > 3)
	{
		std::cout << "invalid variable. must be in range of asked choice. \n";
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
	switch (classChoice)
	{
	case 1:
		std::cout << "The warrior is born \n";
		break;
	case 2:
		std::cout << "wizard bewarre of this magiic \n";
		break;
	case 3:
		std::cout << "Mage vibes only ' \n";
		break;
	default:
		std::cout << "You are doing it wrong! Press either '1' or '2' or '3', nothing else \n";

	}
	system("pause");
	system("cls");
	chapter1(); //chapter 1 method
}