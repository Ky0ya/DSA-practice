#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int lengthList(ListNode* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

ListNode* rotateRight(ListNode* head,int k){
    if(head==NULL || head->next==NULL) return head;
    int n = lengthList(head);
    k = k%n;
    ListNode* fast = head;
    for(int i=0;i<k;i++){
        fast = fast->next;
    }
    ListNode* slow = head;
    while(fast->next!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    fast->next = head;
    ListNode* temp = slow->next;
    slow->next = NULL;
    return temp;
}

int main(){

}