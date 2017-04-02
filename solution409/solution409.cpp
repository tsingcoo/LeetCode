//
// Created by 王青龙 on 2017/3/29.
//

#include <vector>
#include "solution409.h"

int Solution409::longestPalindrome(std::string s) {
    std::vector<int> v(128, 0);
    for (auto &a : s) {
        ++v[a];
    }
    int res = s.size();
    int odd = 0;
    for (auto &i : v) {
        res -= i & 1;
        if (i & 1) {
            odd = 1;
        }
    }
    res += odd;
    return res;
}
