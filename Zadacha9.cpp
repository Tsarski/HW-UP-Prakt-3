// Zadacha9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <sstream>
#include <string>

void SymbolCount(char *arr) // za doopravqne 
{
				
	int i = 0;
	int count = 0;
	int j = 0;
	bool flag = true;
	while (arr[i] != '\0')
	{
		flag = true;
		for (int t = 0; t < i; t++)
		{
			if (arr[i] == arr[t])
			{
				flag = false;
			}
		}
		if (flag == true)
		{
			while (arr[j] != '\0')
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
				j++;
			}
			std::cout << "'" << arr[i] << "' : " << count << ' ';
			j = 0;
			count = 0;
		}
		i++;
	}
}


int main()
{
	char sentence[1002];

	std::cout << "Enter sentence below 1000 symbols: ";
	std::cin.getline(sentence, 1001);
	
	SymbolCount(sentence);
	
	return 0;
}

