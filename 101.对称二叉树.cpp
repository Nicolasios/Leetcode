/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        return compare(root->left, root->right);
    }
    bool compare(TreeNode *leftNode, TreeNode *rightNode)
    {
        //递归的终止条件是两个节点都为空
        //或者两个节点中有一个为空
        //或者两个节点的值不相等
        if (leftNode == nullptr && rightNode == nullptr)
            return true;
        else if (leftNode == nullptr || rightNode == nullptr)
            return false;
        if (leftNode->val != rightNode->val)
            return false;
        //再递归的比较 左节点的左孩子 和 右节点的右孩子
        //以及比较  左节点的右孩子 和 右节点的左孩子
        return compare(leftNode->left, rightNode->right) && compare(leftNode->right, rightNode->left);
    }
};
// @lc code=end
