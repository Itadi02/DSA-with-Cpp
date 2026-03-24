// 144. Binary Tree Preorder Traversal
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    // TreeNode(int x) : val(x), lteft, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> s;
        vector<int> ans;
        if (root == NULL)
            return ans;
        s.push(root);
        while (!s.empty())
        {
            TreeNode *curr = s.top();
            s.pop();
            ans.push_back(curr->val);
            if (curr->right != NULL)
                s.push(curr->right);
            if (curr->left != NULL)
                s.push(curr->left);
        }
        return ans;
    }
};