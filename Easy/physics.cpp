#include <iostream>
#include <cmath>
using namespace std;

int physics()
{
	const double g = 9.81, pi = 3.14;
	double v, t, alpha;

	cout << "Enter the initial velocity of the body: ";
	cin >> v;
	cout << "Enter the body's flight time: ";
	cin >> t;

	alpha = asin((g * t) / (2 * v));

	cout << "alpha = " << alpha * 180 / pi << endl;

	return 0;
}