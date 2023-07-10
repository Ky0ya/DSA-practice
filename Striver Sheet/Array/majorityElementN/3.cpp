#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &arr){
    int n = arr.size();
    int cnt1 =0;
    int cnt2 =0;
    int el1 = INT_MIN;
    int el2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1==0 && arr[i]!=el2){
            el1 = arr[i];
            cnt1 = 1;
        }
        else if(cnt2==0 && arr[i]!=el1){
            el2 = arr[i];
            cnt2 = 1;
        }
        else if(el1==arr[i]){cnt1++;}
        else if(el2==arr[i]){cnt1++;}
        else{cnt1--;cnt2--;}
    }
    vector<int> ls;
    cnt1 =0;cnt2 =0;
    for(int i=0;i<n;i++){
        if(arr[i]==el1){cnt1++;}
        if(arr[i]==el2){cnt2++;}
    }
    int x = floor(n/3);
    if(cnt1>=x){ls.push_back(el1);}
    if(cnt2>=x){ls.push_back(el2);}
    return ls;
}

int main(){}