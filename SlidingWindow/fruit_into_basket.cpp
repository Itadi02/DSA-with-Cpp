// 904. Fruit Into Baskets
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int totalFruit(vector<int> &arr)
    {
        int i = 0, j = 0;
        int ml = 0;
        unordered_map<int, int> mp;
        while (j < arr.size())
        {
            mp[arr[j]]++;
            while (mp.size() > 2)
            {
                mp[arr[i]]--;
                if (mp[arr[i]] == 0)
                    mp.erase(arr[i]);
                i++;
            }
            ml = max(ml, j - i + 1);
            j++;
        }
        return ml;
    }
};