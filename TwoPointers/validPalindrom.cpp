// 125. Valid Palindrome
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <map>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string ans = "";
        for (char c : s)
        {
            if (isalnum(c))
            {
                ans.push_back(tolower(c));
            }
        }
        string rev = ans;

        reverse(rev.begin(), rev.end());
        return rev == ans;
    }
};