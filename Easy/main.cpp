#include <iostream>
#include <conio.h>
using namespace std;

int algebraic_sum();
int power_law_sum();
int MaxMinDigit();
int physics();
int exponentiation();
int choose_day_of_week();

int main()
{
	unsigned int choice{};
	int key{};
	while (true)
	{
		cout << "Select a task (1-9): ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			algebraic_sum();
			break;
		case 2:
			power_law_sum();
			break;
		case 3:
			MaxMinDigit();
			break;
		case 4:
			physics();
			break;
		case 5:
			exponentiation();
			break;
		case 6:
			choose_day_of_week();
			break;
		default:
			cout << "There is no such task!" << endl;
		}
		printf_s("\nPress ESC to exit...\n\n");

		key = _getch();
		if (key == 27)
		{
			break;
		}
		else
		{
			continue;
		}
	}

	return 0;
}