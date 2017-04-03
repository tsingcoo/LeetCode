//
// Created by 王青龙 on 2017/4/3.
//

#include "Solution7.h"

int Solution7::reverse(int x) {

    int reverseNum = 0;

    int q = 0;
    q = (x < 0 ? -1 : 1);

    while (x != 0) {
        reverseNum = reverseNum * 10 + x % 10;
        x /= 10;
    }

    return reverseNum * q;
}
