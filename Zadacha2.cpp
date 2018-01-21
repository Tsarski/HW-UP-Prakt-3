// Zadacha2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void SymbolCount(char* symbols, int& sletters, int& capletters, int& numbers)
{
	for (int i = 0; symbols[i] != 0; i++)
	{
		if (symbols[i] >= '0' && symbols[i] <= '9')
		{
			numbers++;
		}
		else if (symbols[i] >= 'a' && symbols[i] <= 'z')
		{
			sletters++;
		}
		else if(symbols[i] >= 'A' && symbols[i] <= 'Z')
		{
			capletters++;
		}
	}
}

int main()
{
	char symbols[11];
	
	std::cout << "Enter 10 symbols: ";
	std::cin.getline(symbols, 11);
	
	int sletters = 0, capletters = 0, numbers = 0;
	
	SymbolCount(symbols, sletters, capletters, numbers);
	std::cout << "Number of capital letters: " << capletters << '\n';
	std::cout << "Number of small letters: " << sletters << '\n';
	std::cout << "Number of numbers: " << numbers << '\n';

return 0;
}

