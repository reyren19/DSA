#include<iostream>
using namespace std;
int main()
{
int size, key, pos;
int arr[size];
cout<<"Enter the size of array\n";
cin>>size;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"Current array elements: \n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Enter the position to be inserted to"<<endl;
cin>>pos;
cout<<"Enter the value to be inserted"<<endl;
cin>>key;
for(int i=size-1;i<pos;i--){
    arr[i+1]=arr[i];
}
arr[pos]=key;

cout<<"New array elements: \n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
 return 0;
}