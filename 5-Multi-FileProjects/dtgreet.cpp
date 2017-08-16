#include <iostream>
#include "dtgreet.h"

int main()
{
	void dayGreeting(int day, int month, int year);
	{
		std::cout << "Greetings! Today is " << month << day << "th, " << year << ". Are you prepared for Y2K?" << std::endl;
	}

	void timeGreeting(int hour, int minute);
	{
		std::cout << "Greetings! The time is " << hour << ":" << minute << "pm. Have a good rest of the day!" << std::endl;
	}

	bool isLeapYear(int years);
	{
		if (years % 4 == 0)
		{
			if (years % 100 == 0)
			{
				if (years % 400 == 0)
				{
					std::cout << "It is a leap year" << std::endl;
				}
			}
			else
			{
				std::cout << "It's not a leap year" << std::endl;
			}
		}
		return false;
	}



}

int main()
{
	dayGreeting(31, 12, 1999);

	timeGreeting(12, 45);

	std::cout << isLeapYear(2020) << std::endl;
	
	system("pause");
}