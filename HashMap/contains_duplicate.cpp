// 217. Contains Duplicate
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int num : nums)
            mp[num]++;
        for (auto elem : mp)
            if (elem.second > 1)
                return true;
        return false;
    }
};