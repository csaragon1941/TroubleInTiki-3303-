

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
#include "chooseClass.h"
#include "chapter1.h"
#include "quest.h"


using namespace std;


void quest() //quest for the user to input options and end of first chapter
{
	system("cls");
	cout << "********************************************* \n";
	cout << "You see a Park Rat headed towards you.. \n";
	cout << "********************************************* \n";
	cout << "What would like to do?\n";
	cout << "*********************************";
	cout << "1: Get the direction to find another route through the valley \n";
	cout << "2: Pay him to Let you through these gates through the valley to find your own path to uncover\n";

	cout << "\nEnter your choice: ";
	cout << "\n>\t";

	int path = 0;
	while (!(cin >> path) || path < 1 || path > 3)
	{
		cout << "invalid variable. must be in range of asked choice. \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	if (path == 1)
	{
		system("cls");
		cout << "\n You: What way to the next city? \n";
		cout << "Gaurd: Just follow the valley to the left. But beware of monsters \n\n";

		system("pause");
		system("cls");
		cout << "to be contiuned\n\n\n" << endl;
		system("color e");
		cout << "******************************************************************************************************************************************************* \n";
		cout << "*****************************************************************  Trouble In Tiki  ******************************************************************* \n";
		cout << "******************************************************************************************************************************************************* \n";
		cout << "******************************************************************************************************************************************************* \n";
		cout << "*********************************************************************  CHAPTER 1:  ******************************************************************** \n";
		cout << "**************************************************************  The College Experience   ************************************************************** \n";
		cout << "******************************************************************************************************************************************************* \n";
		cout << "******************************************************************************************************************************************************* \n";
		Beep(523, 500);
		Beep(587, 500);
		Beep(659, 500);
	}

}