#include<bits/stdc++.h>
using namespace std;

bool f(int ind,int target,vector<int> arr,vector<vector<int>> &dp){
    if(target==0) return true;
    if(ind==0){return (arr[0]=target);}
    if(dp[ind][target]!=-1) return dp[ind][target];
    bool notPick = f(ind-1,target,arr,dp);
    bool pick = false;
    if(target>=arr[ind]){
        pick = f(ind-1,target-arr[ind],arr,dp);
    }
    return dp[ind][target] = (pick || notPick);
}

bool subsetSum(vector<int> &arr,int target){
    int n = arr.size();
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

int main(){}