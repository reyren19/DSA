#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

bool isLeaf(TreeNode<int> *root)
{
    if ((root->left == NULL) && (root->right == NULL))
        return true;
    return false;
}

void leftBoundary(TreeNode<int> *root, vector<int> &ans)
{
    TreeNode<int> *curr = root->left;
    while (curr)
    {
        if (isLeaf(curr) == false)
            ans.push_back(curr->data);
        if (curr->left != NULL) // if left node is not available, we traverse the right node of root as it will also be on left boundary now
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void rightBoundary(TreeNode<int> *root, vector<int> &ans)
{
    TreeNode<int> *curr = root->right;
    vector<int> v;
    while (curr)
    {
        if (isLeaf(curr) == false)
            v.push_back(curr->data);
        if (curr->right != NULL)
            curr = curr->right;
        else
            curr = curr->left; // if right node is not available, we traverse the left node of root as it will also be on right boundary now
    }
    for (int i = v.size() - 1; i >= 0; i--) //since it is boundary, right subtree nodes will be in reverse order
        ans.push_back(v[i]);
}
void addLeaves(TreeNode<int> *root, vector<int> &ans)
{
    if (isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }
    if (root->left)
        addLeaves(root->left, ans);
    if (root->right)
        addLeaves(root->right, ans);
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> res;
    if (!root)
        return res;
    if (!isLeaf(root)) // checking if the root is not a leaf node i.e. tree has a single node
        res.push_back(root->data);
    leftBoundary(root, res);
    addLeaves(root, res);
    rightBoundary(root, res);
    return res;
}