// 4c_Special_Members.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class MyClassDeconst
{
	std::string * ptr;
public:
	MyClassDeconst() : ptr(new std::string) {}
	MyClassDeconst(const std::string &str) : ptr(new std::string(str)) {}
	~MyClassDeconst() { delete ptr; }
	const std::string &content() const { return *ptr; }
};

int main()
{
	MyClassDeconst fooz;
	MyClassDeconst fbar("Example");

	std::cout << "fbar's content: " << fbar.content().c_str() << '\n';
}