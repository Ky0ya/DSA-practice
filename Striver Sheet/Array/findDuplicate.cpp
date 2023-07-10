#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr){
    vector<bool> check(arr.size(),false);
    for(int i=0;i<arr.size();i++){
        if(check[arr[i]]){
            return arr[i];
        }
        else{
            check[arr[i]] = true;
        }
    }
}

int findDuplicateBetter(vector<int> &arr){
    int slow = arr[0];
    int fast = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    fast = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main(){}