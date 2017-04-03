//
// Created by 王青龙 on 2017/4/3.
//

#ifndef SOLUTION100_SOLUTION100_H
#define SOLUTION100_SOLUTION100_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution100 {
public:
    bool isSameTree(TreeNode *p, TreeNode *q);
};

#endif //SOLUTION100_SOLUTION100_H
