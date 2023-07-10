#include<bits/stdc++.h>
using namespace std;

long long sumSubarray(vector<int> arr,int i,int j){
    if(i==j){return arr[i];}
    long long sum=0;
    for(int k=i;k<j;k++){
        sum+=arr[i];
    }
    return sum;
}

int maxLen(vector<int> &arr,int n,int k){
    int longest=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=0;
            if(sumSubarray(arr,i,j)==k){
                temp = j-i+1;
                longest = max(longest,temp);
            }
        }
    }
    return longest;
}

int main(){}