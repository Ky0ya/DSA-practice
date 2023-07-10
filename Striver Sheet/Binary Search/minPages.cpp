#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> A,int B,int mid){
    int allocated_stu = 1;
    int pages = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]>mid) return false;
        if((pages+A[i])>mid){
            allocated_stu++;
            pages += A[i];
        }
        else{
            pages += A[i];
        }
    }
    if(allocated_stu>B){return false;}
    return true;
}

int books(vector<int> &A,int B){
    if(B>A.size()) return -1;
    int low = A[0];
    int high = 0;
    for(int i=0;i<A.size();i++){
        high += A[i]; 
        low = min(high,low);
    }
    while(low<=high){
        int mid = (low+high)>>1;
        if(isPossible(A,B,mid)){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main(){}