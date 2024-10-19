/*
1) Pick a pivot element
2) Place it at its correct position
3) Smaller on left and larger on right
4) do in subarrays
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int partition(vector<int> &arr, int low, int high){
        int pivot = arr[low];
        int  i=low;
        int j = high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1) {
                i++;
            }
            while(arr[j]>pivot && j>=low+1) {
                j--;
            }
            if(i<j){
                swap(arr[i], arr[j]);
            }     
        }
        swap(arr[low], arr[j]);
        return j;
    }
    void qs(vector<int> &nums, int low, int high){
        while(low<high){
            int pIndex = partition(nums, low, high);
            qs(nums, low, pIndex-1);
            qs(nums, pIndex+1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size()-1);
        return nums;
    }
};
