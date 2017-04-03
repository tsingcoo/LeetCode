//
// Created by 王青龙 on 2017/4/3.
//

#include "Solution94.h"

std::vector<int> Solution94::inorderTraversal(TreeNode *root) {

    std::vector<int> res;

    if(root == nullptr){
        return res;
    } else{
        helper(root, res);
        return res;
    }

}

void Solution94::helper(TreeNode *root, std::vector<int> &res) {
    if(root != nullptr){
        helper(root->left, res);
        res.push_back(root->val);
        helper(root->right, res);
    } else{
        return;
    }
}
