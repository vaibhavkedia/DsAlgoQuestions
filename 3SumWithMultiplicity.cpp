#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target){
      long ans = 0;
      int n = arr.size();
      int mod = 1e9+7;
      arr.sort(arr.begin(),arr.end());

      for(int i=0;i<n-2;++i){
        int sum = target - arr[i];
        int j = i+1;
        int k = n-1;
        while(j<k){
          int currentSum = arr[j] + arr[k];
          if(currentSum == sum){
          int prevJ = j;
          int prevK = k;
          while(j+1 < k && arr[j] == arr[j+1]) ++j;
          while(k-1 < j && arr[k] == arr[k-1]) --k;
          if(arr[j] == arr[k]){
            int totalCount = j-prevJ+1+prevK-k+1;
            ans += ((totalCount * (totalCount-1))/2)%mod;
          }else{
            ans += ((j-prevJ+1) * (prevK-k+1))%mod;
          }
          ++j;
          --k;
          }
          else if(currentSum > sum) --k;
          else ++j;
        }
      }
      return ans%mod;
    }
};