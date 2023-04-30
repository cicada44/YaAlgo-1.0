#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int a1, a2, b1, b2, s1, s2, s3, s4;

    std::cin >> a1 >> b1 >> a2 >> b2;

    s1 = (a1 + a2) * ((b1 > b2) ? b1 : b2);
    s2 = (a1 + b2) * ((a2 > b1) ? a2 : b1);
    s3 = (b1 + a2) * ((b2 > a1) ? b2 : a1);
    s4 = (b1 + b2) * ((a1 > a2) ? a1 : a2);

    // std::cout << s1 << ' ' << s2 << ' ' << s3 << ' ' << s4 << ' ' << '\n';

    std::vector<std::pair<int, std::pair<int, int>>> total{
        {s1, {a1 + a2, ((b1 > b2) ? b1 : b2)}},
        {s2, {a1 + b2, ((a2 > b1) ? a2 : b1)}},
        {s3, {b1 + a2, ((b2 > a1) ? b2 : a1)}},
        {s4, {b1 + b2, ((a1 > a2) ? a1 : a2)}}};

    auto min =
        std::min_element(total.begin(), total.end(),
                         [](const std::pair<int, std::pair<int, int>>& p1,
                            const std::pair<int, std::pair<int, int>>& p2) {
                             return p1.first < p2.first;
                         })
            ->second;

    std::cout << min.first << ' ' << min.second;
}
