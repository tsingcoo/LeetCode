//
// Created by 王青龙 on 2017/4/3.
//

#ifndef SOLUTION21_SOLUTION21_H
#define SOLUTION21_SOLUTION21_H

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(nullptr){}
};

class Solution21 {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};


#endif //SOLUTION21_SOLUTION21_H
