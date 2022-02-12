#include <iostream>

int main()
{
    double x, y;
    if (!(std::cin >> x >> y)) { return 1; }
    if ((x < 0) && (y < 0)) { std::cout << abs(x) << std::endl << abs(y); }
    if (x * y < 0) { std::cout << x + 0.5 << std::endl << y + 0.5; }
    if ((x >= 0) && (y >= 0) && ((x < 0.5) || (x > 2)) && ((y < 0.5) || (y > 2))) { std::cout << x / 10 << std::endl << y / 10; }
    if ((x >= 0.5) && (x <= 2) || (y >= 0.5) && (y <= 2)) { std::cout << x << std::endl << y; }
    return 0;
}
