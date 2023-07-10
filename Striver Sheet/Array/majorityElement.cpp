#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();
    int count=0;int el;
    for(int i=0;i<n;i++){
        if(count==0){
            count = 1;
            el = arr[i];
        }
        else if(el==arr[i]) count++;
        else count--;
    }
    return el;
}

int main(){}