#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> arr,int n,vector<vector<int>> &dp){
    if(i==n-1) return arr[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int d = arr[i][j] + f(i+1,j,arr,n,dp);
    int dg = arr[i][j] + f(i+1,j+1,arr,n,dp);
    return dp[i][j] = min(d,dg);
}

int minimalTotal(vector<vector<int>> &triangle){
    int n = triangle.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    return f(0,0,triangle,n,dp);
}

int minimumTotal(vector<vector<int>> &triangle){
    int n = triangle.size();
    vector<vector<int>> dp(n,vector<int>(n,10000));
    dp[0][0] = triangle[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                dp[i][j] = triangle[i][j] + dp[i-1][j];
                continue;
            }
            if(i==j){
                dp[i][j] = triangle[i][j] + dp[i-1][j-1];
            }
            int d = 0;
            int dg = 0;
            dp[i][j] = triangle[i][j] + min(dp[i-1][j-1],dp[i-1][j]);
        }
    }
    return *min_element(dp[n-1].begin(),dp[n-1].end());
}

//ABOVE TABULATION CAN ALSO BE DONE AS 

int minTotal(vector<vector<int>> &triangle){
    int m = triangle.size();
    vector<vector<int>> dp(m,vector<int>(m,-1));
    for(int i=m-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(i==m-1){
                dp[i][j] = triangle[i][j];
            }
            else{
                dp[i][j] = triangle[i][j] + min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
    }
    return dp[0][0];
}

int main(){}