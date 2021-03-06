// 3d_Dynamic_Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int * foo;
	foo = new int[5];

	int * bar;
	bar = new (std::nothrow) int[5];
	if (bar == nullptr)
	{
		std::cout << "Error assigning memory for bar" << std::endl;
	}

	int i, n;
	int * p;
	std::cout << "How many numbers would you like to store? ";
	std::cin >> i;
	p = new (std::nothrow) int[i];

	if (p == nullptr)
	{
		std::cout << "Error assignment memory for p" << '\n';
		return EXIT_FAILURE;
	}

	for (n = 0; n < i; ++n)
	{
		std::cout << "Enter number[" << n << "]: ";
		std::cin >> p[n];
	}

	std::cout << "You entered: ";
	for (n = 0; n < i; ++n)
	{
		std::cout << p[n] << ", ";
	}

	delete[] p;
}