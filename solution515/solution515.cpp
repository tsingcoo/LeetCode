//
// Created by 王青龙 on 2017/4/2.
//

#include "solution515.h"

std::vector<int> solution515::largestValues(TreeNode *root) {
    if (root == nullptr) {
        return res;
    }
    helper(root, 0);
    return res;
}

void solution515::helper(TreeNode *root, int row) {
    if (root == nullptr) {
        return;
    }
    if (res.size() < row + 1) {
        res.push_back(root->val);
    } else {
        if (root->val > res[row]) {
            res[row] = root->val;
        }
    }
    helper(root->left, row + 1);
    helper(root->right, row + 1);
}
