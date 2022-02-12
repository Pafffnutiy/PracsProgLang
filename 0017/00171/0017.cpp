#include <iostream>
int main() 
{
	double r;
	if ((!(std::cin >> r)) && (r <= 20)) { return 1; }
	double ans;
	ans = 3.14 * (r * r - 400);
	std::cout << ans;
	return 0;
}