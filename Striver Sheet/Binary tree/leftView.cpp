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

void left(Node* root,vector<int> &ans,int level){
    if(root==NULL) return;
    if(level==ans.size()) ans.push_back(root->data);
    left(root->left,ans,level+1);
    left(root->right,ans,level+1);
}

vector<int> leftView(Node* root){
    vector<int> ans;
    left(root,ans,0);
    return ans;
}

int main(){}