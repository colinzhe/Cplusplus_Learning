// 3f_Other_Data_Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

union mix_t
{
    int l;
    struct
    {
        short hi;
        short lo;
    } s;
    char c[4];
};

int main()
{
    typedef char C;
    typedef unsigned int WORD;
    typedef char* pChar;
    typedef char field[50];

    C mychar, anotherchar, * ptc1;
    WORD myword;
    pChar ptc2;
    field name;

    using Cprime = char;
    using WORDprime = unsigned int;
    using pChar = char*;
    using field = char[50];

    mix_t amix;
    std::string mystr;

    std::cout << "Enter an integer: ";
    std::getline(std::cin, mystr);
    std::stringstream(mystr) >> amix.l;
    std::cout << "Your integer is: " << amix.l << '\n';

    std::cout << "Enter a short: ";
    std::getline(std::cin, mystr);
    std::stringstream(mystr) >> amix.s.hi;
    std::cout << "Your hi is: " << amix.s.hi << '\n';

    std::cout << "Enter another short: ";
    std::getline(std::cin, mystr);
    std::stringstream(mystr) >> amix.s.lo;
    std::cout << "Your lo is: " << amix.s.lo << '\n';

    std::cout << "Enter a char: ";
    std::getline(std::cin, mystr);
    std::stringstream(mystr) >> amix.c;
    std::cout << "Your char is: " << amix.c << '\n';
}