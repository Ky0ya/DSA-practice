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
//BELOW SOLUTION IS RECURSIVE 
void inorder(TreeNode* root,vector<int> &ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}

vector<int> inorderTraversal(TreeNode* root){
    vector<int> ans;
    inorder(root,ans);
    return ans;
}
//------------------------------
//BELOW SOLUTION IS ITERATIVE

vector<int> inorderTraversalIterative(TreeNode* root){
    vector<int> ans;
    if(!root){
        return ans;
    }
    TreeNode* curr = root;
    while(curr){
        if(!curr->left){
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else{
            TreeNode* prev = curr->left;
            while(prev->right && prev->right!=curr){
                prev = prev->right;
            } 
            if(prev->right==NULL){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                prev->right=NULL;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    return ans;
}
int main(){}