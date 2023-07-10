#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &nums,int index,set<vector<int>> &st,vector<int> temp){
    if(index==nums.size()){
        sort(temp.begin(),temp.end());
        st.insert(temp);
        return;
    }
    temp.push_back(nums[index]);
    fun(nums,index+1,st,temp);
    temp.pop_back();
    fun(nums,index+1,st,temp);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums){
    set<vector<int>> st;
    vector<int> temp;
    fun(nums,0,st,temp);
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

void findS(vector<int> &nums,int index,vector<int> &ds,vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=index;i<nums.size();i++){
        if(i!=index && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[index]);
        findS(nums,index+1,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetsWithDupOptimal(vector<int> &nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    vector<int> ds;
    findS(nums,0,ds,ans);
    return ans;
}

int main(){}