#include<iostream>
#include<string>
using namespace std;
void revS(string &s, int i, int j){
    //Base Case
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    revS(s, i, j);
}
int main() {

string str = "raunak";
revS(str, 0, str.length()-1);
cout<<str;
return 0;
}  