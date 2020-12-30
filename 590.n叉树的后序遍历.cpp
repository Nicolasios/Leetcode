/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
public:
    vector<int> postorder(Node *root)
    {
        travese(root);
        return postorderNum;
    }

private:
    vector<int> postorderNum;
    void travese(Node *root)
    {
        if (root != nullptr)
        {
            int childNum = root->children.size();
            for (int i = 0; i < childNum; i++)
            {
                travese(root->children[i]);
            }
            postorderNum.push_back(root->val);
        }
    }
};
// @lc code=end
