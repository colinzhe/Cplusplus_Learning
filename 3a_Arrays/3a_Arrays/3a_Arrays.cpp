// 3a_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <array>

void printarr(int arr[], int len)
{
	for (int n = 0; n < len; n++)
	{
		std::cout << arr[n] << ' ';
	}
	std::cout << '\n';
}

int main()
{
	int foo[5] = {};

	std::cout << foo[0] << '\n';

	int bar[] = { 16, 2, 277, 40, 12000 };

	std::cout << bar[5] << '\n';

	int arr[]{ 5,55,5,5 };

	std::cout << arr[1] << '\n';

	int arr2d[2][2]{ {1, 2}, {3, 4} };

	std::cout << arr2d[1][1] << '\n';

	int arr1[]{ 5, 10, 15 };
	int arr2[]{ 3,4,5,6,7 };

	printarr(arr1, sizeof(arr1) / sizeof(*arr1));
	printarr(arr2, sizeof(arr2) / sizeof(*arr2));

	std::array<int, 3> arrspecial{ 10, 20, 30 };

	for (int i = 0; i < arrspecial.size(); ++i)
	{
		arrspecial[i]++;
	}

	for (int elem : arrspecial)
	{
		std::cout << elem << ' ';
	}
	std::cout << '\n';
}