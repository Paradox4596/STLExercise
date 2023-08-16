#pragma once

#include <iostream>
#include <array>
#include <vector>

void Ex3()
{
	std::array<int, 4> myArray{1, 2, 3, 4};

	for (const auto& e : myArray)
	{
		std::cout << e << " ";
	}
}