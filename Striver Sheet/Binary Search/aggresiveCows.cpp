#include<bits/stdc++.h>
using namespace std;

bool canWePlaceCows(vector<int> arr,int dist,int cows){
    int cntCows = 1;
    int last = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last>=cows){
            cntCows++;
            last = arr[i];
        }
    }
    if(cntCows>=cows) return true;
    return false;
}

int aggresiveCows(vector<int> &arr,int cows){
    int n = arr.size();
    int maxi = 0;
    sort(arr.begin(),arr.end());
    int low = arr[0];
    int high = arr[n-1]-arr[0];
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(canWePlaceCows(arr,mid,cows)){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;
}

int main(){}