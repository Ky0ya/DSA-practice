#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(ans);
    for(int i=1;i<row;i++){
        ans = ans*(row-i);
        ans = ans/(i);
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        v[i] = generateRow(i+1);
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    
}