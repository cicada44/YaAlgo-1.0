//-----------------------------------------------------------------------------
//
// Source code for 'D' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/D/
//
//-----------------------------------------------------------------------------

#include <cmath>
#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    int x = (pow(c, 2) - b) / a;
    if (c < 0 || (a == 0 && sqrt(b) != c) || (x * a + b != pow(c, 2))) {
        std::cout << "NO SOLUTION";
    } else if (a == 0 && sqrt(b) == c) {
        std::cout << "MANY SOLUTIONS";
    } else {
        std::cout << x;
    }
}
