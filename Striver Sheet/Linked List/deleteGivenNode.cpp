#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void deleteNode(ListNode* node){
    ListNode* temp = node->next;
    node->val = temp->val;
    node->next = node->next->next;
    temp->next = NULL;
    delete temp;
}

int main(){}