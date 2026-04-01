// 226. Invert Binary Tree
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
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return root;
        TreeNode *curr1 = NULL;
        TreeNode *curr2 = NULL;
        if (root->left != NULL)
        {
            curr1 = root->left;
        }
        if (root->right != NULL)
            curr2 = root->right;
        root->left = curr2;
        root->right = curr1;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};