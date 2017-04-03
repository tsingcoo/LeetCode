//
// Created by 王青龙 on 2017/4/3.
//

#ifndef SOLUTION94_SOLUTION94_H
#define SOLUTION94_SOLUTION94_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution94 {
public:
    std::vector<int> inorderTraversal(TreeNode *root);

    void helper(TreeNode *root, std::vector<int> &res);
};


#endif //SOLUTION94_SOLUTION94_H
