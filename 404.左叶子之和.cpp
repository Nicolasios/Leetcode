/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    bool isLeafNode(TreeNode *Node)
    {
        return (Node->left == nullptr && Node->right == nullptr) ? true : false;
    }
    int dfs(TreeNode *root)
    {
        int res = 0;
        if (root->left)
        {
            res += isLeafNode(root->left) ? root->left->val : dfs(root->left);
        }
        //右子树不为空且不为叶子节点
        if (root->right && !isLeafNode(root->right))
        {
            res += dfs(root->right);
        }
        return res;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        return root ? dfs(root) : 0;
    }
};
// @lc code=end
