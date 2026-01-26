// 2461. Maximum Sum of Distinct Subarrays With Length K

#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        unordered_set<int> s;
        int j = 0, i = 0;
        long long sum = 0;
        long long currSum = 0;
        while (j < nums.size())
        {
            while (s.count(nums[j]))
            {
                s.erase(nums[i]);
                currSum -= nums[i];
                i++;
            }
            s.insert(nums[j]);
            currSum += nums[j];
            if (j - i + 1 == k)
            {
                sum = max(currSum, sum);
                s.erase(nums[i]);
                currSum -= nums[i];
                i++;
            }
            j++;
        }
        return sum;
    }
};