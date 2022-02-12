#include <iostream>
#include <cmath>

int main()
{
    double v1, v2, a1, a2, r;
    if (!(std::cin >> v1 >> v2 >> a1 >> a2 >> r) || (v1 < 0) || (v2 < 0) || (a1 < 0) || (a2 < 0) || (r < 0)) { return 1; };
    double D;
    D = pow(v1 + v2, 2) + 2 * r * (a1 + a2);
    if (D < 0) { return 1; };
    double t;
    t = (-v1 - v2 + sqrt(D)) / (a1 + a2);
   // if (t < 0) { return 1; }
    std::cout << t;
    return 0;
}