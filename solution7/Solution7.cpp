//
// Created by 王青龙 on 2017/4/3.
//

#include "Solution7.h"

int Solution7::reverse(int x) {

    long reverseNum = 0;

    while (x != 0) {
        reverseNum = reverseNum * 10 + x % 10;
        x /= 10;
    }

    return ((int) reverseNum == reverseNum) * reverseNum;
}
