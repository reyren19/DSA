#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // 1 2 2 3 3 4 7 8 
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> mp;
        for(int i=1; i<=n; i++){
            mp[i] = 0;
        }

        for(auto it: nums){
            mp[it]++;
        }

        for(auto it: mp){
            if(it.second == 0){
                res.push_back(it.first);
            }
        }
        return res;
    }
};