// 2b_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int a, int b)
{
    int r = a + b;
    return r;
}

void duplicate(int& a, int& b, int& c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

void printmsg(void)
{
    std::cout << "This is a message." << std::endl;
}

int main()
{
    int z = add(5, 3);
    std::cout << "Result is: " << z << std::endl;
    printmsg();
    
    int x = 1, y = 2;
    z = 3;
    duplicate(x, y, z);
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
}