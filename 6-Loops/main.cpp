#include <iostream>

int main()
{

	// Closed
	// 1
	for (int i = 1; i <= 100; ++i)
	{
		std::cout << i << std::endl;
	}

	system("pause");

	// 2
	for (int i = 100; i >= 1; --i)
	{
		std::cout << i << std::endl;
	}

	system("pause");

	// 3
	int val = 1995;
	do
	{
		std::cout << val << std::endl;
		++val;
	} 
	while (val <= 2017);

	system("pause");

	// 4


}