/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
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
    vector<int> preorder(Node *root)
    {
        travese(root);
        return preorderNum;
    }

private:
    vector<int> preorderNum;
    void travese(Node *root)
    {
        if (root != nullptr)
        {
            int childNum = root->children.size();
            preorderNum.push_back(root->val);
            for (int i = 0; i < childNum; i++)
            {
                travese(root->children[i]);
            }
        }
    }
};
// @lc code=end
