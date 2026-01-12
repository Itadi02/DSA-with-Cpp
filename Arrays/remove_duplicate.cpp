// Remove Duplicates from Sorted Array
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (ans.empty() || ans.back() != nums[i])
            {
                ans.push_back(nums[i]);
            }
        }
        return ans.size();
    }
};
