// Zadacha8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int count = 0;
int Lenght(char* words)
{
	if (words[count] == '\0')
	{
		return count;
	}
	count++;
	Lenght(words);
}


int main()
{
	char*Sentence = "The answer should be 24.";
	std::cout <<"The number of symbols is: "<< Lenght(Sentence) << '\n';
	
	return 0;
}

