#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums,int target){
    int n = nums.size();
    vector<int> arr;
    for(int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            if(arr[i]+arr[j]==target){
                arr.push_back(i);
                arr.push_back(j);
                return arr;
            }
        }
    }
    return {-1,-1};
}

vector<int> twoSumBetter(vector<int> &arr,int target){
    int n = arr.size();
    unordered_map<int,int> mapp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int moreNeeded = target - num;
        if(mapp.find(moreNeeded)!=mapp.end()){
            return {mapp[moreNeeded],i};
        }
        mapp[num] = i;
    }
    return {-1,-1};
}

void twoSumX(vector<int> &arr,int target){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==target){cout<<"YES"<<endl;break;}
        else if(sum>target){right--;}
        else{left++;}
    }
}

int main(){
    vector<int> nums = {2,7,11,15};
    vector<int> x = twoSum(nums,9);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    return 0;
}