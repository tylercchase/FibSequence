// FibSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int fib(int power);
int main()
{
	std::cout << "Please put a number to have the fibonacci sequence go to." << std::endl;
	int input;
	std::cin >> input;
	if (input < 0) {
		std::cout << "Please enter a positive number" << std::endl;
		return 0;
	}
	std::cout << "Output is: " << fib(input) << std::endl;
	std::cin;
	return 0;
}
int fib(int power) {
	if (power == 0) {
		return 0;
	}
	else if (power == 1) {
		return 1;
	}
	else {
		return fib(power - 1) + fib(power - 2);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
