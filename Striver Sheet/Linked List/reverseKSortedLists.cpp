#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int LengthList(ListNode* head){
    int count = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

ListNode* reverseKGroup(ListNode* head,int k){
    if(head==NULL || head->next==NULL) return head;
    int n = LengthList(head);
    ListNode* dummyHead = new ListNode(0);
    dummyHead->next = head;
    ListNode* prev = dummyHead;
    ListNode* curr,*nex;
    while(n<=k){
        curr = prev->next;
        nex = curr->next;
        for(int i=0;i<(k-1);i++){
            curr->next = nex->next;
            nex->next = prev->next;
            prev->next = curr;
            nex = curr->next;
        }
        prev = curr;
        n = n - k;
    }
    return dummyHead->next;
}

int main(){}