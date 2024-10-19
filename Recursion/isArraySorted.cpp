#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
//Base Case 
if(size==0||size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}
else{
  bool  ans = isSorted(arr+1, size-1);
return ans;
}
}
int main() {
int size = 6;
int arr[size] = {2,4,6,8,9,3};
cout<<isSorted(arr, size);
return 0;
}  