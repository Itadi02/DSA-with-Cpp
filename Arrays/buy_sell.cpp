// 21. Best Time to Buy and Sell Stock
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &p)
    {
        int buy = p[0], max_profit = 0;
        for (int i = 1; i < p.size(); i++)
        {
            int curr = p[i];
            max_profit = max(max_profit, curr - buy);
            if (buy > curr)
                buy = curr;
        }
        return max_profit;
    }
};