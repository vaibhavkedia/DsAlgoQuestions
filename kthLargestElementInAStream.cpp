#include<bits/stdc++.h>
using namespace std;

class KthLargest {
	multiset<int> s;
    multiset<int>::iterator kPointer;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i : nums) s.insert(-1*i);
        
        s.insert(INT_MAX);
        kPointer = s.begin();
        
        for(int i=1;i<k;++i){
            ++kPointer;
        }
    }
    
    int add(int val){
        val *= -1;
        s.insert(val);
        
        if(val < *kPointer) --kPointer;
        
        return -1 * (*kPointer);
    }
};