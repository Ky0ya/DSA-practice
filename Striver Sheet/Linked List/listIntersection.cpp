#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* intersectionNode(ListNode* head1,ListNode* head2){
    while(head1!=NULL){
        ListNode* temp = head2;
        while(temp!=NULL){
            if(temp==head1) return temp;
            temp = temp->next;
        }
        head1 = head1->next;
    }
    return NULL;
}

ListNode* intersectionNodeBetter(ListNode* head1,ListNode* head2){
    unordered_set<ListNode*> st;
    while(head1!=NULL){
        st.insert(head1);
        head1 = head1->next;
    }
    while(head2!=NULL){
        if(st.find(head2)!=st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;
}

int main(){}