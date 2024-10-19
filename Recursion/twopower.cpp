#include<iostream>
using namespace std;
int twoPower(int p){
    if(p==0) return 1;
    return 2*twoPower(p-1);
}
int main() {
int power;
cin>>power;
cout<<twoPower(power);
return 0;
}  