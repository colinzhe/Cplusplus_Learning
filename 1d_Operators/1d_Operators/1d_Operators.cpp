// 1d_Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	int x, y, z, w;

	y = 2 + (x = 5);

	w = z = y;

	std::cout << std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(z) + " " + std::to_string(w) << std::endl;

	int price = 10;
	int units = 5;

	price *= units + 1;

	std::cout << std::to_string(price) << std::endl;

	x = 3;
	y = ++x;
	z = 3;
	w = z++;
	
	std::cout << std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(z) + " " + std::to_string(w) << std::endl;

	int c = (x > y) ? z : w;
	std::cout << std::to_string(c) << std::endl;
}