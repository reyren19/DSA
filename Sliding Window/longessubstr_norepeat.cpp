#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp; // to store all occurances of characters
        int i=0, j=0;
        // j-i+1 is sliding window size
        int ans = 0;
        while(j<s.length()){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--; // if we find repeating character, start shrinking from left
                i++;
            }
            ans = max(ans, j-i+1); // max will be sliding window size
            j++; // move j to next character
        }
        return ans;
    }
};