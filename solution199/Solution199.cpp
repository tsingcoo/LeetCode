//
// Created by 王青龙 on 2017/4/3.
//

#include "Solution199.h"

std::vector<int> Solution199::rightSideView(TreeNode *root) {

    if (root == nullptr) {
        return res;
    }

    helper(root, 0);
    return res;

}

void Solution199::helper(TreeNode *root, int row) {
    if (root == nullptr) {
        return;
    } else {
        if (res.size() < row + 1) {
            res.push_back(root->val);
        } else {
            res[row] = root->val;
        }

    }
    helper(root->left, row + 1);
    helper(root->right, row + 1);
}
