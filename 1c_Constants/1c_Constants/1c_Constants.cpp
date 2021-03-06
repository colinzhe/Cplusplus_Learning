// 1c_Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <typeinfo>
#include <string>
#define PI 3.14159

int main()
{
	signed int i = 5;
	signed long int j = 6000;
	unsigned short int k = 10;
	const double pi = 3.14;
	const char newline = '\n';

	i = 75u;
	j = 75lu;
	k = 1.6e-19;

	std::string mystring = "This is a string expressed \
in two lines\a";

	//std::string mystring = "This is a string expressed in two lines\a";

	std::cout << i << std::endl;
	std::cout << typeid(i).name() << std::endl;
	std::cout << j << std::endl;
	std::cout << typeid(j).name() << std::endl;
	std::cout << k << std::endl;
	std::cout << typeid(k).name() << std::endl;
	std::cout << mystring << std::endl;
	std::cout << std::to_string(pi) + newline;
	std::cout << std::to_string(PI) + newline;
}