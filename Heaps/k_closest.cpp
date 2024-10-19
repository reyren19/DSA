#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> elements;
        priority_queue<pair<int,int>> maxHeap; // we make max heap because the numbers with larger difference are useless to us here
        for(int i=0; i<n; i++){
            maxHeap.push({abs(arr[i]-x),arr[i]});
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        while(maxHeap.size()!=0){
            elements.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(elements.begin(),elements.end());
        return elements;
    }
};