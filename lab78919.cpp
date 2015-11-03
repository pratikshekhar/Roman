#include <iostream>
#include <cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

double random()
{
	double number = 0;
	number = (double(rand()) / double(RAND_MAX)*(1 + 1)) - 1;
	return number;
}
double polar(double x, double y, double &distance, double &angle)
{
	const double ToDegrees = 180.0 / 3.141593;
	distance = sqrt(x*x + y*y);
	angle = atan(y / x) * ToDegrees;
	return angle;
}

void estimate_pi()
{
	double x;
	double y;
	double distance = 0;
	double angle = 0;
	double num_in_circle = 0;
	for (int j = 0; j < 100000; j++)
	{
		x = random();
		y = random();
		angle = polar(x, y, distance, angle);

		if (distance <= 1) num_in_circle++;
	}

	double pi = (4 * num_in_circle / 100000);
	cout << pi << endl;

}


int main()
{
	srand(time(0));
	double x, y, distance, angle, pi, estimate;
	int count = 0, count2 = 0;
	for (int i = 0; i < 100000; i++)
	{
		x = random();
		y = random();

		angle = polar(x, y, distance, angle);
		if (angle >= 0)
		{
			count++;
		}
		else if (angle < 0)
		{
			count2++;
		}
	}
	cout << count << " : " << count2 << endl;
	estimate_pi();
	cout << endl;

	system("pause");
}


