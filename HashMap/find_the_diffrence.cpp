// 389. Find the Difference
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> map;
        for (int i = 0; i < t.length(); i++)
            map[t[i]]++;

        for (int i = 0; i < s.length(); i++)
            map[s[i]]--;

        for (auto ele : map)
            if (ele.second != 0)
                return ele.first;
        return NULL;
    }
};