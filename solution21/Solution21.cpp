//
// Created by 王青龙 on 2017/4/3.
//

#include "Solution21.h"

ListNode *Solution21::mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr) {
        return l2;
    }
    if (l2 == nullptr) {
        return l1;
    }


    auto p = l1;
    if (l1->val < l2->val) {
        p = l1;
        l1 = l1->next;
    } else {
        p = l2;
        l2 = l2->next;
    }

    auto q = p;

    while (l1->next != nullptr && l2->next != nullptr) {
        if (l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
            p = p->next;
        } else {
            p->next = l2;
            l2 = l2->next;
            p = p->next;
        }
    }

    if (l1->next != nullptr) {
        p->next = l1->next;
    } else {
        p->next = l2->next;
    }

    return q;
}
