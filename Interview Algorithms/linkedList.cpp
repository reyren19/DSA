#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d){
    Node* newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail, int d){
    Node* newNode = new Node(d);
    tail->next = newNode;
    newNode->next = NULL;
    tail = newNode;
}

void insertAtPos(Node * &tail, Node* &head, int d, int pos){
    if(pos==1) insertAtHead(head, d);
    else{
        Node * newNode = new Node(d);
        Node * curr = head;
        int cnt = 1;
        while(cnt < pos-1){
            curr = curr->next;
            cnt++;
        }
        if(newNode->next == NULL){
            insertAtTail(tail, d);
            return;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
//created a new node
    Node* node1 = new Node(10);
    Node* head = node1; 
    Node* tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtPos(tail,head, 4, 22);
    insertAtTail(tail,26);
    print(head);
return 0;
}  