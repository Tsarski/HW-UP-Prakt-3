// Zadacha3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 
void PrintAlpha(char c, int num)
{
	if (c > 'Z')
	{
		return;
	}
	std::cout << "Letter: " << c << " with ASCII code: " << num << std::endl;
	PrintAlpha(c + 1, num + 1);
	
}

int main()
{
	char alpha = 'A';
	int num = alpha;
	PrintAlpha(alpha, num);
	

    return 0;
}

