#include <iostream>
using namespace std;

int exponentiation()
{
	double number{}, power{}, result{1};
	printf_s("Enter the initial number: ");
	scanf_s("%lf", &number);
	if (number == 0)
	{
		cout << "0" << endl;
		system("pause");
	}
	printf_s("Enter the power: ");
	scanf_s("%lf", &power);

	for (int i = 0; i < power; i++)
	{
		result *= number;
	}

	cout << "number = " << result << endl;

	return 0;
}