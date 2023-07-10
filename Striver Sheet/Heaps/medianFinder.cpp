// PRINT MEDIAN FOR ELEMENT AT EVERY STAGE
#include<bits/stdc++.h>
using namespace std;
void findMedian(int *arr,int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<arr[i/2]<<" ";
        }
        else{
            int x = (arr[i/2] + (arr[i/2]+1))/2;
            cout<<x<<" ";
        }
    }
    cout<<endl;
}

int main(){}