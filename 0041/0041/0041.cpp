#include <iostream>

int main()
{
    double a, b, c;
    if (!(std::cin >> a >> b >> c) || (((a <= 1) || (a >= 3)) && ((b <= 1) || (b >= 3)) && ((c <= 1) || (c >= 3)))) { return 1; }
    if ((a > 1) && (a < 3)) { std::cout << a << std::endl; };
    if ((b > 1) && (b < 3)) { std::cout << b << std::endl; };
    if ((c > 1) && (c < 3)) { std::cout << c << std::endl; };
}