// COP 3003: Final Project
// Trouble In Tiki : An action packed Text Adventuring game featuring some of your favorite students
// at FGCU. Are you ready to experience college?


//User will chose to start the game or not

//User will then get to Enter their name?

// Then story begins

// ** RING RING RING RING ** Wakes up in a panic.... (italicized) "hUh??..." Click Enter to Continue"
// Olivia is calling... Pick up the phone?? TRY TO MAKE A CHOICE BOARD RIGHT HERE
//1. Yes  2.No 

// YES BRANCH
//
//Hey whats up you dumb idiot, you on Campus yet? 
//Answers: "Why would I be on campus its sunday?" "School?"

//** Realizes its  the start of finals  week** "ITS ALREADY FINALS WEEK?!?!?! ILL BE THERE SOON"



// START OF PROJECT

#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier

#include "gameStart.h"  //gameStart Header File

using namespace std;

//Methods included

void Start();
void Game();
void gameStart();
void Intro();
void chooseClass();
void chapter1();
void quest();
void gameOver();

//using 2 inputs to understand what happens in what input
int userInput = 0;
int playerLocation = 0; //a numerical reference to the location of the player

int main()	//main function
{
	//tells screen to maximize
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_MAXIMIZE);

	Start();
	// The code below is to test ech methods out seperatly before linking them in the methods
	//Game();
	//Intro();
	//chooseClass();
	//chapter1();
	//quest();
	//gameOver:
	system("exit");
}

void Start() //intro and few title lines to game
{
	system("cls");
	system("color 2"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************************   Trouble In Tiki  ***************************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	Beep(80, 300); //beep is the sounds beeping first number is the tone hi or low and the second number is how long
	Beep(150, 200);
	Beep(250, 200);
	system("cls");
	system("color 2"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************   Welcome to Florida Gulf Coast Univeristy!  *****************************************************\n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";

	Beep(80, 300); //beep is the sounds beeping first number is the tone hi or low and the second number is how long
	Beep(150, 200);
	Beep(250, 200);
	system("cls");
	system("color 2"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "****************************************************   Let's see what college has in store for us!  *************************************************** \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";

	Beep(80, 300); //beep is the sounds beeping first number is the tone hi or low and the second number is how long
	Beep(150, 200);
	Beep(250, 200);
	system("pause");
	system("cls");
	Game(); //Method that goes into game
}


// END OF START

void Game() // Main menu in the game
{

	system("color 9"); //change the text color
	cout << "******************************************************************************************************************************************************* \n";
	cout << "*****************************************************************  Trouble In Tiki  ******************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************************************************************************************************* \n";
	cout << "******************************************************************  [1] New Game   ******************************************************************** \n";
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

/*
void gameStart() //first chapter headings
{
	cout << "******************************** \n";
	cout << "********    Chapter 1   ******** \n";
	cout << "*******                 ******** \n";
	cout << "*******                 ******** \n";
	cout << "*******                 ******** \n";
	cout << "*******                 ******** \n";
	cout << "*******                 ******** \n";
	cout << "******************************** \n";
	Beep(350, 100);
	Beep(200, 300);
	Beep(300, 200);
	Beep(200, 300);
	Beep(300, 200);

	system("pause");
	system("cls");
	Intro(); //method going into Into method 
}
/*
void Intro() //user input name
{
	system("color 3");
	cout << "Next person in line... Hey hun whats ur name? \n";
	string name;
	cout << "\n>t";
	cin >> name;

	cout << "Welcome " << name << " to FGCU! What are u planning to major in? \n\n";
	system("pause");
	system("cls");
	chooseClass();
}
void chooseClass() //use input for class they want to be
{
	int classChoice = 0;
	cout << "What is your playstyle? \n\n";
	cout << "[1] Warrior - balanced/ higher damage\n";
	cout << "[2] Wizard - Magic Specilist \n";
	cout << "[3] Mage - support \n";

	cout << "\n>\t";
	while (!(cin >> classChoice) || classChoice < 1 || classChoice > 3)
	{
		cout << "invalid variable. must be in range of asked choice. \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	switch (classChoice)
	{
	case 1:
		cout << "The warrior is born \n";
		break;
	case 2:
		cout << "wizard bewarre of this magiic \n";
		break;
	case 3:
		cout << "Mage vibes only ' \n";
		break;
	default:
		cout << "You are doing it wrong! Press either '1' or '2' or '3', nothing else \n";

	}
	system("pause");
	system("cls");
	chapter1(); //chapter 1 method
}
*/
void chapter1() //first chapter when game starts with user input numbr as directions
{
	cout << "You are aawake from your dram in hospital bed in a big city of nablasks. ";
	cout << " as you walk out you encounter \n";
	cout << "****************\n";
	cout << "[1] Go East \n";
	cout << "[2] Go West (dont do it) \n";
	cout << "[3] Yeah \n";
	cout << "************************\n";
	cout << "\n>\t";

	int playerLocation = 0;
	while (!(cin >> playerLocation) || playerLocation < 1 || playerLocation > 3)
	{
		cout << "invalid variable. must be in range of asked choice. \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	if (playerLocation == 1)  //East
	{
		system("cls");
		cout << "You go East and find yourself looking into long distance and see a car parked. \n";
		cout << "The car Parked has keys hanging around and your are not in the mppd tp walk. \n";
		cout << "********************************************* \n";
		cout << "[1] Pick up keys \n";
		cout << "[2] ignore the scene and keep heading East. \n";
		cout << "***************************\n";
		cout << "\n>\t";

		while (!(cin >> userInput) || userInput < 1 || userInput > 3)
		{
			cout << "invalid variable. must be  in range of asked choice. \n";
			cin.clear();
			cin.ignore(100, '\n');
		}

		userInput;
		if (userInput == 1)
		{
			cout << "You pick up the keys. \n";
			cout << "You durve towards the end of the road where you fight a monster and uncover the truth \n";
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
	else if (playerLocation == 2) //West
	{
		system("cls");
		cout << "You go into the city and buy  yourself some food and you are hungry you buy fast food \n";
		cout << "\nYou have spent your life not knowing the truth and after awhile you hvae died off in your ofl age \n";
		system("pause");
		system("cls");
		Beep(700, 1000);
		Beep(500, 2000);
		cout << "YOU HAVE FAILED\n";
		system("pause");
		system("cls");
		gameOver();
	}
	else if (playerLocation == 3) //Back Hospital
	{
		system("cls");
		cout << "You go back in the hospital and take your time thinking and going obe your memories but are unable to \n";
		Beep(400, 500); //Beep is the sound beeping first number is the tone hi or low and second number is hpw long the tone is
		Beep(600, 400);
		Beep(400, 400);
		cout << "You have chosen to go back to think about future steps\n";
		system("pause");
		system("cls");
		cout << "You are thinking about every moment of your life \n Please wait a moment as you think \n";
		Beep(400, 150); //beep is the sound beeing fiurst number is the tone hi or low and second number is how long the tone is
		Beep(300, 150);
		Beep(200, 150);

		system("pause");
		system("cls");
		chapter1();
	}
	else
	{
		cout << "You are doing it wrong! Press either '1' or '2', or '3' nothing else! \n";
	}
}
void quest() //quest for the user to input options and end of first chapter
{
	system("cls");
	cout << "You reach a valley with giant gate with the gaurd guarding the Gate.\n\n.";
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
		cout << "***********fin********************\n";
		cout << "***********fin********************\n";
		cout << "***********fin********************\n";
		Beep(523, 500);
		Beep(587, 500);
		Beep(659, 500);
	}

}







void gameOver() //Game Over Menu
{
	system("color e");
	cout << "*******************************************\n";
	cout << "*******************************************\n";
	cout << "*******************************************\n";
	cout << "*******************************************\n";
	cout << "*******************************************\n";
	Beep(300, 500);
	Beep(100, 500);
	system("pause");
	system("cls");
	Game();
}