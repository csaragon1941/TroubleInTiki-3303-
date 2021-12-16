// COP 3003: Final Project
// Trouble In Tiki : An action packed Text Adventuring game featuring some of your favorite students
// at FGCU. Are you ready to experience college?


// START OF PROJECT

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
	Game();
	Intro();
	chooseClass();
	chapter1();
	quest();
	gameOver;
	system("exit");
}

