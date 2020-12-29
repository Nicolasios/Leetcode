/*
 * @lc app=leetcode.cn id=559 lang=cpp
 *
 * [559] N叉树的最大深度
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;
*/

class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root != nullptr)
        {
            int childnum = root->children.size();
            int maxsubDepth = 0;
            for (int i = 0; i < childnum; i++)
            {
                maxsubDepth = max(maxsubDepth, maxDepth(root->children[i]));
            }
            return maxsubDepth + 1;
        }
        else
        {
            return 0;
        }
    }
};
// @lc code=end
