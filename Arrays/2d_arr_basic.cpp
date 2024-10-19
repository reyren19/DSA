#include<iostream>
using namespace std;
bool isPresent(int arr[3][4], int target){
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
        if(arr[row][col]== target){
            return 1;
        }
        }
    }
    return 0;
}
void r_sum(int arr[3][4]){
        for(int row=0; row<3; row++) {
                int sum=0;
        for(int col=0; col<4; col++) {
            sum=sum+arr[row][col];
        }
        cout<<sum<<" ";
        }
    }

void max_sum(int arr[3][4]){
    int max=0;
        for(int row=0; row<3; row++) {
                int sum=0;
        for(int col=0; col<4; col++) {
            sum=sum+arr[row][col];
        }
        if(sum>max){max=sum;}
        }
        cout<<"The max of all sums is "<<max;
    }

int main()
{
    int arr[3][4], target;
    cout << "Enter the elements " <<  endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cin>>target;
    if(isPresent(arr,target)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found"<<endl;
    }
    r_sum(arr);
 return 0;
}