#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> vec(m,vector<int>(n));
        int count = 0;
        int dx[8] = {0,1,0,-1,-1,-1,1,1};
        int dy[8] = {1,0,-1,0,-1,1,1,-1};
        
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                vec[i][j] = board[i][j];
            }
        }
        
        for(int i = 0;i<m;++i){
            for(int j = 0;j<n;++j){
                count = 0;
                for(int k=0;k<8;++k){
                    int x = i+dx[k];
                    int y = j+dy[k];
                    if(x>=0 && x<m && y>=0 && y<n){
                        count += vec[x][y];
                    }
                }
                if(vec[i][j] == 1){
                    if(count < 2) board[i][j] = 0;
                    if(count > 3) board[i][j] = 0;
                    if(count == 2 || count == 3) board[i][j] = 1;
                }
                else if(vec[i][j] == 0) {
                    if(count == 3) board[i][j] = 1;
                }
            }
        }
        return;
        
    }
};