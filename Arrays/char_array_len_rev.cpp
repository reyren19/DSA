#include<iostream>
using namespace std;
int getLength(char str[]){
    int i=0;
    while(str[i]!= '\0'){
        i++;
    }
    return i;
}
void revString(char str[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(str[s++], str[e--]);
    }
}
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    cout<<"The length of the string is "<<getLength(name)<<endl;
    int length = getLength(name);
    revString(name, length);
    cout<<"The reverse of the string is "<<name<<endl;
 return 0;
}