// 1e_Basic_IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::cout << "This " << " is a " << "single C++ statement." << std::endl;

	int i = 5;

	std::cout << "Variable i is equal to " << i << std::endl;

	int j, k;

	std::cin >> j >> k;

	std::cout << j << " " << k << std::endl;

	std::string mystring;

	std::cout << "Type a string: ";
	std::cin.ignore();
	std::getline(std::cin, mystring);

	std::cout << mystring << std::endl;
}