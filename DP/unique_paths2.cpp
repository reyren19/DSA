#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(int m, int n, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp) {
        if (m == 0 && n == 0) return 1; // Reached the top-left corner (source)
        if (m < 0 || n < 0 || obstacleGrid[m][n] == 1) return 0; // Out of bounds or obstacle encountered
        if (dp[m][n] != -1) return dp[m][n]; // If already computed, return the stored value

        int up = helper(m - 1, n, obstacleGrid, dp);
        int right = helper(m, n - 1, obstacleGrid, dp);
        dp[m][n] = up + right; // Store the result in the DP array for memoization
        return dp[m][n];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1) return 0; //if obstacle is at starting pos
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1)); // DP array with initial value -1
        return helper(m - 1, n - 1, obstacleGrid, dp); // Start the recursive computation from the bottom-right corner
    }
};