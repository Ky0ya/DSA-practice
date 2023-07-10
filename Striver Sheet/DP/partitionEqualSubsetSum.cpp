#include<bits/stdc++.h>
using namespace std;

bool f(int i,int target,vector<int> arr,vector<vector<int>> &dp){
    if(target==0) return true;
    if(i==0){return (arr[i]==target);}
    if(dp[i][target]!=-1) return dp[i][target];
    bool notPick = f(i-1,target,arr,dp);
    bool pick = false;
    if(target>=arr[i]){
        pick = f(i-1,target-arr[i],arr,dp);
    }
    return dp[i][target] = (pick || notPick); 
}

bool canPartition(vector<int>& arr){
    int n = arr.size();
    if(n==1) return false;
    if(n==2 && arr[0]!=arr[1]) return false;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    if(sum%2!=0) return false;
    else{
        int target = sum/2;
    vector<vector<int>> dp(n,vector<int>(target+1,0));
    for(int i=0;i<n;i++){dp[i][0]=1;}
        dp[0][arr[0]] = 1;
        for(int i=1;i<n;i++){
        for(int j=1;j<=target;j++){
           bool notPick = dp[i-1][j];
            bool pick = false;
            if(j>=arr[i]){
            pick = dp[i-1][j-arr[i]];
            dp[i][j] = pick || notPick;
            } 
        }
    }
    return dp[n-1][target];
    }
}

int main(){}