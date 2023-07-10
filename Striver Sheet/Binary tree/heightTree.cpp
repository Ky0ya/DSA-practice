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

int height(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}

int diameterOfBinaryTree(TreeNode* root){
    if(root==NULL) return 0;
    int x = 1 + height(root->left)+height(root->right);
    return x;
}

int main(){}