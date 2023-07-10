#include<bits/stdc++.h>
using namespace std;

long long int maxSumSubarray(int arr[],int n){
    long long int maxi = LONG_MIN, sum=0;
    int andStart = -1, ansEnd = -1, start=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum>maxi)
            maxi = sum;
        if(sum<0)
            sum=0;
    }
    return maxi;
}

int main(){}