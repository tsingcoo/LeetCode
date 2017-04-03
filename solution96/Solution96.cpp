//
// Created by 王青龙 on 2017/4/3.
//

#include <vector>
#include "Solution96.h"

int Solution96::numTrees(int n) {
    std::vector<int> res(n + 1, 0);
    res[0] = 1;
    res[1] = 1;
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i] += res[j] * res[i - j - 1];
        }
    }
    return res[n];
}
