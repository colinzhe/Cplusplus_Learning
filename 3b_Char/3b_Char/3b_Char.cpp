// 3b_Char.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	char myword[]{ 'H', 'e', 'l', 'l', 'o', '\0' };

	std::cout << myword << '\n';

	char mywordsimple[] = "Hello";

	std::cout << mywordsimple << '\n';
	std::cout << sizeof(mywordsimple) / sizeof(*mywordsimple) << '\n';
	
	char myNtcs[] = "some text";
	std::string mystr = myNtcs;
	std::cout << mystr << '\n';
	std::cout << mystr.c_str() << '\n';
	std::cout << mystr.data() << '\n';
}