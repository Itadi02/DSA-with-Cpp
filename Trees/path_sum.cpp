// 112. Path Sum
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
    bool pathSum(TreeNode *root, int targetSum, int s)
    {
        if (root == NULL)
            return false;
        s += root->val;
        if (root->left == NULL && root->right == NULL)
            return targetSum == s;
        bool l = pathSum(root->left, targetSum, s);
        bool r = pathSum(root->right, targetSum, s);
        return (l || r);
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int s = 0;
        return pathSum(root, targetSum, s);
    }
};