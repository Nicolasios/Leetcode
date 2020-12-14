/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == nullptr || headB == nullptr)
            return nullptr;

        ListNode *cur_a = headA;
        ListNode *cur_b = headB;

        while (cur_a != cur_b)
        {
            cur_a = (cur_a ? cur_a->next : headB);
            cur_b = (cur_b ? cur_b->next : headA);
        }

        return cur_a;
    }
};
// @lc code=end
