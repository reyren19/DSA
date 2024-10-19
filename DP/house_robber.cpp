#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return helper(nums, nums.size() - 1, dp);
    }

    int helper(vector<int>& nums, int ind, vector<int> &dp) {
        if (ind < 0) {
            return 0;
        }
        if(dp[ind]!=-1) return dp[ind];
        int pick = nums[ind] + helper(nums, ind - 2,dp); // if the robber picks, he cant pick adjacent house
        int notPick = helper(nums, ind - 1,dp); //if he does not pick, he can pick adjacent house but sum is not added
        dp[ind] = max(pick,notPick);
        return dp[ind]; 
    }
};
