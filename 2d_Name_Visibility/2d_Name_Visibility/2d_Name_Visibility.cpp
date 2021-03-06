// 2d_Name_Visibility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

namespace foo
{
	int value() { return 5; }
}

namespace bar
{
	const double pi = 3.14;
	double value() { return pi * 2; };
}

int main()
{
	int x = 10;
	int y = 20;

	{
		int x;
		x = 50;
		y = 50;
		std::cout << "Inner block:\n";
		std::cout << "x: " << x << '\n';
		std::cout << "y: " << y << '\n';
	}

	std::cout << "Outer block:\n";
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	std::cout << foo::value() << '\n';
	std::cout << bar::value() << '\n';
	std::cout << bar::pi << '\n';
	
	using namespace bar;
	std::cout << value() << '\n';
	std::cout << foo::value() << '\n';
	std::cout << pi << '\n';
}