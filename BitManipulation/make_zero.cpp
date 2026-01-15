// 2571. Minimum Operations to Reduce an Integer to 0
class Solution
{
public:
    int minOperations(int n)
    {
        int temp = n, count = 0;
        while (temp > 0)
        {
            if ((temp & 1) == 0)
            {
                temp >>= 1;
            }
            else
            {
                if ((temp & 3) == 3)
                {
                    temp += 1;
                    count += 1;
                }
                else
                {
                    temp -= 1;
                    count += 1;
                }
            }
        }
        return count;
    }
};