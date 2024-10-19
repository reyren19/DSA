#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthSmallest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i=0; i<n; i++){
            minHeap.push(nums[i]);
            if(minHeap.size()>k){ //it just works that way, the top element at the end is the one which is kth largest
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};
