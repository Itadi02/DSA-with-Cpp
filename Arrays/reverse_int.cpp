// 7. Reverse Integer
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int digit = 0;
        int n = x;
        while (n != 0)
        {
            if (digit > INT_MAX / 10 || (digit < INT_MIN / 10))
                return 0;
            digit = digit * 10 + n % 10;
            n /= 10;
        }
        return digit;
    }
};