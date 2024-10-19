#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // pick an element 
        // now basically do 2 sum on the rest of the array to look for a sum which is -(element)
        set<vector<int>> ans; // using a set to make sure unique constraint is followed
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){ // we need atleast two elements at the end
            int target = nums[i];
            int start = i+1;
            int end = n-1;
            while(start<end){
            if(nums[start] + nums[end] == -target) {
                    vector<int> sumFound;
                    sumFound.push_back(target); 
                    sumFound.push_back(nums[start]);
                    sumFound.push_back(nums[end]);
                    ans.insert(sumFound);
                    start++;
                    end--;
                } else if(nums[start] + nums[end] < -target) {
                    start++;
                } else {
                    end--;
                }
            }
        }
        vector<vector<int>> result(ans.begin(), ans.end()); // converting set to vector of vectors
        return result;
    }
};