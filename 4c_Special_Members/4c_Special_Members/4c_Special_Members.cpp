// 4c_Special_Members.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

class MyClassDeconst
{
	std::string * ptr;
public:
	MyClassDeconst() : ptr(new std::string) {}
	MyClassDeconst(const std::string &str) : ptr(new std::string(str)) {}
	~MyClassDeconst() { delete ptr; } // deconstructor
	const std::string &content() const { return *ptr; }
};

class MyClassCopy
{
	std::string * ptr;
public:
	MyClassCopy() : ptr(new std::string) {}
	MyClassCopy(const std::string &str) : ptr(new std::string(str)) {}
	~MyClassCopy()
	{
		if (ptr != NULL)
		{
			delete ptr;
			ptr = NULL;
		}
	}
	MyClassCopy(const MyClassCopy &x) : ptr(new std::string(x.content())) {} // copy constructor
	const std::string &content() const { return *ptr; }
	MyClassCopy& operator= (const MyClassCopy& x)
	{
		*ptr = x.content();
		return *this;
	}
};

int main()
{
	MyClassDeconst fbar("Example");

	std::cout << "fbar's content: " << fbar.content().c_str() << '\n';

	MyClassCopy fooz("Hello!");
	MyClassCopy fbarz = fooz;
	fooz.~MyClassCopy();

	std::cout << "fbarz's content: " << fbarz.content() << '\n';

	MyClassCopy foob;
	foob = fbarz;

	std::cout << "foob's content: " << foob.content() << '\n';
}