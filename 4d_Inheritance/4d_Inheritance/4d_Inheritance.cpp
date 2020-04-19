// 4d_Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Square
{
	friend class Rectangle;
private:
	int side;
public:
	Square(int a) : side(a) {}
};

class Rectangle
{
	int width, height;
public:
	Rectangle() {}
	Rectangle(int x, int y) : width(x), height(y) {}
	int area() { return width * height; }
	friend Rectangle duplicate(const Rectangle&);
	void convert(Square a);
};

void Rectangle::convert(Square a)
{
	width = a.side;
	height = a.side;
}

Rectangle duplicate(const Rectangle &param)
{
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}

class CPolygon
{
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a;
		height = b;
	}
};

class CRectangle : public CPolygon
{
public:
	int area()
	{
		return width * height;
	}
};

class CTriangle : public CPolygon
{
public:
	int area()
	{
		return width * height / 2;
	}
};

int main()
{
	Rectangle foo;
	Rectangle bar(2, 3);
	foo = duplicate(bar);
	std::cout << foo.area() << '\n';

	Rectangle rect;
	Square sqr(4);
	rect.convert(sqr);
	std::cout << rect.area() << '\n';

	CRectangle crect;
	CTriangle ctri;
	crect.set_values(4, 5);
	ctri.set_values(4, 5);
	std::cout << "crect's area: " << crect.area() << '\n';
	std::cout << "ctri's area: " << ctri.area() << '\n';
}