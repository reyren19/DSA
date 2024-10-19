#include<vector>
using namespace std;
	long long int helper(vector<int> &nums, int ind, int k, vector<vector<long long int>> &dp){
        if(k==0) return 1;
        if(ind ==0){
            if(nums[0]==k) return 1;
            else return 0;
        }
        if(dp[ind][k]!=-1) return dp[ind][k];
        long long int notTake = helper(nums, ind-1, k, dp);
        long long int take = 0;
        if(k>=nums[ind]){
            take = helper(nums, ind-1, k-nums[ind], dp);
        }
        dp[ind][k]= take+notTake;
        return dp[ind][k];
    }

long long int findWays(vector<int>& nums, int k)
{
        int n = nums.size();
        vector<vector<long long int>> dp(n, vector<long long int>(k+1,-1));
        return helper(nums, n-1, k, dp);	
}
