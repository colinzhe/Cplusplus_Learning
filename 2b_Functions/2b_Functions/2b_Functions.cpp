// 2b_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void odd(int x);
void even(int x);
int factorial(int x);

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

inline std::string concat(const std::string& a, const std::string& b)
{
    return a + b;
}

void printmsg(void)
{
    std::cout << "This is a message." << std::endl;
}

int divide(int a, int b = 2)
{
    return a / b;
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

    std::string str1("Hello ");
    std::string str2("there");
    std::cout << concat(str1, str2) << std::endl;
    std::cout << str1 << str2 << std::endl;

    std::cout << divide(z) << std::endl;

    odd(2);

    int num = 9;
    std::cout << num << "! = " << factorial(num) << std::endl;
}

void odd(int x)
{
    if ((x % 2) != 0) std::cout << "It is odd." << std::endl;
    else even(x);
}

void even(int x)
{
    if ((x % 2) == 0) std::cout << "It is even." << std::endl;
    else odd(x);
}

int factorial(int x)
{
    if (x > 1)
        return (x * factorial(x - 1));
    else
        return 1;
}