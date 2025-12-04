#include <iostream>
using namespace std;

int power_law_sum()
{
	unsigned int n{};
	double k{}, sum{};

	cout << "Enter N: ";
	cin >> n;
	cout << "Enter the degree k: ";
	cin >> k;

	for (unsigned int i = 1; i <= n; i++)
	{
		sum += pow(i, k);
	}

	cout << "sum = " << sum << endl;

	return 0;
}