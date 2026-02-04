// 209. Minimum Size Subarray Sum

#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int length = nums.size() + 1;
        int i = 0, j = 0;
        int sum = 0;
        while (j < nums.size())
        {
            sum += nums[j];
            while (sum >= target)
            {
                sum -= nums[i];
                length = min(length, j - i + 1);
                i++;
            }
            j++;
        }
        if (length == nums.size() + 1)
            return 0;
        return length;
    }
};