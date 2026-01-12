#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> dict; // taking a map
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i]; // finding the difference
            if (dict.count(diff))        // checking the diff is present or not
            {
                return {dict[diff], i}; // returning the index
            }
            dict[nums[i]] = i; // not present add the element and index
        }
        return {};
    }
};