#include <iostream>
#include <cmath>
int main() {
    double a, d;
    double n;
    if ((!(std::cin >> a >> d >> n)) || (n <= 0) || (floor(n) != n)) { return 1; }
    double ans;
    ans = ((2 * a + d * (n - 1)) / 2) * n;
    std::cout << ans;
    return 0;
}