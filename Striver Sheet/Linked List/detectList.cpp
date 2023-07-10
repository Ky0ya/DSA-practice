#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode* head){
    unordered_set<ListNode*> hashTable;
    while(head!=NULL){  
        if(hashTable.find(head)!=hashTable.end()) return true;
        hashTable.insert(head);
    }
    return false;
}

bool hasCycle(ListNode* head){
    if(head==NULL) return false;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next; 
        fast = fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

int main(){}