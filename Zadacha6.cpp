// Zadacha6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void BinaryConvert(int n)
{
	if (n == 0)
	{
		return;
	}
		BinaryConvert(n / 2);
		std::cout << n % 2;
}

int main()
{
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	BinaryConvert(num);
	std::cout << '\n';

    return 0; 

}

