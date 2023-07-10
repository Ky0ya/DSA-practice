#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

vector<vector<int>> findVertical(Node* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<Node*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        Node* temp = p.first;
        int x = p.second.first;
        int y = p.second.second;
        nodes[x][y].insert(temp->data);
        if(temp->left){
            q.push({temp->left,{x-1,y+1}});
        }
        if(temp->right){
            q.push({temp->right,{x+1,y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p: nodes){
        vector<int> col;
        for(auto q:p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
        }
    return ans;
}

int main(){}