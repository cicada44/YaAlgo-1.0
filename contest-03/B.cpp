#include <algorithm>
#include <cstdio>
#include <iostream>
#include <limits>
#include <set>

int main() {
    std::set<int> s1;
    std::set<int> s2;

    int inputable;
    char end;
    do {
        scanf("%d%c\n", &inputable, &end);
        s1.insert(inputable);
    } while (end != '\n');
    do {
        scanf("%d%c\n", &inputable, &end);
        s2.insert(inputable);
    } while (end != '\n');

    for (const auto& c : s1) {
        if (s2.find(c) != s2.end()) { std::cout << c << ' '; }
    }

    std::cout << '\n';
}
