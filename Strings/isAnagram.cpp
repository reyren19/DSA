#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        unordered_map<char, int> charCount;
        
        // Count characters in string s
        for (char c : s) {
            charCount[c]++;
        }
        
        // Compare characters in string t with counts in charCount
        for (char c : t) {
            charCount[c]--;
            if (charCount[c] < 0) {
                return false;
            }
        }
        
        return true;
    }
};
