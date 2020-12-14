/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = head;
        // 删除头结点
        while (head != nullptr && head->val == val)
        { // 注意这里不是if
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }

        // 删除非头结点
        ListNode *cur = head;
        while (cur != nullptr && cur->next != nullptr)
        {
            if (cur->next->val == val)
            {
                ListNode *tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        return head;
    }
};
// @lc code=end
