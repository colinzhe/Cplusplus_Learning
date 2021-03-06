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

class RectangleWithConstr
{
	int width, height;
public:
	RectangleWithConstr();
	RectangleWithConstr(int, int);
	int area() { return width * height; }
};

//RectangleWithConstr::RectangleWithConstr(int w, int h)
//{
//	width = w;
//	height = h;
//}

//RectangleWithConstr::RectangleWithConstr(int w, int h) : width(w)
//{
//	height = h;
//}

RectangleWithConstr::RectangleWithConstr(int w, int h) : width(w), height(h) {}

RectangleWithConstr::RectangleWithConstr()
{
	width = 2;
	height = 2;
}

class Circle
{
	double radius;
public:
	Circle(double r) : radius(r) {};
	double area() { return radius * radius * 3.14159265; };
};

class Cylinder
{
	Circle base;
	double height;
public:
	Cylinder(double r, double h) : base(r), height(h) {}
	double volume() { return base.area() * height; }
};

int main()
{
	rect.set_values(5, 6);
	std::cout << rect.area() << '\n';

	Rectangle rect2;
	rect2.set_values(3, 4);
	int rect2area = rect2.area();
	std::cout << rect2area << '\n';

	RectangleWithConstr rectwc(10, 10);
	RectangleWithConstr rectwc2(5, 5);
	RectangleWithConstr rectwc3;

	std::cout << rectwc.area() << '\n';
	std::cout << rectwc2.area() << '\n';
	std::cout << rectwc3.area() << '\n';

	RectangleWithConstr rectwc4{ 7, 7 };
	RectangleWithConstr rectwc5 = { 7, 9 };
	RectangleWithConstr rectwc6{};

	std::cout << rectwc4.area() << '\n';
	std::cout << rectwc5.area() << '\n';
	std::cout << rectwc6.area() << '\n';

	Cylinder cyl{ 10, 20 };

	std::cout << cyl.volume() << '\n';

	RectangleWithConstr * pfoo, * pbar, * pbaz;

	pfoo = &rectwc6;
	pbar = new RectangleWithConstr(4, 4);
	pbaz = new RectangleWithConstr[2]{ {2, 5}, {3, 6} };

	std::cout << "pfoo's area: " << pfoo->area() << "\n";
	std::cout << "*pfoo's area: " << (*pfoo).area() << "\n";
	std::cout << "pbar's area: " << pbar->area() << "\n";
	std::cout << "pbaz[0]'s area: " << pbaz[0].area() << "\n";
	std::cout << "pbaz[0]'s area: " << pbaz[1].area() << "\n";

	delete pbar;
	delete[] pbaz;
}