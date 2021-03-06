// 2c_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void incr_all(int * start, int * stop);
void print_all(int * start, int * stop);
void incr_by_one(void * data, int datasize);
int addition(int a, int b);
int subtraction(int a, int b);
int operation(int x, int y, int(*functocall)(int, int));

int main()
{
	int var = 25;
	int * varptr = &var;

	int firstval, secondval;
	int * myptr;

	myptr = &firstval;
	*myptr = 10;
	myptr = &secondval;
	*myptr = 20;

	std::cout << "firstval is " << firstval << '\n';
	std::cout << "secondval is " << secondval << '\n';

	firstval = 5, secondval = 15;
	int * p1, * p2;

	p1 = &firstval;
	p2 = &secondval;

	*p1 = 30;
	*p2 = *p1;
	p1 = p2;
	*p1 = 50;

	std::cout << "firstval is " << firstval << '\n';
	std::cout << "secondval is " << secondval << '\n';

	int numbers[5];
	int * p;
	p = numbers;
	*p = 10;
	* numbers = 5;
	p++;
	*p = 20;
	p = &numbers[2];
	*p = 30;
	p = numbers + 3;
	*p = 40;
	p = numbers;
	*(p + 4) = 50;
	
	for (int n = 0; n < 5; ++n)
	{
		std::cout << "numbers[" << n << "] is " << numbers[n] << '\n';
	}

	char mychar;
	short myshort;
	long mylong;

	char * mycharptr = &mychar;
	short * myshortptr = &myshort;
	long * mylongptr = &mylong;

	std::cout << "addr of mychar: " << static_cast<void*>(mycharptr) << '\n';
	std::cout << "addr of myshort: " << myshortptr << '\n';
	std::cout << "addr of mylong: " << mylongptr << '\n';

	++mycharptr; ++myshortptr; ++mylongptr;

	std::cout << "addr of mychar: " << static_cast<void*>(mycharptr) << '\n';
	std::cout << "addr of myshort: " << myshortptr << '\n';
	std::cout << "addr of mylong: " << mylongptr << '\n';

	int g = 5;
	int * gptr = &g;

	std::cout << g << '\n';
	std::cout << gptr << '\n';
	//int b = *gptr++;
	//int b = *++gptr;
	//int b = ++*gptr;
	int b = (*gptr)++;
	std::cout << "g is: " << g << '\n';
	std::cout << "b is: " << b << '\n';
	std::cout << "gptr is: " << gptr << '\n';

	int x = 1, y = 2;
	int * xptr = &x, * yptr = &y;

	std::cout << "x is: " << x << '\n';
	std::cout << "xptr is: " << xptr << '\n';
	std::cout << "y is: " << y << '\n';
	std::cout << "yptr is: " << yptr << '\n';
	*xptr++ = *yptr++;
	std::cout << "x is: " << x << '\n';
	std::cout << "xptr is: " << xptr << '\n';
	std::cout << "y is: " << y << '\n';
	std::cout << "yptr is: " << yptr << '\n';

	int mynums[]{ 10, 20, 30 };
	incr_all(mynums, mynums + 3);
	print_all(mynums, mynums + 3);

	int z = 50;
	int * zptr1 = &z;
	const int * zptr2 = &z;
	int * const zptr3 = &z;
	const int * const zptr4 = &z;

	char a = 'z';
	char * aptr = &a;
	char ** aptr2 = &aptr;

	std::cout << "a is: " << a << '\n';
	std::cout << "aptr is: " << static_cast<void*>(aptr) << '\n';
	std::cout << "aptr2 is: " << static_cast<void*>(aptr2) << '\n';
	std::cout << "*aptr2 is: " << static_cast<void*>(*aptr2) << '\n';
	std::cout << "**aptr2 is: " << **aptr2 << '\n';

	std::cout << "size of a is: " << sizeof(a) << '\n';
	std::cout << "size of char is: " << sizeof(char) << '\n';

	a = 'x';
	b = 1602;

	incr_by_one(&a, sizeof(a));
	incr_by_one(&b, sizeof(b));
	std::cout << "a is: " << a << '\n';
	std::cout << "b is: " << b << '\n';

	int * nptr1 = 0;
	int * nptr2 = nullptr;
	int * nptr3 = NULL;

	int m, n;
	int(*minus)(int, int) = subtraction;

	m = operation(7, 5, addition);
	n = operation(20, m, minus);
	std::cout << "m is: " << m << '\n';
	std::cout << "n is: " << n << '\n';
}

void incr_all(int * start, int * stop)
{
	int * current = start;
	while (current != stop)
	{
		++(*current);
		++current;
	}
}

void print_all(int * start, int * stop)
{
	const int * current = start;
	while (current != stop)
	{
		std::cout << *current << '\n';
		++current;
	}
}

void incr_by_one(void * data, int datasize)
{
	if (datasize == sizeof(char))
	{
		char * pchar = static_cast<char *>(data);
		++(*pchar);
	}
	else if (datasize == sizeof(int))
	{
		int * pint = static_cast<int *>(data);
		++(*pint);
	}
}

int addition(int a, int b)
{
	return (a + b);
}

int subtraction(int a, int b)
{
	return (a - b);
}

int operation(int x, int y, int(*functocall)(int, int))
{
	return (*functocall)(x, y);
}