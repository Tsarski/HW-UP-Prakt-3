// Zadacha5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

void TCheck(char* symbols)
{
	for (int i=0; i < (char)strlen(symbols); i++)
	{
		if (symbols[i] == 'T')
		{
			std::cout << "There is a T in position: " << i << '\n';
		}
	}
}

int main()
{
	char symbols[1000];

	do
	{
		std::cout << "Enter symbols: ";
		std::cin >> symbols;
	} while ((char)strlen(symbols) >1000 );

	TCheck(symbols);

	return 0;
}


