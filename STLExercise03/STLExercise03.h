#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

std::ostream& operator << (std::ostream& os, std::vector<int> v)
{
	std::cout << "{";

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it;

		if (it != v.end() - 1)
		{
			std::cout << ",";
		}
	}
	std::cout << "}";
	return os;
}

bool Compare(int x, int y)
{
	return x > y;
}
void Ex1()
{
	std::vector<int> numbers { 5, 2, 3, 1, 4};
}