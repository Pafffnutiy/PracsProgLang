#include <iostream>
#include <cmath>

double length(double a, double b, double c, double d) 
{
	return sqrt(pow(c - a, 2) + pow(d - b, 2));
}

int main()
{
	double x1, y1, x2, y2, x3, y3;
	if (!(std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)) { return 1; }
	double l1, l2, l3;
	l1 = length(x1, y1, x2, y2);
	l2 = length(x2, y2, x3, y3);
	l3 = length(x3, y3, x1, y1);
	double P;
	P = l1 + l2 + l3;
	std::cout << P;
}