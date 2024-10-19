#include <bits/stdc++.h>
using namespace std;
void solve(vector<string>& ans ,string output, string str, int index){
   // base case
   if(index >= str.length()){
       if(output.length() != 0){
           ans.push_back(output);
       }
       return ;
   }
   
   //exclude
   solve(ans, output, str, index+1);
   
   //include
   output.push_back(str[index]);
   solve(ans, output, str, index+1);
   
}
vector<string> subsequences(string str){

// Write your code here
   vector<string> ans;
   string output ;
   int index = 0;
   solve(ans, output, str, index);
   return ans;
   

}