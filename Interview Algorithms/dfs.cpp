#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};
bool dfsSearch(TreeNode* node, int target){
    if(node==nullptr) return false;
    if(node->val == target) return true;
    else if(dfsSearch(node->left, target)==true) return true;
    else if(dfsSearch(node->right, target)==true) return true;
    return false;
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
bool found = dfsSearch(root, target);
if(found){
    cout<<"Found the target node!"<<endl;
}
else{
    cout<<"Could not find the target node!"<<endl;
}
return 0;
}  