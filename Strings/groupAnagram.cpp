#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        
        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            
            // If the sorted string exists as a key, append the original string to the value vector.
            // Otherwise, create a new key-value pair.
            anagramMap[sortedStr].push_back(str);
        }
        
        vector<vector<string>> ans;
        for (const auto& pair : anagramMap) {
            ans.push_back(pair.second);
        }
        
        return ans;
    }
};
