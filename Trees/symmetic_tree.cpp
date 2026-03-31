// 101. Symmetric Tree
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
    bool checkTree(TreeNode *r1, TreeNode *r2)
    {
        if (r1 == NULL && r2 == NULL)
            return true;
        if (r1 == NULL || r2 == NULL)
            return false;
        if (r1->val != r2->val)
            return false;
        bool l1 = checkTree(r1->right, r2->left);
        bool l2 = checkTree(r1->left, r2->right);
        if (l1 && l2)
            return true;
        return false;
    }
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        return checkTree(root->left, root->right);
    }
};