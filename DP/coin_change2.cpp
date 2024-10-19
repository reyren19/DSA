#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   /* int helper(int ind, int amt, vector<int> coins, vector<vector<int>> &dp){
        if(ind==0){
            if(amt%coins[0]==0) return 1;
            else{
                return 0;
            }
        }
            if(dp[ind][amt]!=-1) return dp[ind][amt];
            int notTake = helper(ind-1, amt, coins, dp);
            int take = 0;
            if(amt>=coins[ind]){
                take = helper(ind, amt-coins[ind], coins,dp);
            }
            dp[ind][amt] = take+notTake;
            return dp[ind][amt];
        
    } */
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, 0));
        // return helper(n-1,amount,coins,dp);
        for(int i=0; i<=amount; i++){
            dp[0][i] = i%coins[0]==0; //this will return 1
        }
        for(int ind=1; ind<n; ind++){
            for(int amt=0; amt<=amount; amt++){
                int notTake = dp[ind-1][amt];
                int take = 0;
                if(amt>=coins[ind]){
                    take = dp[ind][amt-coins[ind]];
                }
                dp[ind][amt]= take+notTake;
            }
        }
        return dp[n-1][amount];

    }
};