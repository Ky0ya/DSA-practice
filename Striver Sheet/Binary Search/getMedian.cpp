#include<bits/stdc++.h>
using namespace std;

int countSmallerThanMid(vector<int> v,int mid){
    int low = 0;
    int high = v.size()-1;
    while(low<=high){
        int mid = (low+high)>>1;
        if(v[mid]<=mid){
            low = mid+1;
        }
        else
            high = mid-1;
    }
    return low;
}

int getMedian(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = 1e9;
    while(low<=high){
        int mid = (low+high)>>1;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=countSmallerThanMid(matrix[i],mid);
        }
        if(cnt<=(n*m)/2)
            low = mid+1;
        else    
            high = mid-1;

    }
    return low;
}

int main(){}