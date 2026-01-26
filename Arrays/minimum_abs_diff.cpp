// 1200. Minimum Absolute Difference
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int min = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (abs(arr[i + 1] - arr[i]) < min)
            {
                min = abs(arr[i + 1] - arr[i]);
            }
        }
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (abs(arr[i + 1] - arr[i]) <= min)
            {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};