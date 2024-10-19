#include<iostream>
using namespace std;
int main()
{
int a[8] = {1, -1, 3, 2, -7, -5, 11, 6 };
cout<<"Current array elements: \n";
for(int k=0;k<8;k++){
    cout<<a[k]<<" ";
}
int pivot=0;
int x=-1;
for(int j=0;j<8;j++){
    if(a[j]<pivot){
        x++;
        swap(a[x],a[j]);
    }
}
cout<<"New array elements: \n";
for(int k=0;k<8;k++){
    cout<<a[k]<<" ";
}
 return 0;
}