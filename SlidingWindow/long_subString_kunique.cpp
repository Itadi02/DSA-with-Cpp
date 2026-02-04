// Longest Substring with K Uniques
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        // code here
        int i = 0, j = 0;
        int length = -1;
        unordered_map<int, int> mp;
        while (j < s.size())
        {
            mp[s[j]]++;
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            if (mp.size() == k)
                length = max(length, j - i + 1);
            j++;
        }
        return length;
    }
};