// 374. Guess Number Higher or Lower
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        long long st = 1, end = n;
        while (st <= end)
        {
            long long mid = st + (end - st) / 2;
            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == -1)
                end = mid - 1;
            else
                st = mid + 1;
        }
        return -1;
    }
};