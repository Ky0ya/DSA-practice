#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> &dp,vector<vector<int>> arr){
    if(i>=0 && j>=0 && arr[i][j]==1) return 0;
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int d = f(i-1,j,dp,arr);
    int l = f(i,j-1,dp,arr);
    return dp[i][j] =  l + d;
}

int uniquePaths(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int>> dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                dp[i][j]=0;
                continue;
            }
            if(i==0 && j==0){
                dp[i][j]=1;
                continue;
            }
            else{
            int top = 0;
            int left = 0;
            if(i>0){
                top = dp[i-1][j];
            }
            if(j>0){
                left = dp[i][j-1];
            }
            dp[i][j] = top+left;
            }
        }
    }
    return dp[m-1][n-1];
}

int main(){}