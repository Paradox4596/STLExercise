#include <iostream>
#include <vector>
#include <algorithm>

// {1, 2, 3, 4}
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

int main()
{

}