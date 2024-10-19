#include<iostream>
using namespace std;
void create_arr(int arr[], int size){
for(int i=0;i<size;i++) cin>>arr[i];
}
void display_arr(int arr[], int size){
for(int i=0;i<size;i++) cout<<arr[i]<<endl;
}
int maxprod(int arr[], int size){
    int cur=1, max=0;
    for(int i=0;i<size;i++){
        cur=cur*arr[i];
        if(cur>0){max=cur;}

        if(cur<max){break;}
        
    }
    return max;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    create_arr(arr,size);

    display_arr(arr,size);
    cout<<maxprod(arr,size);
 return 0;
}