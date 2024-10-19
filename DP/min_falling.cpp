#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(int i, int j, int m, int n, vector<vector<int>> matrix, vector<vector<int>> &dp){
        if(j<0 || j>n-1) return 1e9;
        if(i==0) return matrix[0][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int up = matrix[i][j] + helper(i-1, j, m, n, matrix, dp);
        int diagL = matrix[i][j] + helper(i-1, j-1, m, n, matrix, dp);
        int diagR = matrix[i][j] + helper(i-1, j+1, m, n, matrix, dp);
        dp[i][j] = min(up, min(diagL,diagR));
        return dp[i][j];
    } 
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 1e9;
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));

        for(int j=0; j<n; j++){
            ans = min(ans, helper(m-1,j,m,n,matrix,dp));
        }
        return ans;
    }
};