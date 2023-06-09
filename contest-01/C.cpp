//-----------------------------------------------------------------------------
//
// Source code for 'C' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/C/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void clean(std::string& s1, std::string& s2, std::string& s3, std::string& base) {
    char stop_sym[] = {'-', '(', ')', '+'};

    for (const char& i : stop_sym) {
        s1.erase(std::remove(s1.begin(), s1.end(), i), s1.end());
        s2.erase(std::remove(s2.begin(), s2.end(), i), s2.end());
        s3.erase(std::remove(s3.begin(), s3.end(), i), s3.end());
        base.erase(std::remove(base.begin(), base.end(), i), base.end());
    }
}

void replace_first(std::string& s1) {
    if (s1[0] == 8 || (s1[0] == 7 && s1.size() == 11)) {
        s1.erase(s1.begin());
    } else {
        s1.insert(0, "495");
    }
}

int main() {
    std::string n1, n2, n3, base;

    std::cin >> base >> n1 >> n2 >> n3;

    clean(n1, n2, n3, base);
    replace_first(base);
    replace_first(n1);
    replace_first(n2);
    replace_first(n3);

    for (const std::string& c : std::vector<std::string>{n1, n2, n3}) {
        if (c != base) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
}
