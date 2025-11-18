#include <iostream>
#include <conio.h>
using namespace std;

int algebraic_sum();
int power_law_sum();
int MaxMinDigit();

int main()
{
	unsigned int choice{};
	int key{};
	while (true)
	{
		cout << "Select a task (1-5): ";
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