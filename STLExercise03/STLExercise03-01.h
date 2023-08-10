#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

struct Student
{
	int mNumber;
	int mScore;
	std::string mName;
};

std::ostream& operator << (std::ostream& os, const std::vector<Student>& students)
{
	for (const auto& e : students)
	{
		std::cout << e.mScore << " : " << e.mName << " : " << e.mScore << std::endl;
	}
}

void Ex2()
{
	std::vector<Student> students
	{
		{1, 100, "Doggy"},
		{ 2,50,"Kitty" },
		{ 3,90,"Piggy" },
		{ 4,20,"Bunny" }
	};

	std::sort(students.begin(), students.end());
	
	std::cout << students << std::endl;
}