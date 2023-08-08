#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1;
	int num{}, index{}, smallestValue{};

	while (std::cin >> num)
	{
		v1.push_back(num);
	}
	
	smallestValue = v1[0];

	for (int i = 0; i < v1.size() ; i++)
	{
		if (smallestValue > v1[i])
		{
			index = i;
			smallestValue = v1[i];
		}
	}

	std::cout << index;
}