#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> arr,vector<vector<int>> &dp){
    if(i<0 || j<0) return INT_MAX;
    if(i==0 && j==0) return dp[i][j] = arr[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] =  arr[i][j] + min(f(i-1,j,arr,dp),f(i,j-1,arr,dp));
}

int minPathSum(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int>> dp(m,vector<int>(n,INT_MAX));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) dp[i][j]=arr[i][j];
            int top = INT_MAX;
            int left = INT_MAX;
            if(i>0) top = dp[i-1][j];
            if(j>0) left = dp[i][j-1];
            dp[i][j] = arr[i][j] + min(top,left);
        }
    }
    return dp[m-1][n-1];
}

int main(){}