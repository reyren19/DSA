#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, j=0;
        int ans =0;
        unordered_map<char,int> mp; // to store frequency of each character
        int maxFreq = 0;
        while(j<s.length()){
            mp[s[j]]++;
            maxFreq = max(maxFreq, mp[s[j]]); // keep increasing frequency until condition hits
            while(!((j-i+1)-maxFreq<=k)){ //if the number of letters to replace are greater than k then we cant form a repeating substring 
                mp[s[i]]--;
                i++;
                for(const auto& it: mp){
                    maxFreq = max(maxFreq, it.second); // recalculate max frequency 
                }
            }
            ans = max(ans, j-i+1); //finally calculate answer
            j++;
        }
        return ans;
    }
};