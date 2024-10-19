#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v, int m){
    int s=m+1, e= v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(70);
    v.push_back(160);
    v.push_back(90);
    v.push_back(110);
    vector<int> ans = reverse(v,3);
    for(int i: ans){
        cout<<i<<" ";
    }
 return 0;
}