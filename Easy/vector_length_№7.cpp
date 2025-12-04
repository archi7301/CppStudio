#include <iostream>
#include <cmath>
using namespace std;

int vector_length()
{
	const int MAX_SIZE = 3;
	int new_size = 0;
	double x{}, vector[MAX_SIZE], sum_of_squares{}, length{};
	unsigned int i = 1;

	for (i = 0; i < size(vector); i++)
	{
		cout << "Enter X" << i + 1 << ": ";
		cin >> x;
		vector[new_size] = x;
		new_size++;
	}

	cout << "Vector = (" << vector[0] << ", " << vector[1] << ", " << vector[2] << ")" << endl;

	for (i = 0; i < new_size; i++)
	{
		sum_of_squares += pow(vector[i], 2);
		length = sqrt(sum_of_squares);
	}

	printf_s("Vector length = %4.2lf", length);

	return 0;
}