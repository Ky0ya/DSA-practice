#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &arr,int k){
        priority_queue<int> pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        for(int i=0;i<k;i++){
            pq.pop();
        }
        return pq.top();
}

int main(){}