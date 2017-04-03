//
// Created by 王青龙 on 2017/4/3.
//

#ifndef SOLUTION199_SOLUTION199_H
#define SOLUTION199_SOLUTION199_H

#include <vector>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution199 {
public:
    std::vector<int> rightSideView(TreeNode* root);
    void helper(TreeNode *root, int row);

private:
    std::vector<int> res;
};


#endif //SOLUTION199_SOLUTION199_H
