#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    // constructor 
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

class Stack{
    Node* top;
    public:
        Stack() {top = NULL;}

        void push(int data){
            Node* temp = new Node(data);

            //check if heap is full
            if(!temp){
                cout<<"Stack Overflow!";
                exit(1);
            }
            temp->data=data;
            temp->next = top;
            top = temp;
        }
        bool isEmpty(){
            if(top==NULL){
                return true;
            }
            else{
                return false;
            }
        }
        int peek(){
            if(!(top==NULL)){
                return top->data;
            }
            else{
                exit(1);
            }
        }
        void pop(){
            Node* temp;
            if(!(top==NULL)){
                temp =top;
                top=top->next;
                free(temp);
            }
            else{
                exit(1);
            }
        }
        void display(){
            Node* temp;
            if(top==NULL){
                cout<<"Stack Underflow";
            }
            else{
                temp = top;
                while(temp!=NULL){
                    cout<<temp->data<<"-->";
                    temp = temp->next;
                }
            }
        }
};

int main() {
/* Using STL stack implementation:
stack<int> s;
s.push(1);
s.push(8);
s.push(17);
s.pop();
cout<<"Printing top element "<<s.top(); */
Stack s;
s.push(1);
s.push(8);
s.push(17);
s.pop();
s.push(54);
s.push(12);
s.push(27);
s.pop();
s.display();
cout<<"\n \nThe current element at the top is "<<s.peek();
return 0;
}  