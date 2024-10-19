#include<iostream>
#include<vector>
using namespace std;
#define MOD 1000000007
long long int helper(int n, vector<int> &dp){
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = ((((n-1)%MOD)*((helper(n-1,dp)%MOD)+(helper(n-2,dp)%MOD)))%MOD); //using mod for larger numbers and test cases
    return dp[n];
}

long long int countDerangements(int n) {
    // Write your code here.
    vector<int> dp(n+1,-1);
    return helper(n,dp);
}