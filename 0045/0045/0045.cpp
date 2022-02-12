#include <iostream>

int main()
{
    double a, b, c, d;
    if (!(std::cin >> a >> b >> c >> d)) { return 1; }
    if ((a <= b) && (b <= c) && (c <= d)) { std::cout << d << std::endl << d << std::endl << d << std::endl << d; };
    if ((a > c) && (c > b) && (b > d)) { std::cout << a << std::endl << b << std::endl << c << std::endl << d; };
    if (!((a <= b) && (b <= c) && (c <= d)) && !((a > c) && (c > b) && (b > d))) { std::cout << a * a << std::endl << b * b << std::endl << c * c << std::endl << d * d; };
    return 0;
}