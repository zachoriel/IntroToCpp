#include <iostream>


// CLOSED
// 1
void printNumbers(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << nums[i] << std::endl;
	}
}

int main()
{
	int values[]{ 0, 1, 2, 3 };

	printNumbers(values, 4);

	system("pause");

	int moreValues[]{ 2, 4, 8, 16, 32, 64 };

	printNumbers(moreValues, 6);

	system("pause");

	int evenMoreValues[]{ 33, 74, 52, 9 };

	printNumbers(evenMoreValues, 4);

	system("pause");

	// 2

}