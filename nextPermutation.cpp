#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for(int i=nums.size()-1;i>0;--i){
            if(nums[i] > nums[i-1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1) reverse(nums.begin(),nums.end());
        else{
            int prev = pivot;
            for(int i=pivot+1;i<nums.size();++i){
                if(nums[i] <= nums[pivot] && nums[i] > nums[pivot-1]){
                    prev = i;
                }
            }
            swap(nums[prev],nums[pivot-1]);
            reverse(nums.begin()+pivot,nums.end());
        }
    }
};