#include <iostream>
using namespace std;

int function_value()
{
	double x = -1.1;
	while (x < 0.5)
	{
		for (int m = 1; m < 5; m++)
		{
			double x_pow = 1;
			for (int i = 0; i < m; i++)
			{
				x_pow *= x;
			}

			double arg = x * m;
			double sin_value = sin(arg);

			double sin_pow = 1;
			for (int i = 0; i < m; i++)
			{
				sin_pow *= sin_value;
			}

			double z = x_pow * sin_pow;
			cout << "Function value = " << z << " at m = " << m << endl;
		}
		cout << "Calculated at x = " << x << endl;
		x += 0.2;
	}

	return 0;
}