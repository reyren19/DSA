#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor to initialise node immediately
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp = head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int d){
    if(head==NULL){
        Node* newnode = new Node(d);
        head=newnode;
        tail = newnode;
    }
    else{
    Node* newnode = new Node(d);
    newnode->next=head;
    head->prev= newnode;
    head=newnode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){
        if(tail==NULL){
        Node* newnode = new Node(d);
        tail=newnode;
        head = newnode;
    }
    else{
    Node* newnode = new Node(d);
    newnode->prev= tail;
    tail->next=newnode;
    tail = newnode;
    }
}

void insertAtPos(Node* &head, int d, int pos){
    Node* newnode = new Node(d);
    int cnt = 1;
    Node* temp = head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    newnode->next= temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
     newnode->prev = temp;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    if(head==NULL){
        return;
    }
    else{
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
    }
}

void deleteAtPos(Node* head, Node* tail, int pos){
    Node* temp = head;
    int cnt = 1;
    if(head==NULL){
        return;
    }
    else{
        while(cnt<pos){
            temp = temp->next;
            cnt++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
}

int main() {
Node* head = NULL;
Node* tail = NULL;
insertAtHead(head,tail, 26);
insertAtTail(tail,tail, 49);
insertAtTail(tail,tail, 69);
insertAtTail(tail,tail, 29);
insertAtTail(tail,tail, 79);
insertAtPos(head, 32, 3);
deleteAtPos(head,tail,4);
print(head);
cout<<"The length of the linked list is "<<getLength(head)<<endl;
return 0;
}  