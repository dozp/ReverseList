#ifndef REVERSE_LIST_H
#define REVERSE_LIST_H
#include <cstdio>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) ;
        
};
#endif
