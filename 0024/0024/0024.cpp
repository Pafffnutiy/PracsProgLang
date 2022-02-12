#include <iostream>
#include <cmath>

int main()
{
    double x1, y1, x2, y2;
    if (!(std::cin >> x1 >> y1 >> x2 >> y2)) { return 1; }
    double ans = sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2)));
    std::cout << ans;
}