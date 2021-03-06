// 4e_Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class CPolygonVirtual
{
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a;
		height = b;
	}
	virtual int area()
	{
		return 0;
	}
};

class CRectangleVirtual : public CPolygonVirtual
{
public:
	int area()
	{
		return width * height;
	}
};

class CTriangleVirtual : public CPolygonVirtual
{
public:
	int area()
	{
		return width * height / 2;
	}
};

////////////////////
class CPolygonAbstract
{
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a;
		height = b;
	}
	virtual int area(void) = 0;
	void printArea()
	{
		std::cout << this->area() << '\n';
	}
};

class CRectangleAbstract : public CPolygonAbstract
{
public:
	int area(void)
	{
		return width * height;
	}
};

class CTriangleAbstract : public CPolygonAbstract
{
public:
	int area(void)
	{
		return width * height / 2;
	}
};

int main()
{
	CRectangleVirtual crect;
	CTriangleVirtual ctri;
	CPolygonVirtual * cpoly1 = &crect;
	CPolygonVirtual * cpoly2 = &ctri;
	CPolygonVirtual cpoly;
	CPolygonVirtual * cpoly3 = &cpoly;

	cpoly1->set_values(4, 5);
	cpoly2->set_values(4, 5);

	std::cout << crect.area() << '\n';
	std::cout << ctri.area() << '\n';

	std::cout << cpoly1->area() << '\n';
	std::cout << cpoly2->area() << '\n';
	std::cout << cpoly3->area() << '\n';

	CRectangleAbstract crectab;
	CTriangleAbstract ctriab;
	CPolygonAbstract * cpolyab1 = &crectab;
	CPolygonAbstract * cpolyab2 = &ctriab;

	cpolyab1->set_values(4, 5);
	cpolyab2->set_values(4, 5);
	std::cout << cpolyab1->area() << '\n';
	std::cout << cpolyab2->area() << '\n';
	cpolyab1->printArea();
	cpolyab2->printArea();
}