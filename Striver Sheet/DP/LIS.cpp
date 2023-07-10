#include<bits/stdc++.h>
using namespace std;
//MEMOIZATION
int f(vector<int> arr,int ind,int prev_ind,vector<vector<int>> &dp){
    if(ind==arr.size()) return 0;
    if(dp[ind][prev_ind+1]!=-1) return dp[ind][prev_ind+1];
    int notTake = 0 + f(arr,ind+1,prev_ind,dp);
    int take = 0;
    if(prev_ind==-1 || arr[ind]>arr[prev_ind]){
        take = 1 + f(arr,ind+1,ind,dp);
    }
    return dp[ind][prev_ind+1] = max(take,notTake);
}

int LIS(vector<int> arr){
    int n = arr.size();
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    return f(arr,0,-1,dp);
}

//TABULATION

int f(vector<int> arr){
    int n = arr.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int ind = n-1;ind>=0;ind--){
        for(int prev_ind = n-1;prev_ind>=-1;prev_ind--){
            int notPick = dp[ind+1][prev_ind+1];
            int pick;
            if(prev_ind==-1 || arr[ind]>arr[prev_ind]){
                pick = 1 + dp[ind+1][ind+1]; 
            }
            dp[ind][prev_ind+1] = max(pick,notPick);
        }
    }
    return dp[0][0];
}

int main(){}