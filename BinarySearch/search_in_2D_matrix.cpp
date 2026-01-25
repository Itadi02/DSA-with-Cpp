// 704. Binary Search
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    bool search(vector<vector<int>> &matrix, int mid, int target)
    {
        int st = 0, end = matrix[0].size() - 1;
        while (st <= end)
        {
            int m = st + (end - st) / 2;
            if (target == matrix[mid][m])
                return true;
            else if (target > matrix[mid][m])
                st = m + 1;
            else
                end = m - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size();
        int stRow = 0, endRow = m - 1;
        while (stRow <= endRow)
        {
            int mid = stRow + (endRow - stRow) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1])
            {
                // apply binary search
                return search(matrix, mid, target);
            }
            else if (target < matrix[mid][0])
            {
                endRow = mid - 1;
            }
            else
            {
                stRow = mid + 1;
            }
        }
        return false;
    }
};