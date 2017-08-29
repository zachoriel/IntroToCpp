#include <iostream>
#include <cstring>

int main()
{
	// closed
	// 1
	std::cout << "1. Please enter your name." << std::endl;
	char userName[50];  // Defines a non-numeric variable, using up to 50 (arbitrary number) letters. Unused letters are 'garbage' letters.

	std::cin >> userName;  // Records user input.

	strlen(userName); // strlen returns the amount of characters in the input before the 0

	std::cout << "Hello, " << userName << "!" << std::endl;

	// 2
	std::cout << "2. Please enter your favorite colour." << std::endl;
	char userColour[50];
	char r[] = "red";
	char o[] = "orange";
	char y[] = "yellow";
	char b[] = "blue";
	char g[] = "green";

	std::cin >> userColour;

	strlen(userColour);

	if (strcmp(userColour, r) == 0)
	{
		std::cout << r << "? As in the colour of roses?" << std::endl;
	}
	else if (strcmp(userColour, o) == 0)
	{
		std::cout << o << " is also the name of a fruit." << std::endl;
	}
	else if (strcmp(userColour, y) == 0)
	{
		std::cout << y << ". Like the sun!" << std::endl;
	}
	else if (strcmp(userColour, b) == 0)
	{
		std::cout << "Nothing like clear " << b << " skies, right?" << std::endl;
	}
	else if (strcmp(userColour, g) == 0)
	{
		std::cout << "What kind of " << g << " are we talking about? Like grass, or more of a neon " << g << "? This is an important detail!"  << std::endl;
	}
	else
	{
		std::cout << userColour << "? What's that? I've never heard of that colour." << std::endl;
	}

	// 3
	std::cout << "3. Input a line with whitespace: ";

	char input[50] = "";

	std::cin.ignore(50, '\n');
	std::cin.getline(input, 50);

	char buffer[50] = { 0 };
	int j = 0;
	for (int i = 0; i < strlen(input) + 1; ++i)
	{
		if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n')
			buffer[j++] = input[i];
	}
	std::cout << std::endl << buffer << std::endl;

	system("pause");

	// OPEN
	// Palindromes

	bool isAlpha(char query)
	{
		return query >= 'a' && query <= 'Z' ||
			   query >= 'a' && query <= 'z';
	}

	char toLower(char a)
	{
		if (query >= 'A' && query <= 'Z')
			query += 'a' - 'A';
		return query;
	}

	bool isPalindrome(char string[])
	{
		int i = 0, j = strlen(string)-1;
		bool hasChar = false;
		do
		{
			while (!isAlpha(string[i]) && i < strlen(string)) i++;
			while (!isAlpha(string[j]) && j >= 0) j--;

			if (i >= strlen(string) || j < 0)
				return hasChar;

			if (toLower(string[i])) != toLower(string[j]))
				return false;
			i++;
			j--;
			hasChar = true;

		} while (j >= 0);

		return true;

	}


	
	void main()
	{
		char buffer[80];
		std::cin.getline(buffer, 80);
		std::cout << isPalindrome(buffer) << std::endl;
		system("pause");
	}

}