// Zadacha1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

char LetterChange(char letter)
{
	char capletter = (letter - 32);

	return capletter;
}

int main()
{
	char sletter;
	do
	{
		std::cout << "Enter a small letter: ";
		std::cin >> sletter;
	} while (sletter < 97 || sletter>122);

	std::cout << "Capital letter of " <<'"'<< sletter <<'"'<< " is: " << LetterChange(sletter) << '\n';

    return 0;
}

