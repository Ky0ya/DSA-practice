#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool getPath(Node* root,vector<int> &ans,int x){
    if(root==NULL) return false;
    ans.push_back(root->data);
    if(root->data==x){return true;}
    if(getPath(root->left,ans,x) || getPath(root->right,ans,x)){
        return true;
    }
    ans.pop_back();
    return false;
}

vector<int> getPath(Node* root){
    
}



int main(){}