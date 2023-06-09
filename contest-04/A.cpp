//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №4 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27665/problems/A/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <map>
#include <string>

int main() {
    int n;

    std::map<std::string, std::string> m;
    std::string s1, s2;

    std::cin >> n;

    for (int i = 0; i != n; ++i) {
        std::cin >> s1 >> s2;
        m.insert(std::make_pair(s1, s2));
        m.insert(std::make_pair(s2, s1));
    }

    std::string to_find;
    std::cin >> to_find;

    std::cout << m.at(to_find) << '\n';
}
