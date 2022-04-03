#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size = nums.size();
        int l = 0;
        int r = size-1;

        while(l<=r){
          int mid = (l+r)/2;
          if(target == nums[mid]) return true;

           if(nums[mid] == nums[l]){
              l++;
              continue;
          }

          if(nums[l] <= nums[mid]){
            if(target >= nums[l] && target < nums[mid]){
              r = mid-1;
            }
            else l = mid+1;
          }
          else{
            if(nums[mid] < target && nums[r] >= target ){
              l = mid+1;
            }
            else r = mid-1;
          }
        }
       
        return false;
    }
};