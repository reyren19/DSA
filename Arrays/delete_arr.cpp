#include<iostream>
using namespace std;
int main()
{
int size, pos;
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
for(int i=pos-1;i<size-1;i++){
    arr[i]=arr[i+1];
}
size--;
cout<<"New array elements: \n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
 return 0;
}