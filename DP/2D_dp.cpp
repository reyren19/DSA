#include<bits/stdc++.h>
using namespace std;
int solveMem(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp) {
    // Base case: If either the index or the capacity becomes 0 or less, return 0 (no value can be obtained).
    if (index < 0 || capacity <= 0) {
        return 0;
    }
    
    // If the result for the current index and capacity is already calculated (memoization),
    // return the stored result to avoid redundant computation.
    if (dp[index][capacity] != -1) {
        return dp[index][capacity];
    }
    
    int include = 0;
    // If the weight of the current item is less than or equal to the remaining capacity,
    // try including the item in the knapsack and recursively find the value for the remaining capacity.
    if (weight[index] <= capacity) {
        include = value[index] + solveMem(weight, value, index - 1, capacity - weight[index], dp);
    }
    
    // Try excluding the current item from the knapsack and recursively find the value for the remaining capacity.
    int exclude = solveMem(weight, value, index - 1, capacity, dp);
    
    // Store the maximum value between including and excluding the current item for the given index and capacity.
    dp[index][capacity] = max(include, exclude);
    
    // Return the maximum value that can be obtained for the given index and capacity.
    return dp[index][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
    // Initialize a 2D DP array to store results of subproblems.
    // dp[i][j] represents the maximum value that can be obtained by considering items up to index i
    // with a maximum capacity of j in the knapsack.
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
    
    // Call the helper function `solveMem` to find the maximum value that can be obtained for the entire knapsack.
    // The helper function considers items up to index (n - 1) and the maximum capacity of maxWeight.
    return solveMem(weight, value, n - 1, maxWeight, dp);
}
