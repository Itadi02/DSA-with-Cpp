// 1365. How Many Numbers Are Smaller Than the Current Number
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < nums[i] && j != i)
                    count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};