#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};
bool bfsSearch(TreeNode* node, int target){
    if(node==nullptr) return false;
    queue<TreeNode*> q;
    q.push(node);
    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        if(node->val == target) return true;
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        return false;
    }
}
int main() {
TreeNode* root = new TreeNode(5);
root->left = new TreeNode(3);
root->right = new TreeNode(8);

root->left->left = new TreeNode(1);
root->left->right = new TreeNode(4);

root->right->left = new TreeNode(6);
root->right->right = new TreeNode(9);
int target = 6;
bool found = bfsSearch(root, target);
if(found){
    cout<<"Found the target node!"<<endl;
}
else{
    cout<<"Could not find the target node!"<<endl;
}
return 0;
}  