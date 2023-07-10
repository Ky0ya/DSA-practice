#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums){
    int n = nums.size();
    int maxi =0;
    int store=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=1){
            store=0;
        }
        else{store++;}
        maxi = max(maxi,store);
    }
    return maxi;
}

int main(){}