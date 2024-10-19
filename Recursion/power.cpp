#include<iostream>
using namespace std;
int calcPow(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*calcPow(a,b-1);
    }
}
int main() {
int a, b;
cin>>a>>b;
cout<<calcPow(a,b);
return 0;
}  