#include "mathutils.h"
#include "dtgreet.h"
#include "rng.h"
#include <iostream>
using namespace std;

int main()
{
	cout << min(1, 42) << endl;
	cout << max(1, 42) << endl;
	cout << clamp(15, 30, 65) << endl;
	cout << dist(0, 0, 0, 4) << endl;

	dayGreeting(31, 12, 1999);
	timeGreeting(12, 45);

	seedRng(13);
	cout << rng() << endl;
	cout << rngRange(15, 30) << endl;
	cout << rngb() << endl;
	cout << rngBchance(99) << endl;
	
	cout << isLeapYear(2020) << endl;

	system("pause");

}