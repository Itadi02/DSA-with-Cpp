// 961. N-Repeated Element in Size 2N Array
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int num : nums)
        {
            if (mp.find(num) != mp.end())
                mp[num] = mp[num] + 1;
            else
                mp.emplace(num, 1);
        }
        for (auto num : mp)
        {
            if (num.second == nums.size() / 2)
                return num.first;
        }
        return -1;
    }
};