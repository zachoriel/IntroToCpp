#include <iostream>

	// Function Prototypes

	void helloFunctions();
	int squareInt(int i, int result);
	int simpleFrac(int n, int d);
	float largestDiff(float a, float b, float c);

	// Function Definitions / Sum of Three Integers

int main()
{
void printNums(int a, int b)
{
	std::cout << a << "," << b;
}

int sumOfThree(int a, int b, int c)
{
	return a + b + c;
}

	// Min

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

	// Max

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

	// Clamp

int clamp(int l, int u, int v)
{
	int number = value;

	if (number < lower)
	{
		number = lower;
	}
	else if (number > upper)
	{
		number = upper;
	}

	return number;
}

	// Distance / Estimated Time of Arrival

float dist(float x1, float y1, float x2, float y2)
{
	return ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))
}

float eta(float x1, float y1, float x2, float y2, float unitsPerSec)
{
	dist(x1, y1, x2, y2) / unitsPerSec;
}

int main()
{
	printNums(5, 7);
	std::cout << sumOfThree(1, 3, 4) << std::endl;

	std::cout << min(3, 8) << std::endl;
	std::cout << max(4, 7) << std::endl;

	std::cout << clamp(15, 30, 23) << std::endl;

	std::cout << dist(7, 23, 9, 0) << std::endl;
	std::cout << eta(0, 0, 0, 4, 1) << std::endl;


	system("pause");

}








	// Sum of Three Integers

	

	
















}