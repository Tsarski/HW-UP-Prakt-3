// Zadacha10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

int LengthOfNewString(const char* text, const char* what, const char* with)
{
	int timesOfWhat = 0;
	int lengthOfWhat = strlen(what);
	
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (strncmp(text + i, what, lengthOfWhat) == 0)
		{
			timesOfWhat++;
			i += lengthOfWhat;
		}
	}
	
	return strlen(text) + timesOfWhat * (strlen(with) - lengthOfWhat);
}
char* ReplaceAll(const char* text, const char* what, const char* with)
{
	int lengthOfNewString = LengthOfNewString(text, what, with);
	char* newString = new char[lengthOfNewString + 1];
	int lengthOfWhat = strlen(what);
	int lengthOfWith = strlen(with);
	
	for (int i = 0, k = 0; i < lengthOfNewString; ++i, ++k)
	{
		if (strncmp(text + k, what, lengthOfWhat) == 0)
		{
			for (int j = 0; j < lengthOfWith; ++j)
			{
				newString[i + j] = with[j];
			}
			i += lengthOfWith - 1;
			k += lengthOfWhat - 1;
		}
		
		else
		{
			newString[i] = text[k];
		}
	}
	
	newString[lengthOfNewString] = '\0';
	
	return newString;
}

int main()
{
	const char* str1 = "Tsarski shte si vzeme UP-to i shte cherpi mnogo. Tsarski e mnogo umen";
	const char* str2 = "Tsarski";
	const char* str3 = "Yavor";
	
	std::cout << strlen(str1) << '\n';
	std::cout << strlen(str2) << '\n';
	std::cout << strlen(str3) << '\n';
	std::cout << LengthOfNewString(str1, str2, str3) << '\n';
	
	char* newString = ReplaceAll(str1, str2, str3);
	
	std::cout << newString << '\n';
	
	delete[] newString;
	return 0;
}

	

