#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        int moves = 0;
        for(int num: nums){
            if(mp.count(num)>0){ // if an element is present more than once, we need to change it
                while(mp[num]>0){
                    num++; //increment the element till it is unique 
                    moves++; //increment the moves
                }
            }
            mp[num]++;
        }

        return moves;
    }
};