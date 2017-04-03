//
// Created by 王青龙 on 2017/4/3.
//

#include "solution100.h"

bool Solution100::isSameTree(TreeNode *p, TreeNode *q) {
    if (p == nullptr || q == nullptr) {
        return (p == q);
    } else {
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
}
