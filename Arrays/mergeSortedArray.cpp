#include<iostream>
using namespace std;
void MergeArray(int a[], int m, int b[], int n){
    int c[m+n], i=0, j=0, k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
  for(int x=0;x<m+n;x++) cout<<c[x]<<" ";
}
int main()
{
    int A[4]={1,2,23,34};
    int B[6]={4,7,15,33,97,11};
    MergeArray(A,4,B,6);
 return 0;
}