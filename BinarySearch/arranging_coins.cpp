// 441. Arranging Coins
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {
        int st = 0, end = n;
        long long ans = 0;
        while (st <= end)
        {
            long long mid = st + (end - st) / 2;
            long long coin = (mid * (mid + 1)) / 2;
            if (coin <= n)
            {
                ans = mid;
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};