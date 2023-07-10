#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int x){
        data = x;
        left=NULL;
        right=NULL;
    }
};

vector<vector<int>> allInOne(Node* root){
    vector<vector<int>> ans;
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    stack<pair<Node*,int>> s;
    s.push({root,1});
    if(root==NULL); // ;
    while(!s.empty()){
        auto it = s.top();
        s.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            s.push(it);

            if(it.first->left!=NULL){
                s.push({
                    it.first->left,1
                });
            }
        }

        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            s.push(it);

            if(it.first->right!=NULL){
                s.push({it.first->right,1});
            }
        }
        else{post.push_back(it.first->data);}
    }

}

int main(){}