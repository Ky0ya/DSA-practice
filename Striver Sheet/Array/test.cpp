#include<bits/stdc++.h>
using namespace std;

int justSmallIndex(int arr[],int n, int target){
    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    int k;
    while(low<high){
        k = mid;
        mid = (low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) low = mid+1;
        else    high = mid-1;
    }
    return k;
}

int main(){
    map<int,int> pf;
    pf[1] = 6;
    pf[2] = 5;
    cout<<pf.size();
}