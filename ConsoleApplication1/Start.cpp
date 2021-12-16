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


void Start() //intro and few title lines to game
{
	system("cls");
	system("color 2"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************************   Trouble In Tiki  ***************************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	Beep(80, 700); //beep is the sounds beeping first number is the tone hi or low and the second number is how long
	Beep(150, 600);
	Beep(250, 600);
	system("cls");
	system("color 2"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************   Welcome to Florida Gulf Coast Univeristy!  *****************************************************\n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";

	Beep(80, 700); //beep is the sounds beeping first number is the tone hi or low and the second number is how long
	Beep(150, 600);
	Beep(250, 600);
	system("cls");
	system("color 2"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "****************************************************   Let's see what college has in store for us!  *************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";

	Beep(80, 700); //beep is the sounds beeping first number is the tone hi or low and the second number is how long
	Beep(150, 600);
	Beep(250, 600);
	system("pause");
	system("cls");
	Game(); //Method that goes into game
}
