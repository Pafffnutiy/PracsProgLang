#include <iostream>

int main()
{
    double x, y, p, t;
    if (!(std::cin >> x >> y) || (x == y)) { return 1; }
    p = (x + y) / 2;
    t = 2 * x * y;
    if (x < y) { std::cout << p << std::endl << t; };
    if (y < x) { std::cout << t<< std::endl << p; };
    return 0;
 }