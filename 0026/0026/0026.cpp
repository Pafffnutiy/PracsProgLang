#include <iostream>
#include <cmath>

int main()
{
    double R = 13.7;
    double alpha;
    if (!(std::cin >> alpha) || (alpha < 0) || (alpha > 2 * 3.14)) { return 1; }
    double S;
    S = 0.5 * alpha * pow(R, 2);
    std::cout << S;
    return 0;
}