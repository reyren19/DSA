#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char str[], int n){
    int s=0, e=n-1;
    while(s<e){
        if(tolower(str[s])!=tolower(str[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char str[20];
    int len = strlen(str);
    cout<<"Enter a string"<<endl;
    cin>>str;
    cout<<"Your string is "<<str<<endl;
    cout<<isPalindrome(str, len);
    
 return 0;
}