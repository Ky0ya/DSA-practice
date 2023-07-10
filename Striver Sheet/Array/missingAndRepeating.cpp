#include<bits/stdc++.h>
using namespace std;

int sumArray(vector<int> arr){
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }
    return sum;
}
int squareSumArray(vector<int> arr){
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i]*arr[i];
    }
    return sum;
}

pair<int,int> missingAndRepeating(vector<int> &arr,int n){
    int S = sumArray(arr);
    int S2 = squareSumArray(arr);
    int T = n*(n+1)/2;
    int T2 = n*(n+1)*(2*n + 1)/6;
    S = S - T;
    S2 = S2 - T2;
    S2 = S2/S;
    pair<int,int> value;
    value.first = (S+S2)/2;
    value.second = (S2-S)/2;
    return value;
}

int main(){}