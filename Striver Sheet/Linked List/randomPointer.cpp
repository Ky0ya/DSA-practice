#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head){
    unordered_map<Node*,Node*> hashMap;
    Node*temp = head;
    while(temp!=NULL){
        Node* newNode = new Node(temp->val);
        hashMap[temp]=newNode;
        temp = temp->next;
    }
    Node* t = head;
    while(t!=NULL){
        Node* node = hashMap[t];
        node->next = (t->next!=NULL)?hashMap[t->next]:NULL;
        node->random = (t->random!=NULL)?hashMap[t->random]:NULL;
        t = t->next;
    }
    Node* x = hashMap[head];
    return x;
}

Node* copyRandomListOptimal(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        
    } 
}

int main(){}