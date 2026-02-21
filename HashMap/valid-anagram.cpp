// 242. Valid Anagram
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> mp;
        for (char ch : s)
        {
            mp[ch]++;
        }
        for (char ch : t)
            mp[ch]--;
        for (auto elem : mp)
            if (elem.second != 0)
                return false;
        return true;
    }
};