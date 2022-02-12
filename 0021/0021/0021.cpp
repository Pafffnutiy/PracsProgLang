#include <iostream>
#include <cmath>
 

int main()
{
    double c, d;
    if (!(std::cin >> c >> d)) { return 1; }
    double D = 9 + 4 * abs(c * d);
    double x1, x2;
    x1 = (3 + sqrt(D)) / 2;
    x2 = (3 - sqrt(D)) / 2;
    double ans1, ans2, ans3, ans;
    ans1 = abs(pow(sin(abs(c * pow(x1, 3) + d * pow(x2, 2) - c * d)), 3));
    ans2 = sqrt(pow(c * pow(x1, 3) + d * pow(x2, 2) - x1, 2) + 3.14);
    ans3 = tan(c * pow(x1, 3) + d * pow(x2, 2) - x1);
    ans = ans1 / ans2 + ans3;
    std::cout << ans;
    return 0;
}