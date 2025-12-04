#include <iostream>
#include <string>
using namespace std;

int MaxMinDigit()
{
	int number{};
	cout << "Enter an integer less than 99: ";
	cin >> number;

	if (number >= 1 && number <= 99)
	{
		string str_number = to_string(number);
		if (str_number[0] > str_number[1])
		{
			cout << "Bigger digit: " << str_number[0] << endl;
			cout << "Smaller digit: " << str_number[1] << endl;
		}
		else
		{
			cout << "Bigger digit: " << str_number[1] << endl;
			cout << "Smaller digit: " << str_number[0] << endl;
		}
	}
	else
	{
		cout << "The number is out of range(1, 99)!" << endl;
	}

	return 0;
}