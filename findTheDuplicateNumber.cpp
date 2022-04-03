#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        for(int i = 0;i<n;i++){
          index = abs(nums[i]) - 1;
          if(nums[index] < 0) return abs(nums[i]);
          nums[index] *= -1;
        }
        return 0;
    }
};

int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;++i){
    cin>>nums[i];
  }

  Solution solution;
  cout << solution.findDuplicate(nums) <<endl;;

  return 0;
}