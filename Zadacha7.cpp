// Zadacha7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


long MyPow(int num, int pow)
{
	if (pow == 0)
	{
		return 1;
	}
	if (num == 1)
	{
		return 1;
	}
	return num*MyPow(num, pow - 1);
}

int main()
{
    int num = 0, pow = 0;
	
	std::cout << "Enter real number: ";
	std::cin >> num;

	std::cout << "Enter... stepen: ";
	std::cin >> pow;
	std::cout << "Result = " << MyPow(num, pow) << '\n';
	
	return 0;
}

