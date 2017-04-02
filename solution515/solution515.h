//
// Created by 王青龙 on 2017/4/2.
//

#ifndef SOLUTION515_SOLUTION515_H
#define SOLUTION515_SOLUTION515_H

#include <vector>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class solution515 {
public:
    std::vector<int> largestValues(TreeNode* root);
    void helper(TreeNode* root, int row);

private:
    std::vector<int> res;
};


#endif //SOLUTION515_SOLUTION515_H
