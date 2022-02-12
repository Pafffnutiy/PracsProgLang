#include <iostream>
#include <cmath>

int main()
{
    double k, m, x, y, z;
    if (!(std::cin >> k >> m >> x >> y >> z) || (floor(k) != k) || (floor(m) != m)) { return 1; }
    if (k < m * m) { std::cout << abs(x) << std::endl << y - 0.5 << std::endl << z - 0.5; }
    if (k = m * m) { std::cout << x - 0.5 << std::endl << abs(y) << std::endl << z - 0.5; }
    if (k > m * m) { std::cout << x - 0.5 << std::endl << y - 0.5 << std::endl << abs(z); }
    return 0;
 }