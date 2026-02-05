// 1358. Number of Substrings Containing All Three Characters
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        vector<int> freq(3, -1);
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a'] = i;
            if (freq[0] != -1 && freq[1] != -1 && freq[2] != -1)
            {
                count += 1 + min(freq[0], min(freq[1], freq[2]));
            }
        }
        return count;
    }
};