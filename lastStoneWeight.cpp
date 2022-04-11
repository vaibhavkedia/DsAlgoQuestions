#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones){
      int n = stones.size();
        priority_queue<int>q;
        for(int i=0;i<n;++i){
            q.push(stones[i]);
        }
        
        while(q.size() > 1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if(a != b) q.push(a-b);
        }
        if(!q.size()) return 0;
        return q.top();
    }
};