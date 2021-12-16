
#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier
#include <conio.h>		// Color Header

#include "Intro.h"
#include "Start.h"
#include "gameOver.h"
#include "chapter1.h"
#include "gameStart.h"
#include "chooseClass.h"
#include "quest.h"

using namespace std;



void Game() // Main menu in the game
{
	int userInput;

	system("color 9"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************************  Trouble In Tiki  ******************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************  [1] New Game   ********************************************************************\n";
	cout << "******************************************************************  [2] Credits    ******************************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	Beep(500, 500);

	cout << "\n\n>\t";

	while (!(cin >> userInput) || userInput < 1 || userInput > 2)
	{
		cout << "\nInvalid Variable. Please chose from the list. \n";
		cin.clear();
		cin.ignore(100, '\n');
	}

	if (userInput == 1)
	{

		//Create New Game
		system("cls");
		gameStart(); // method going into gamestart

	}
	else
	{
		//Game over
		system("cls");
		gameOver();


	}
}