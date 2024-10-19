#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    cin>>sum;
    for(int i=100; i<999; i++){
        int r = i%10;
        int a = i/10;
        if(a+r==sum){
            cout<<i;
        }
    }
    return 0;
}