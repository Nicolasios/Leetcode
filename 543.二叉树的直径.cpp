/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int res;
    //获取左右子树深度，并且返回当前节点的深度
    int getDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int L = getDepth(root->left);
        int R = getDepth(root->right);
        //路劲为包括自身
        res = max(res, L + R + 1);
        return max(L, R) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        res = 1;
        getDepth(root);
        return res - 1;
    }
};
// @lc code=end
