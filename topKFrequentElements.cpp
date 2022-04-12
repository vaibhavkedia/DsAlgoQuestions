#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
      vector<int>ans;
      unordered_map<int,int>m;
      priority_queue<pair<int,int>>p;

      for(int i : nums){
        m[i]++;
      }

      for(pair<int,int>i : m){
        p.push(make_pair(i.second,i.first));
      }

      while(k--){
        ans.push_back(p.top().second);
        p.pop();
      }

      return ans;
    }
};