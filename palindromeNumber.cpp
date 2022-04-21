#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long rem = 0,rev = 0,original = x;
        while(x != 0){
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }
        return (rev == original);
    }
};