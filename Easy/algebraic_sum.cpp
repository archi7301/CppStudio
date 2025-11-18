#include <iostream>
using namespace std;

int algebraic_sum()
{
	unsigned int n{};
	double Z{}, B{}, A{}, Betta{}, y{}, x{};
	cout << "Enter the number of x: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter the values Z, B, A, Betta for X" << i + 1 << ":" << endl;
		cout << "Z = ";
		cin >> Z;
		cout << "B = ";
		cin >> B;
		cout << "A = ";
		cin >> A;
		cout << "Betta = ";
		cin >> Betta;

		if (tan(Betta) == 0)
		{
			cout << "It is impossible to divide by zero!" << endl;
			break;
		}

		x = pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2);
		y += x;
	}

	cout << "y = " << y << endl;

	return 0;
}