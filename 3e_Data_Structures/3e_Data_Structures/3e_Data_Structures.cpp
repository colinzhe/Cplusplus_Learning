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

struct friends_t
{
	std::string name;
	int age;
	movies_t fav_movie;
};

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

	/*std::cout << "Enter your favoriate title: ";
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
	}*/

	movies_t amovie;
	movies_t* pmovie = &amovie;

	std::cout << "Enter a movie title: ";
	std::getline(std::cin, pmovie->title);
	std::cout << "Enter year: ";
	std::getline(std::cin, mystr);
	std::stringstream(mystr) >> pmovie->year;

	std::cout << "You entered:\n";
	std::cout << pmovie->title << " (" << pmovie->year << ")\n";

	std::cout << "This is equivalent to:\n";
	std::cout << (*pmovie).title << " (" << (*pmovie).year << ")\n";

	friends_t afriend;
	friends_t* pfriend = &afriend;
	pmovie = &(afriend.fav_movie);

	afriend.name = "charlie";
	pfriend->age = 30;
	pfriend->fav_movie.title = "some movie";
	pmovie->year = 1995;

	std::cout << "Friend's info:\n";
	std::cout << afriend.name << ", " << afriend.age << ", " << afriend.fav_movie.title
		<< ", " << afriend.fav_movie.year;
}

void printmovie(movies_t movie)
{
	std::cout << movie.title;
	std::cout << " (" << movie.year << ")\n";
}