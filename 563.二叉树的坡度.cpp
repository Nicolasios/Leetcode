/*
 * @lc app=leetcode.cn id=563 lang=cpp
 *
 * [563] 二叉树的坡度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int findTilt(TreeNode *root)
    {
        if (root != nullptr)
        {
            return std::abs(dfs(root->left) - dfs(root->right)) + findTilt(root->left) + findTilt(root->right);
        }
        else
        {
            return 0;
        }
    }

private:
    int dfs(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        else
            return root->val + dfs(root->left) + dfs(root->right);
    }
};
// @lc code=end
