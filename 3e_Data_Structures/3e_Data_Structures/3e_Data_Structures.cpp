// 3e_Data_Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

struct product
{
	int weight;
	double price;
};

struct
{
	int weight;
	double price;
} apple, banana, melon;

struct movies_t
{
	std::string title;
	int year;
} mine, yours;

void printmovie(movies_t movie);

int main()
{
	product orange;
	orange.price = 2;
	orange.weight = 0.5;

	apple.price = 0.3;
	apple.weight = 0.2;

	std::string mystr;

	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;

	std::cout << "Enter your favoriate title: ";
	std::getline(std::cin, yours.title);
	std::cout << "Enter its year: ";
	std::getline(std::cin, mystr);
	std::stringstream(mystr) >> yours.year;

	std::cout << "My favorite movie is:\n ";
	printmovie(mine);
	std::cout << "Your favorite movie is:\n ";
	printmovie(yours);

	std::cout << "Enter some more movies";

	movies_t moremovies[3];

	for (int n = 0; n < 3; ++n)
	{
		std::cout << "Enter title: ";
		std::getline(std::cin, moremovies[n].title);
		std::cout << "Enter its year: ";
		std::getline(std::cin, mystr);
		std::stringstream(mystr) >> moremovies[n].year;
	}

	std::cout << "You entered these additional movies:\n";

	for (int n = 0; n < 3; ++n)
	{
		printmovie(moremovies[n]);
	}
}

void printmovie(movies_t movie)
{
	std::cout << movie.title;
	std::cout << " (" << movie.year << ")\n";
}