#include<bits/stdc++.h>
using namespace std;

double median(vector<int> arr1,vector<int>arr2){
    if(arr1.size()>arr2.size()){
        return median(arr2,arr1);
    }
    int m = arr1.size();
    int n = arr2.size();
    int low = 0; int high = m;
    int mid = (m+n+1)/2;
    while(low<=high){
        int cut1 = (low+high)>>1;
        int cut2 = mid = cut2;
        int l1 = (cut1==0)?INT_MIN:arr1[cut1-1];
        int l2 = (cut2==0)?INT_MIN:arr2[cut2-1];
        int r1 = (cut1==m)?INT_MAX:arr1[cut1];
        int r2 = (cut2==n)?INT_MAX:arr2[cut2];
        if(l1<=r2 && l2<=r1){
            if((m+n)%2){
                return max(l1,l2);
            }
            else{
                return (max(l1,l2)+min(r1,r2))/2;
            }
        }
        else if(l1>r2){high = cut1-1;}
        else{low = cut1+1;}
    }
    return 0.0;
}

double findMedianSortedArray(vector<int> &arr1,vector<int> &arr2){
    int m = arr1.size();
    int n = arr2.size();
}

int main(){}