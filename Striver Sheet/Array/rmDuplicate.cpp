#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &nums){
    set<int> st;
    int n = nums.size();
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    int k = st.size();
    int j=0;
    for(int x:st){
        nums[j++] = x;
    }
    return k;
}

int removeDuplicateOptimal(vector<int> &arr){
    int n = arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){}