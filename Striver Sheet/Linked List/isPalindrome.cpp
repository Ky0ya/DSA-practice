#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}

ListNode* middleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    } 
    return slow;
}

bool isPalindrome(ListNode* head){
    ListNode* temp = middleNode(head);
    temp->next = reverseList(temp->next);
    temp = temp->next;
    ListNode* dummy = head;
    while(temp!=NULL){
        if(dummy->val!=temp->val){
            return false;
        }
        dummy = dummy->next;
        temp = temp->next;
    }
    return true;
}

int main(){}