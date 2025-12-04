#include <iostream>
#include <string>
using namespace std;

int choose_day_of_week()
{
	unsigned int day{};
	string week[] { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout << "Enter the day: ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << week[0] << endl;
		break;
	case 2:
		cout << week[1] << endl;
		break;
	case 3:
		cout << week[2] << endl;
		break;
	case 4:
		cout << week[3] << endl;
		break;
	case 5:
		cout << week[4] << endl;
		break;
	case 6:
		cout << week[5] << endl;
		break;
	case 7:
		cout << week[6] << endl;
		break;
	default:
		printf_s("There is no such day of the week!\n");
	}

	return 0;
}