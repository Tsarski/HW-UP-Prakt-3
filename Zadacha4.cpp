// Zadacha4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

int CharCount(char* words)       //ne e gotova
{
	int count = 0, i=0, varcount=0;
	while (words[i] != '\0')
	{
		if ((words[i] >= 'a' && words[i] <= 'z') || (words[i] >= 'A' && words[i] <= 'Z'))
		{
			count++;
		}
		if (words[i] == ' ')
		{
			varcount = count;
			count = 0;
		}
		i++;
	}
	if (count >= varcount)
	{
		return count;
	}
	else
	{
		return varcount;
	}
}

int main()
{
	char words[1000];
		
	std::cout << "Enter two words with 10-20 symbols: ";
	std::cin.getline(words, 999);
	
	std::cout << "Number of symbols in the longest word: " << CharCount(words) << std::endl;
	return 0;
}

