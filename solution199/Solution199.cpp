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
    }
    if (root->left != nullptr) {
        if (res.size() < row + 1) {
            res.push_back(root->val);
        }
        res[row] = root->val;
    }
    if (root->right != nullptr) {
        if (res.size() < row + 1) {
            res.push_back(root->val);
        }
        res[row] = root->val;
    }
}
