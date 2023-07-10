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
    int count=0;
    if(head==NULL) return count;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
    // ASSUMING THAT I AM ADDING EVERYTHING IN LIST1
        int ll1 = lengthList(l1);
        int ll2 = lengthList(l2);
        int carry = 0;
        ListNode* x,*y;
        if(ll1<ll2) swap(l1,l2);
        ListNode* res = l1;
        while(l1!=NULL && l2!=NULL){
            l1->val = l1->val + l2->val + carry;
            carry = l1->val/10;
            l1->val = l1->val%10;
            if(l1->next==NULL) x = l1;
            if(l2->next==NULL) y = l2;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==NULL && l2==NULL && carry!=0){
            ListNode* temp = new ListNode(carry);
            x->next = temp;
        }
        else if(l1!=NULL && l2==NULL && carry!=0){
            while(carry!=0 && l1!=NULL){
                l1->val = l1->val + carry;
                carry = l1->val/10;
                l1->val = l1->val%10;
                if(l1->next==NULL) x = l1;
                l1 = l1->next;
            }
            if(l1==NULL && carry!=0){
                ListNode* temp = new ListNode(carry);
                x->next = temp;
            }
        }
        return res;
}

int main(){}