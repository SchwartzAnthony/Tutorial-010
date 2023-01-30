// Tutorial 010.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getInteger(); 

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
}


