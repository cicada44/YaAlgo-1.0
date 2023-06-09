//-----------------------------------------------------------------------------
//
// Source code for 'D' task from contest №2 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27472/problems/D/
//
//-----------------------------------------------------------------------------

#include <cmath>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    int tmp;
    while (std::cin >> tmp) { vec.push_back(tmp); }

    int num = 0;

    for (auto i = std::next(vec.begin()); i != vec.end(); ++i) {
        if (*i > *(i - 1) && *i > *(i + 1) && i != std::prev(vec.end())) { ++num; }
    }

    std::cout << num;
}
