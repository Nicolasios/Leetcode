/*
 * @lc app=leetcode.cn id=606 lang=cpp
 *
 * [606] 根据二叉树创建字符串
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    string tree2str(TreeNode *t)
    {
        if (t == nullptr)
            return "";
        else if (t->right == nullptr && t->left == nullptr)
            return to_string(t->val) + "";
        else if (t->right == nullptr)
            return to_string(t->val) + "(" + tree2str(t->left) + ")";
        else
            return to_string(t->val) + "(" + tree2str(t->left) + ")(" + tree2str(t->right) + ")";
    }
};
// @lc code=end
