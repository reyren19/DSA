#include<iostream>
using namespace std;
    void create_arr(int arr[], int size){
    for(int i=0;i<size;i++) cin>>arr[i];
    }
    /*Brute Force Solution
    void display_arr(int arr[], int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<endl;
    }
    int arr_dupl(int arr[], int size){
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(arr[i]==arr[j]){
                    return arr[j];
                }
            }
        }
        return 0;
    } */

    //First Optimised solution is to sort and then check pair wise :- nlogn


int main()
{
    int size;
    cin>>size;
    int arr[size];
    create_arr(arr,size);
    cout<<arr_dupl(arr,size);
     return 0;
}