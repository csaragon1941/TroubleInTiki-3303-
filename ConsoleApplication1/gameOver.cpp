

#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier
#include <conio.h>		// Color Header
#include "Intro.h"
#include "Start.h"

#include "Game.h"
#include "gameStart.h"
#include "chooseClass.h"
#include "chapter1.h"
#include "quest.h"

using namespace std;


void gameOver() //Game Over Menu
{
	system("color e");
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************************  Trouble In Tiki  ******************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "***********************************************************   Created By: Christina Aragon   ********************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "***************************************************************    Hope You Enjoyed!    ********************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	Beep(300, 500);
	Beep(100, 500);
	system("pause");
	system("cls");
	Game();
}