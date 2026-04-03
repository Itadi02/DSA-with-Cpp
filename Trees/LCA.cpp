// 236. Lowest Common Ancestor of a Binary Tree
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
    TreeNode *ans = NULL;
    int LCA(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
            return 0;
        int left = LCA(root->left, p, q);
        int right = LCA(root->right, p, q);
        int self = 0;
        if (root == p || root == q)
            self = 1;
        int total = self + left + right;
        if (total == 2 && ans == NULL)
            ans = root;
        return total;
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        LCA(root, p, q);
        return ans;
    }
};