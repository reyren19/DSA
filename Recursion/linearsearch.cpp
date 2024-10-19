#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
//Base Case 
if(arr[0]==key){
    return true;
}

if(size==0){
    return false;
}
else{
  bool  ans = linearSearch(arr+1, size-1, key);
return ans;
}
}
int main() {
int size = 6;
int arr[size] = {2,4,6,8,9,3};
cout<<linearSearch(arr, size,81);
return 0;
}  