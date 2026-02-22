// 868. Binary Gap
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int binaryGap(int n)
    {
        int curr = 0, prev = -1;
        int res = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                if (prev != -1)
                {
                    res = max(res, curr - prev);
                }
                prev = curr;
            }
            curr++;
            n >>= 1;
        }
        return res;
    }
};