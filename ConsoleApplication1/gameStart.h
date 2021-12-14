#pragma once
#include <iostream>		// standard input/output library for console.
#include <string>		// handle strings 
#include <Windows.h>	//used to maximize command screen
#include <cstdlib>		//to be able to use the system it is needed as an identifier

#include "Intro.h"
#include "TroubleInTiki.cpp"

void Intro();

void gameStart() //first chapter headings
{
	std::cout << "******************************** \n";
	std::cout << "********    Chapter 1   ******** \n";
	std::cout << "******************************** \n";
	std::cout << "*******                 ******** \n";
	std::cout << "******************************** \n";
	std::cout << "*******                 ******** \n";
	std::cout << "******************************** \n";
	std::cout << "*******                 ******** \n";
	std::cout << "******************************** \n";
	std::cout << "*******                 ******** \n";
	std::cout << "******************************** \n";
	std::cout << "*******                 ******** \n";
	std::cout << "******************************** \n";
	Beep(350, 100);
	Beep(200, 300);
	Beep(300, 200);
	Beep(200, 300);
	Beep(300, 200);

	system("pause");
	system("cls");
	Intro(); //method going into Into method 
}