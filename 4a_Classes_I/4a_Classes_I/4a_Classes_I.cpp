// 4a_Classes_I.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Rectangle
{
	int width, height;

public:
	void set_values(int, int);
	/*void set_values(int w, int h)
	{
		this->width = w;
		this->height = h;
	}*/
	int area(void)
	{
		return (width * height);
	}
} rect;

void Rectangle::set_values(int w, int h)
{
	width = w;
	height = h;
}

int main()
{
	rect.set_values(5, 6);
	std::cout << rect.area() << '\n';
}