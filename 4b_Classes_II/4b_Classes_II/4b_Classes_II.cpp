// 4b_Classes_II.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class CVector
{
public:
	int x, y;
	CVector() {};
	CVector(int a, int b) : x(a), y(b) {}
	CVector operator+ (const CVector param);
	CVector operator= (const CVector &param);
};

CVector CVector::operator+ (const CVector param)
{
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

CVector CVector::operator= (const CVector &param)
{
	x = param.x;
	y = param.y;
	return *this;
}

class Dummy
{
public:
	bool isItMe(Dummy &param);
};

bool Dummy::isItMe(Dummy &param)
{
	if (&param == this) return true;
	else return false;
}

class DummyStatic
{
public:
	static int n;
	DummyStatic() { n++; }
};

int DummyStatic::n = 0;

int main()
{
	CVector foo(3, 1);
	CVector bar(1, 2);
	CVector result;
	result = foo + bar;
	std::cout << result.x << ", " << result.y << '\n';

	Dummy a;
	Dummy * b = &a;
	if (b->isItMe(a))
	{
		std::cout << "Yes, &a is b\n";
	}

	DummyStatic c;
	DummyStatic d[5];
	std::cout << c.n << '\n';
	DummyStatic * e = new DummyStatic;
	std::cout << DummyStatic::n << '\n';
	delete e;
}