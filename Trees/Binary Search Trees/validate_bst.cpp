#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
    int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    bool isValid(TreeNode* root, long minVal,long maxVal){
        if(root==NULL) return true;
        if(root->val>=maxVal || root->val<=minVal) return false; // root is greater than min and less than max always
        return isValid(root->left, minVal, root->val) && isValid(root->right, root->val, maxVal); /* for left side, min val is as min as 
                                                                        possible and max val is root, for right side its vice versa */

    }
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }
};