#include <bits/stdc++.h> 
using namespace std;

vector < int > nearlySorted(vector < int > nums, int n, int k) {
    // Write your code here.
    vector<int> sortedArr;
        priority_queue<int, vector<int>, greater<int>> minHeap; // making min heap
        for(int i=0; i<n; i++){
            minHeap.push(nums[i]); // pushing all elements to min heap
            if(minHeap.size()>k){
               sortedArr.push_back(minHeap.top());
               minHeap.pop();
            }
        }
    
    int j;
    for(;j<n;j++){ //pushing and popping the rest of the elements
        sortedArr.push_back(minHeap.top());
        minHeap.pop();
    }
    return sortedArr;
}