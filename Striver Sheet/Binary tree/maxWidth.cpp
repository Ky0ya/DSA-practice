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


int widthOfBinaryTree(TreeNode* root){
    if(root==NULL) return 0;
    int maxi =0;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        maxi = max(n,maxi);
        TreeNode* curr = q.front();
        q.pop();
        if(curr==NULL) curr = q.front();
        q.pop();
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
    return maxi;
}

int main(){}