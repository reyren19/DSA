#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{13,2,0,15,0,0,0};
    vector<int> ans;
    for(int i=0; i<v.size(); i++){
        if(v[i]!= 0){
            ans.push_back(v[i]);
        }
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<=(v.size()-ans.size()); i++){ 
        ans.push_back(0);
        }
        for(int j: ans){
            cout<<j<<" ";
        }
 return 0;
}