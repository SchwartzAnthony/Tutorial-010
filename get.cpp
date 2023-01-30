#include <iostream>

int getInteger()
{
	std::cout << "Enter an Integer: " << '\n'; 
	int x{}; 
	std::cin >> x; 
	return x; 
}