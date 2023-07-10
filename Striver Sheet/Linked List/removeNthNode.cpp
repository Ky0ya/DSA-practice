#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head==NULL) return NULL;
    ListNode* start = new ListNode();  // HERE WE ARE DOING THIS JOB TO HANDLE A CASE WHERE (LENGTH OF LIST == N) 
    start->next = head;                // SO, WE CANNOT DIRECTLY DELETE HEAD NODE AND RETURN ITSELF
    ListNode* first = start;
    ListNode* second = start;
    for(int i=0;i<n;i++){
        first = first->next;
    }
    while(first->next!=NULL){
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    return start->next;
}
int main(){}