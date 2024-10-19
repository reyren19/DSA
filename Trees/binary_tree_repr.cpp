#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preOrderTraversal(Node* node){
    //Base Case
    if(node==NULL){
        return;
    }

    //Recursive Calls
    cout<<node->data<<" ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}
void postOrderTraversal(Node* node){
    //Base Case
    if(node==NULL){
        return;
    }

    //Recursive Calls
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
     cout<<node->data<<" ";
}
void inOrderTraversal(Node* node){
    //Base Case
    if(node==NULL){
        return;
    }

    //Recursive Calls
    inOrderTraversal(node->left);
    cout<<node->data<<" ";
    inOrderTraversal(node->right);
}
int main() {
Node* root = new Node(8);
root->left= new Node(6);
root->right = new Node(12);
root->left->right= new Node(15);
return 0;
}  