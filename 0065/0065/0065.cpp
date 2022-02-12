#include <iostream>
#include <cmath>

int main()
{
    double n, b;
    if (!(std::cin >> n >> b) || (n > 99) || (floor(n) != n) || (n <= 0)) { return 1; };
    int a = static_cast<int>(n);
    if (pow(a % 10 + a / 10 % 10, 3) == pow(b, 2)) { std::cout << "YES"; }
    else { std::cout << "NO"; };
    return 0;
}