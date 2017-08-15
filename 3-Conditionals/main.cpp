#include <iostream>

int main()
{
	// Evaluate the Truth Table
	
	// 1. true AND true  -  true
	// 2. true OR false  -  true
	// 3. false OR true  -  true
	// 4. false AND true  -  false
	// 5. true AND false  -  false
	// 6. false OR true OR false  -  true
	// 7. true AND (true OR false)  -  true

	// Evaluate the Following
	// Problem A

	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "The number is " << numberA << std::endl;

	system("pause");

	// Problem B

	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "The number is " << numberB << std::endl;

	system("pause");

	// Problem C

	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "The number is " << numberC << std::endl;

	system("pause");

	// Problem D

	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "The number is " << numberD << std::endl;

	system("pause");

	// Problem E

	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "The number is " << numberE << std::endl;

	system("pause");

	// Problem F

	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "The number is " << numberF << std::endl;

	system("pause");

	// Problem G

	int numberG = 6;
	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "The number is " << numberG << std::endl;

	system("pause");

	// Number Judging

	std::cout << "Please enter a number from 1 to 100" << std::endl;
	int rangeNumber = 0;
	std::cin >> rangeNumber;

	if (rangeNumber > 50)
	{
		std::cout << rangeNumber << "? Wow! That's a large number." << std::endl;
	}
	else if (rangeNumber < 50)
	{
		std::cout << rangeNumber << "? Huh. That's a small number." << std::endl;
	}
	else
	{
		std::cout << rangeNumber << "? Now THAT, my friend, is a balanced number." << std::endl;
	}

	system("pause");

	// Age Gate

	std::cout << "How old are you?" << std::endl;
	int userAge = 0;
	std::cin >> userAge;

	if (userAge < 18)
	{
		std::cout << "You're a minor. ";
	}
	else if (userAge >= 18)
	{
		std::cout << "You're an adult!\n";
	}
	if (userAge >= 50)
	{
		std::cout << "Hey, you're eligible to join AARP! :D\n";
	}
	if (userAge >= 65)
	{
		std::cout << "Woah! You're eligible for retirement benefits.\n";
	}

	system("pause");

	// The Smallest of Three Numbers

	std::cout << "Please enter three numbers." << std::endl;
	int smallNumber = 100;
	int userInput = 0;

	std::cin >> userInput;
	if (userInput < smallNumber)
	{
		smallNumber = userInput;
	}

	std::cin >> userInput;
	if (userInput < smallNumber)
	{
		smallNumber = userInput;
	}

	std::cin >> userInput;
	if (userInput < smallNumber)
	{
		smallNumber = userInput;
	}

	std::cout << smallNumber << " is the smallest number." << std::endl;
		

	system("pause");

	// Even or Odd

	std::cout << "Enter a number to see if it's odd or even.";
	int userNum = 0;
	std::cin >> userNum;

	if ((userNum % 2) == 0)
	{
		std::cout << "Even\n";
	}
	else
	{
		std::cout << "Odd\n";
	}

	system("pause");

	// Clamp the Number

	std::cout << "Please enter a value between 15 and 30." << std::endl;
	int clampNum = 0;
	std::cin >> clampNum;

	if (clampNum < 15)
	{
		clampNum = 15;
		std::cout << "Your value cannot be less than 15. Your final value is " << clampNum << std::endl;
	}
	else if (clampNum > 30)
	{
		clampNum = 30;
		std::cout << "Your value cannot exceed 30. Your final value is " << clampNum << std::endl;
	}
	else
	{
		std::cout << "Your final value is " << clampNum << std::endl;
	}

	// Input Validation

	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.

	





	







	// WALKTHROUGH

	bool isHappy = true;    // Function determines console message at program start

	if (isHappy)  // means if function isHappy = true
	{
		std::cout << "I am totes happy <3" << std::endl;
	}
	else    // means if function isHappy = false
	{
		std::cout << "I am mucho sadz </3" << std::endl;
	}

	std::cout << "How happy are you?" << std::endl;
	int happiness = 50;    // Defined variable. Needed for user input. Value is arbitrary
	std::cin >> happiness;     // Tells program to record user's input

	if (happiness > 75)
	{
		std::cout << "You are very happy! :D" << std::endl;
	}
	else if (happiness > 30)  // else if is used when you have multiple 'else' conditionals
	{
		std::cout << "You are rather content. :o" << std::endl;
	}
	else if (happiness > 0)
	{
		std::cout << "Have hope, friend! :O" << std::endl;
	}
	else     // 'else' is used when there are no more conditionals you want to define
	{
		std::cout << "WOE IS YOU. SAD TIMES :(" << std::endl;
	}

	system("pause");
}