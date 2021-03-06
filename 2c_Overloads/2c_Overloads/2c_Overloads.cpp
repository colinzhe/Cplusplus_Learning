// 2c_Overloads.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int operate(int a, int b)
{
	return (a * b);
}

int operate(double a, double b)
{
	return (a / b);
}

template <class T>
T sum(T a, T b)
{
	return (a + b);
}

template <class V, class U>
bool are_eq(V a, U b)
{
	return (a == b);
}

template <class G, int N>
G fixed_mult(G a)
{
	return a * N;
}

int main()
{
	int x = 5, y = 2;
	double n = 5.0, m = 2.0;
	unsigned long int w = 10, z = 10;

	std::cout << operate(x, y) << '\n';
	std::cout << operate(n, m) << '\n';
	//std::cout << operate(w, z) << '\n';

	std::cout << sum<int>(x, y) << '\n';
	std::cout << sum<double>(w, z) << '\n';
	std::cout << sum(x, y) << '\n';
	std::cout << sum(w, z) << '\n';

	if (are_eq(10ul, 10.0l))
	{
		std::cout << "They're equal!" << '\n';
	}
	else
	{
		std::cout << "They're not equal!" << '\n';
	}

	std::cout << fixed_mult<int, 2>(10) << '\n';
	std::cout << fixed_mult<double, 3>(10.0) << '\n';
}