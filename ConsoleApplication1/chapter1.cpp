
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
#include "quest.h"


using namespace std;



void chapter1() //FIRST CHAPTER WHEN THE GAME STARTS
{
	
	string name;
	int userInput;

	system("color 7");
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*********************************  Fast Foward Two Months.. ******************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	Beep(300, 200);
	Beep(200, 300);
	Beep(300, 200);

	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************  Nicole is one of your best friends from New York that   *************************************************** \n";
	cout << "******************************************              came to college with you!               ******************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	system("pause");
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************  You arranged to have dinner with her after midterms to  *************************************************** \n";
	cout << "***********************************************     grab a couple of drinks and catch up!    ****************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	system("cls");

	system("color C");
	cout << "******************************************************************************************************************************************************* \n";
	cout << "********************************* Nicole: ************************************************************************************************************* \n";
	cout << "******************************************* Hey";
	cout << name << ", where did you want grab dinner?  ******************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "\n";
	cout << "[1] Tiki Bar \n";
	cout << "[2] Sushi \n";
	cout << "[3] Chik-Fil-A\n";
	cout << "************************\n";
	cout << "\n>\t";


	int playerLocation = 0;
	while (!(cin >> playerLocation) || playerLocation < 1 || playerLocation > 3)
	{
		cout << "Invalid variable.Press either '1' or '2' or '3', nothing else. \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	if (playerLocation == 1)  //Tiki Bar
	{
		
		string name;

		system("cls");
		system("color C");
		cout << "******************************************************************************************************************************************************* \n";
		cout << "********************************* Nicole: ************************************************************************************************************* \n";
		cout << "****************************************  Sounds good,I'll drive!  ************************************************************************************ \n";
		cout << "******************************************************************************************************************************************************* \n";

		system("pause");

		cout << "********************************************* \n";
		cout << "A very smooth ride to Tiki until... \n";
		cout << "********************************************* \n";

		Beep(100, 200);
		system("pause");
		cout << "*********************************************\n";
		cout << "POP!";
		cout << "\n********************************************* \n\n\n";

		cout << "******************************************************************************************************************************************************* \n";
		cout << "*****************************" << name << ":*********************************************************************************************************** \n";
		cout << "*****************************************  What was that?  ******************************************************************************************** \n";
		cout << "******************************************************************************************************************************************************* \n";

		cout << "********************************************* \n";
		cout << "Nicole pulls off to the side...\n";
		cout << "********************************************* \n";
		Beep(100, 200);

		cout << "********************************************* \n";
		cout << "What do you do?";
		cout << "********************************************* \n";
		cout << "[1] Go outside and see what happened \n";
		cout << "[2] Ignore it for now, then check it out when you get to Tiki. \n";
		cout << "********************************************* \n";
		cout << "\n>\t";

		while (!(cin >> userInput) || userInput < 1 || userInput > 3)
		{
			cout << "Invalid variable.Press either '1' or '2' or '3', nothing else. \n";
			cin.clear();
			cin.ignore(100, '\n');
		}

		userInput;
		if (userInput == 1)
		{
			cout << "********************************************* \n";
			cout << "You go check out the scene outside. \n";
			cout << "********************************************* \n";
			system("pause");
			cout << "********************************************* \n";
			cout << "While inspecting the car, you realize you are in the middle of San Carlos Park.\n";
			cout << "********************************************* \n";
			system("pause");
			system("cls");
			cout << "Your quest begins here \n\n";
			quest();

		}

		else
		{
			cout << "1: You keep wlaking and exaust yourseld and end up back to hospital \n";
			chapter1();
		}
	}

	else if (playerLocation == 2) //Sushi
	{
		system("cls");
		cout << "******************************************************************************************************************************************************* \n";
		cout << "********************************* Nicole: ************************************************************************************************************* \n";
		cout << "****************************************  Dude, I'm allergic to sushi..  ****************************************************************************** \n";
		cout << "******************************************************************************************************************************************************* \n";

		system("pause");
		system("cls");
		Beep(700, 1000);
		Beep(500, 2000);
		cout << "YOU HAVE FAILED\n";
		system("pause");
		system("cls");
		gameOver();
	}

	else if (playerLocation == 3) //Chik-Fil-A
	{
		system("cls");
		cout << "******************************************************************************************************************************************************* \n";
		cout << "********************************* Nicole: ************************************************************************************************************* \n";
		cout << "****************************************  Fantastic, I could always gobble up some Chik... ************************************************************ \n";
		cout << "******************************************************************************************************************************************************* \n";

		Beep(400, 700); //Beep is the sound beeping first number is the tone hi or low and second number is hpw long the tone is
		Beep(600, 700);
		Beep(400, 400);
		system("pause");
		system("cls");

		cout << "******************************************************************************************************************************************************* \n";
		cout << "********************************* Nicole: ************************************************************************************************************* \n";
		cout << "****************************************  Oh My God.. We forgot that it's Sunday..  ******************************************************************* \n";
		cout << "******************************************************************************************************************************************************* \n";
		system("pause");
		system("cls");
		cout << "******************************************************************************************************************************************************* \n";
		cout << "********************************* Nicole: ************************************************************************************************************* \n";
		cout << "****************************************  Looks like we are going to Tiki Bar  ************************************************************************ \n";
		cout << "******************************************************************************************************************************************************* \n";
		Beep(400, 150); //beep is the sound beeing fiurst number is the tone hi or low and second number is how long the tone is
		Beep(300, 150);
		Beep(200, 150);

		system("pause");
		system("cls");
		quest();
	}
	else
	{
		cout << "You are doing it wrong! Press either '1' or '2', or '3' nothing else! \n";
	}
}