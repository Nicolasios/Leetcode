/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> paths;
        getPath(root, "", paths);
        return paths;
    }
    void getPath(TreeNode *root, string path, vector<string> &paths)
    {
        if (root != nullptr)
        {
            path += to_string(root->val);
            if (root->right == nullptr && root->left == nullptr)
                paths.push_back(path);
            else
            {
                path += "->";
                getPath(root->left, path, paths);
                getPath(root->right, path, paths);
            }
        }
    }
};
// @lc code=end
