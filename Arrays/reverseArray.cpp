#include<iostream>
using namespace std;
int main()
{
    int arr[8]={12,5,8,10,13,2,42,10};
    int s=0, e=7;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<7;i++) cout<<arr[i]<<" ";
 return 0;
}