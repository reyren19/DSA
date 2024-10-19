#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{3,6,5,13,2};
    int i=0, k=2;
    int j=i;
    while(j<nums.size()){
        j=j+k;
        swap(nums[i], nums[j]);
        i++;
    }
    if(j>=nums.size()){
        j=0;
    }
    for(int x: nums){
        cout<<x<<" ";
    }
 return 0;
}