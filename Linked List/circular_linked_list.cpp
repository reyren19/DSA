#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insertNode(Node* &tail, int element, int d) {
    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

} 

void deleteNode(Node* &tail, int element ){
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data!=element){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    if(tail==curr){
        tail=prev;
    }
    curr->next = NULL;
    delete curr;
}

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 1, 7);
    print(tail);
        insertNode(tail, 2, 17);
    print(tail);
        insertNode(tail, 3, 21);
    print(tail);
        insertNode(tail, 4, 13);
    print(tail);
        insertNode(tail, 5, 63);
    print(tail);
        insertNode(tail, 6, 22);
    print(tail);
        insertNode(tail, 7, 64);
    print(tail);
        insertNode(tail, 8, 36);
    print(tail);
    deleteNode(tail,3);
    print(tail);
return 0;
}  