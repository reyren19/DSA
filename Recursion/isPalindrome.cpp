#include<iostream>
using namespace std;
bool isPalindrome(string s, int i, int j){
//Base Case 
if(i>=j){
    return true;
}
if(s[i]!=s[j]){
return false;
}
   return isPalindrome(s, i+1, j-1);
}
int main() {
string str = "racecar";
cout<<isPalindrome(str, 0, str.length()-1);
return 0;
}  