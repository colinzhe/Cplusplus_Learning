// 2a_Flow_Control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

int main()
{
    int n = 10;

    while (n > 0)
    {
        std::cout << n << std::endl;
        --n;
    }

    std::cout << "Liftoff!" << std::endl;

    std::string mystring;

    do
    {
        std::cout << "Enter a string: ";
        std::getline(std::cin, mystring);
        std::cout << "You entered: " << mystring << "\n";
    } while (mystring != "exit");
    std::cout << "Exiting..." << std::endl;

    for (int n = 0; n < 10; ++n)
    {
        std::cout << n << std::endl;
    }

    for (int n = 0, i = 100; n != i; ++n, --i)
    {
        std::cout << "n = " << n << ", i = " << i << std::endl;
    }

    mystring = "Hello!";

    for (auto c : mystring)
    {
        std::cout << c << ", ";
    }
    std::cout << std::endl;

    std::getline(std::cin, mystring);
    int myint;
    std::stringstream(mystring) >> myint;

    switch (myint)
    {
        case 0:
            std::cout << "Selection 0" << std::endl;
            break;
        case 1:
            std::cout << "Selection 1" << std::endl;
            break;
        default:
            std::cout << "Invalid selection" << std::endl;
    }
}
