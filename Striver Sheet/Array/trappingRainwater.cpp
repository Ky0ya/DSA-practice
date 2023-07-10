#include<bits/stdc++.h>
using namespace std;

bool checkCase(int a,int b,int c){
    return (a>c && b>c);
}

int trap(vector<int> &height){
    int n = height.size();
    vector<int> leftWall(n);
    vector<int> rightWall(n);
    leftWall[0]=height[0];
    rightWall[n-1]=height[n-1];
    for(int i=1;i<n;i++){
        leftWall[i] = max(leftWall[i-1],height[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightWall[i] = max(rightWall[i+1],height[i+1]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        if(checkCase(leftWall[i],rightWall[i],height[i])){
            int x = min(leftWall[i],rightWall[i])-height[i];
            water += x;
        }
    }
    return water;
}

int main(){}