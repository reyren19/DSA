#include<iostream>
using namespace std;
bool binarySearch(int arr[], int low, int high, int key){
    int mid = (low+high)/2;
    //Base Case
    if(arr[mid] == key) {return true;}
    if(arr[mid]> key) { return binarySearch(arr, low, mid-1, key); } 
    if(arr[mid]<key) { return binarySearch(arr, mid+1, high, key); } 
    else{
        return false;
    }
    }
int main() {
int arr[7] = {3,6,9,12,15,32,51};
cout<<binarySearch(arr, 0, 6, 121);
return 0;
}  