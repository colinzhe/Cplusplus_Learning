#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	int a = 5;
	int b(3);
	int c{ 2 };
	int result;

	a = a + b;
	result = a - c;

	int foo = 5;
	auto bar = foo;

	std::cout << result << std::endl;
	std::cout << bar << std::endl;

	std::string mystring;
	mystring = "This is a string";
	std::cout << mystring << std::endl;

	return 0;
}