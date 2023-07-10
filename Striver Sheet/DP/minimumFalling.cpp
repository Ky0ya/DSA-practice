#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> arr,vector<vector<int>> &dp){
    if(j>(arr.size()-1) || j<0) return 1e6;
    if(i==0) return dp[i][j] = arr[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int d1 = arr[i][j] + f(i-1,j-1,arr,dp);
    int d2 = arr[i][j] + f(i-1,j,arr,dp);
    int d3 = arr[i][j] + f(i-1,j+1,arr,dp);
   return dp[i][j] = min(d1,min(d2,d3));
}

int minFallingPathSum(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    int mini = 1e7;
    for(int i=0;i<n;i++){
        int r = f(n-1,i,matrix,dp);
        mini = min(mini,r);}
    return mini;       
}

int minPathSum(vector<vector<int>> &arr){
    int n = arr.size();
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        dp[0][i] = arr[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            int up = arr[i][j] + dp[i-1][j];
            int leftD = arr[i][j];
            if(j-1>=0){leftD += dp[i-1][j-1];}
            else leftD = 1e6;        
            int rightD = arr[i][j];
            if(j<n-1){rightD += dp[i-1][j+1];}
            else rightD = 1e6;
            dp[i][j] = min(up,min(leftD,rightD));
        }
    }
    return *min_element(dp[n-1].begin(),dp[n-1].end());
}

int main(){}