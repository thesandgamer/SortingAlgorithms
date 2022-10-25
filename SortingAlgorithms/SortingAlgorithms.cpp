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
	//numbers.reserve(10);
	/*
	for  (int i = 0; i < 10;i++)
	{
		float val = static_cast <float>(rand() %10);
		numbers.emplace_back(val);
	}*/
	
	//vector<float> values = { 5., 2., 8., 1., 4., 3., 7., 6. };
	vector<float> values = {2., 2, 4., 9., 8., 1. ,5.};
	for (int i = 0; i < values.size(); i++)
	{
		numbers.emplace_back(values[i]);
	}
	//Display(numbers);
	//std::cout << "End" << std::endl;
	cout << "Liste de base: ";
	Display(numbers);

	QuickSort::QuickSortVector(&numbers, 0, numbers.size() - 1);

	std::bitset binaryValue;
	int gapValue = 0;
	bool checking = false;
	std::set<int> gapsValues;

	std::string val = binaryValue.to_string()

	for (size_t i = 0, i < val.siaz)


}


void Display(vector<float> values)
{
	for (int i = 0; i < values.capacity(); i++)
	{
		std::cout << values[i] << " ";
	}
	std::cout << std::endl << std::endl;
}
