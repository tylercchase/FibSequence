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
