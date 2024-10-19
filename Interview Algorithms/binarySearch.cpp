#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end){
    int mid = (start+end)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]>target){
       return binarySearch(arr, target, start, mid-1);
    }
    else if(arr[mid]<target){
       return binarySearch(arr, target, mid+1, end);
    }
    return -1;
}

int main() {
vector<int> arr{5,8,12,15,24};
cout<<binarySearch(arr, 24, 0, arr.size()-1);
return 0;
}  