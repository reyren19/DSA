#include<iostream>
using namespace std;
int mountainPeak(int arr[], int s, int e){
int peak;
if(s == e){
    peak=arr[s];
}
int mid = (e+s)/2;
if(arr[mid]>arr[mid+1]  and arr[mid]>arr[mid-1]){
    peak=arr[mid];
}
else if(arr[mid]<arr[mid+1]){
    return mountainPeak(arr, mid+1, e);
}
else{
    return mountainPeak(arr, s, mid-1);
}
return peak;
}
int main()
{
    int arr[5]={1,2,8,9,3}; //,peak//;
    // for(int i=0; i<7; i++){
    //     if(arr[i]>arr[i+1]){
    //         peak=arr[i];
    //         break;
    //     }
    // }
    cout<<mountainPeak(arr,0,4);
 return 0;
}