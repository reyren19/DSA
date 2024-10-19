#include <bits/stdc++.h> 
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    // Tabulation method
   /* vector<int> dp(n,0);
    dp[0] = 0;
    for(int i=1; i<n; i++){
    int left = dp[i-1] + abs(heights[i]-heights[i-1]); // for when he jumps 1
    int right = INT_MAX;
    if(i>1) right = dp[i-2] + abs(heights[i]-heights[i-2]); // for when he jumps 2
    dp[i] = min(left,right);
    } */


// Space optimization method 
    int prev2 =0;
    int prev1 =0;
    for (int i = 1; i < n; i++) {
      int left =
          prev1 + abs(heights[i] - heights[i - 1]); // for when he jumps 1
      int right = INT_MAX;
      if (i > 1)
        right = prev2 + abs(heights[i] - heights[i - 2]); // for when he jumps 2
      int curr = min(left, right);
      prev2=prev1;
      prev1=curr;
    }
    return prev1;
}