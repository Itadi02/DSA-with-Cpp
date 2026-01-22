// 567. Permutation in String
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <map>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n = s1.size(), m = s2.size();
        map<char, int> m1;
        for (int i = 0; i < n; i++)
        {
            m1[s1[i]]++;
        }
        int i = 0, j = 0, matchedCharCount = 0;
        while (j < m)
        {
            if (m1.find(s2[j]) != m1.end())
            {
                m1[s2[j]]--;
                if (m1[s2[j]] == 0)
                {
                    matchedCharCount++;
                }
            }
            if (j - i + 1 == n)
            {
                if (matchedCharCount == m1.size())
                {
                    return 1;
                }
                if (m1.find(s2[i]) != m1.end())
                {
                    m1[s2[i]]++;
                    if (m1[s2[i]] == 1)
                    {
                        matchedCharCount--;
                    }
                }
                i++;
            }
            j++;
        }
        return 0;
    }
};