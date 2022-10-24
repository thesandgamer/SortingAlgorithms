// SortingAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "QuickSort.h"

using std::vector;
using std::cout;
using std::endl;

std::vector<float> numbers;


void Display(vector<float> values);

int main()
{
	srand((time(0)));
	numbers.reserve(20);
	//memset(numbers, static_cast <float>(rand()), 10000);
	//std::fill(std::begin(numbers), std::end(numbers), static_cast <float>(rand()));
	
	for  (int i = 0; i < numbers.capacity();i++)
	{
		float val = static_cast <float>(rand() % numbers.capacity());
		numbers.emplace_back(val);
	}
	/*
	vector<float> values = { 5., 2., 8., 1., 4., 3., 7., 6. };
	for (int i = 0; i < values.size(); i++)
	{
		numbers.emplace_back(values[i]);
	}*/
	Display(numbers);
	std::cout << "End" << std::endl;
	QuickSort::QuickSortVector(&numbers);
	//Display(numbers);




}


void Display(vector<float> values)
{
	for (int i = 0; i < values.capacity(); i++)
	{
		std::cout << values[i] << " ";
	}
	std::cout << std::endl;
}
