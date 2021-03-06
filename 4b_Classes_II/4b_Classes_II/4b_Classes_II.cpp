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

class MyClassConst
{
	int x;
public:
	MyClassConst(int val) : x(val) {}
	const int &get() const { return x; }
	int &get() { return x; }
};

void print(const MyClassConst &arg)
{
	std::cout << arg.get() << '\n';
}

template <class T>
class Mypair
{
	T a, b;
public:
	Mypair(T first, T second)
	{
		a = first;
		b = second;
	}
	T getmax();
};

template <class T>
T Mypair<T>::getmax()
{
	return (a > b ? a : b);
}

template <class T>
class MyContainer
{
	T element;
public:
	MyContainer(T arg)
	{
		element = arg;
	}
	T increase()
	{
		return ++element;
	}
};

template <>
class MyContainer <char>
{
	char element;
public:
	MyContainer(char arg)
	{
		element = arg;
	}
	char uppercase()
	{
		if ((element >= 'a') && (element <= 'z'))
		{
			element += 'A' - 'a';
			return element;
		}
	}
};

int main()
{
	CVector foo(3, 1);
	CVector bar(1, 2);
	CVector result;
	result = foo + bar;
	std::cout << result.x << ", " << result.y << '\n';

	Dummy a;
	Dummy * b = &a;
	if (b->isItMe(a)) // ???
	{
		std::cout << "Yes, &a is b\n";
	}

	DummyStatic c;
	DummyStatic d[5];
	std::cout << c.n << '\n';
	DummyStatic * e = new DummyStatic;
	std::cout << DummyStatic::n << '\n';
	delete e;

	MyClassConst far(10);
	const MyClassConst faz(20);
	print(far);
	print(faz);

	far.get() = 15; // ???
	
	std::cout << far.get() << '\n';
	std::cout << faz.get() << '\n';

	Mypair <int> myObject(100, 75);
	std::cout << myObject.getmax() << '\n';

	MyContainer<int> myInt(7);
	MyContainer<char> myChar('j');
	std::cout << myInt.increase() << '\n';
	std::cout << myChar.uppercase() << '\n';
}