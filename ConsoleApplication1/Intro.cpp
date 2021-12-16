
#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier
#include <conio.h>		// Color Header

#include "Start.h"
#include "gameOver.h"
#include "Game.h"
#include "gameStart.h"
#include "chooseClass.h"
#include "chapter1.h"
#include "quest.h"

using namespace std;


void Intro() // Orientation Day: User Enters Name, Story Begins
{
	
	system("color 7");

	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*************************************************************   Its Orientatiion Day!  **************************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	Beep(300, 200);
	Beep(200, 300);
	Beep(300, 200);
	system("pause");
	system("cls");

	system("color 6");
	cout << "******************************************************************************************************************************************************* \n";
	cout << "********************************* Chashier: *********************************************************************************************************** \n";
	cout << "******************************************* Hey hun, Welcome to FGCU! Whats your name?  *************************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";

	string name;
	cout << "\n>t ";
	cin >> name;

	cout << "\n" << name << ",what a great name! What are u planning to major in? \n\n";
	system("pause");
	chooseClass();
}