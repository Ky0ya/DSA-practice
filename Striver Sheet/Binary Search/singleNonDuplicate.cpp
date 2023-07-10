#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &arr){
    int low = 0;
    int high = arr.size()-2;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid%2==0){
            if(arr[mid]!=arr[mid+1])
                high = mid-1;
            else    
                low = mid+1;
        }
        else{
            if(arr[mid]==arr[mid+1]){
                high = mid-1;
            }
            else    
                low = mid+1;
        }
    }
    return arr[low];
}

int main(){}