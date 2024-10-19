#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int helper(int i, int j, vector<vector<int>> &dp,vector<vector<int>>& grid){
        if(i==0 && j==0) return grid[0][0];
        if(i<0 || j<0) return INT_MAX; //return a very large value so this is not taken in consideration
        if(dp[i][j]!=-1) return dp[i][j];
      long long  int up = grid[i][j] + helper(i-1,j,dp,grid);
      long long  int left = grid[i][j] + helper(i,j-1,dp,grid);
        dp[i][j] = min(up,left);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(m-1,n-1,dp,grid);
    }
};