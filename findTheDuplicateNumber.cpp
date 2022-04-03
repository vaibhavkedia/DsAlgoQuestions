#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int index= = 0;
        for(int i = 0;i<n;i++){
          index = abs(nums[i]) - 1;
          if(nums[index] < 0) return abs(nums[i]);
          nums[index] *= -1;
        }
        return 0;
    }
};