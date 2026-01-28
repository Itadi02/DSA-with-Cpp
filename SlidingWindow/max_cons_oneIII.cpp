//1004. Max Consecutive Ones III
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int i=0,j=0;
      int length=0;
      int zero=0;
      while(j<nums.size()){
        if(nums[j] == 0)
        zero++;
        while(zero>k){
            if(nums[i]==0)
            zero--;
            i++;
        }
        length=max(length,j-i+1);
        j++;
      }
      return length;
    }
};