#include<iostream>
using namespace std;
class Queue{

int rear, front;
int size;
int* arr;
int cnt;

public:
    Queue(){
        size=10000;
        arr = new int[size];
        rear=front=cnt=0;
    }

    bool isEmpty(){
        if(cnt==0){
            return true;
        }
        return false;
    }

    void enqueue(int x){
        if(cnt==size) return;
        arr[(rear)%size]=x;
        rear++;
        cnt++;
    }

    void dequeue(){
        if(cnt==0) return;
        arr[(front)%size]=-1;
        front++;
        cnt--;
    }

    int top(){
        return arr[(front)%size];
    }
};
int main() {
Queue q;
q.enqueue(12);
q.enqueue(28);
q.enqueue(6);
q.dequeue();
q.enqueue(3);
cout<<q.top();
return 0;
}  