


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

void gameStart() //first chapter headings
{
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************************  Trouble In Tiki  ******************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*********************************************************************  CHAPTER 1:  ******************************************************************** \n";
	cout << "**************************************************************  The College Experience   ************************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";

	Beep(350, 100);
	Beep(200, 300);
	Beep(300, 200);
	Beep(200, 300);
	Beep(300, 200);

	system("pause");
	system("cls");
	Intro(); //method going into Into method 
}