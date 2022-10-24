// SortingAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "QuickSort.h"

using std::vector;
using std::cout;
using std::endl;

std::vector<float> numbers;

int main()
{
	srand((time(0)));
	numbers.reserve(1000);
	//memset(numbers, static_cast <float>(rand()), 10000);
	//std::fill(std::begin(numbers), std::end(numbers), static_cast <float>(rand()));
	for  (int i = 0; i < numbers.capacity();i++)
	{
		float val = static_cast <float>(rand() % numbers.capacity());
		numbers.emplace_back(val);
		std::cout << val << std::endl;
	}
	std::cout << "End" << std::endl;
}

