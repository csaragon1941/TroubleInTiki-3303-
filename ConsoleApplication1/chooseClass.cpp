#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier
#include <conio.h>		// Color Header
#include "Intro.h"
#include "Start.h"
#include "gameOver.h"
#include "Game.h"
#include "gameStart.h"
#include "chapter1.h"
#include "quest.h"

using namespace std;

void chooseClass() //use input for class they want to be
{
	int classChoice = 0;
	cout << "\n Pick your major \n\n";
	cout << "[1] Engineering - Able to hack systems easier \n";
	cout << "[2] Psychology - Outsmart your oponents using mind tricks \n";
	cout << "[3] Buisness - Use your charisma to sway oponents \n";

	cout << "\n>\t";
	while (!(cin >> classChoice) || classChoice < 1 || classChoice > 3)
	{
		cout << "Invalid variable.Press either '1' or '2' or '3', nothing else. \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	switch (classChoice)
	{
	case 1:
		cout << "May all the mental breakdowns show you strength in your knowledge... Good Luck \n";
		break;
	case 2:
		cout << "May all your knowledge be resourceful when the time comes... Good Luck  \n";
		break;
	case 3:
		cout << "May your charm inffluence those around you... Good Luck \n";
		break;
	default:
		cout << "Invalid variable.Press either '1' or '2' or '3', nothing else. \n";

	}

	system("pause");
	system("cls");
	chapter1(); //chapter 1 method
}
