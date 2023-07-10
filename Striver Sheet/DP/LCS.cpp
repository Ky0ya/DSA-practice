#include<bits/stdc++.h>
using namespace std;
//MEMOIZATION
int LCS(string &A,string &B,int i,int j,vector<vector<int>> &dp){
    if(i<0 || j<0) return 0;    
    if(dp[i][j]!=-1) return dp[i][j];
    else if(A[i]==B[j]) return dp[i][j] = 1+LCS(A,B,i-1,j-1,dp);
    else{
        return dp[i][j] = max(LCS(A,B,i,j-1,dp),LCS(A,B,i-1,j,dp));
    }
}

int longestCommonSubsequence(string text1, string text2){        
int n = text1.size();int m = text2.size();
vector<vector<int>> dp(n,vector<int>(m,-1));
return LCS(text1,text2,n-1,m-1,dp);
}

//TABULATION

int longestCS(string s1,string s2){
    int n = s1.size();int m = s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(s1[i]==s2[j]){dp[i][j]==1+dp[i+1][j+1];}
            else{
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}

int main(){}