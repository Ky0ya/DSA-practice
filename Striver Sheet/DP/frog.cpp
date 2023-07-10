#include<bits/stdc++.h>
using namespace std;

int frog(int n,vector<int> &arr){
    if(n==0) return 0;
    int left = frog(n-1,arr) + (arr[n]-arr[n-1]);
    int right = frog(n-2,arr) + (arr[n]-arr[n-1]);
    return min(left,right);
}

int frogDP(int n,vector<int> &arr){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1] = (arr[1]-arr[0]);
    for(int i=2;i<=n;i++){
        int left = dp[i-1] + (arr[i] - arr[i-1]);
        int right = dp[i-2] + (arr[i] - arr[i-2]);
        dp[i] = min(left,right);
    }
    return dp[n];
}

int main(){}