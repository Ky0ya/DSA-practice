#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,vector<vector<int>> &arr){
    if(arr[i][j]==-1) return 0;
    if(i==0 && j==0) return arr[i][j];
    if(i<0 || j<0){ return 0;}
    else{
        int x = arr[i][j] + f(i-1,j,arr) + f(i,j-1,arr);
        arr[i][j] = 0;
        return x;
    }
}

int cherryPickup(vector<vector<int>> &grid){
    int n = grid.size();
    int y1 =  f(n-1,n-1,grid);
    int y2 = f(n-1,n-1,grid);
    return y1 + y2;
}

int main(){}