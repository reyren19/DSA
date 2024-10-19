#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

//Function to return a list containing elements of left view of the binary tree.
void helper(Node* root, int level, vector<int> &ds){
    if(root==NULL) return;
    if(level==ds.size()) ds.push_back(root->data); // this ensures that only one node is pushed from one level
    helper(root->left,level+1,ds);  // and this ensures that node is the leftmost node 
    helper(root->right, level+1, ds); 
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
    helper(root,0,ans);
    return ans;
}