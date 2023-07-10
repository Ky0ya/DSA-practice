#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> &dp){
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int d = f(i-1,j,dp);
    int l = f(i,j-1,dp);
    return dp[i][j] =  l + d;
}

int uniquePaths(int m,int n){
    vector<vector<int>> dp(m,vector<int>(n,0));
    for(int i=1;i<m;i++){
        dp[i][0]=1;
    }
    for(int j=1;j<n;j++){
        dp[0][j]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}

int main(){}