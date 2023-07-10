#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int longest = 1;
    int currCnt = 0;
    int lastSmaller = INT_MIN;
    for(int i=0;i<n;i++){
        if(i==0 || (nums[i]-lastSmaller==1)){
            currCnt++;
            lastSmaller=nums[i];
        }
        else if(nums[i]==lastSmaller){
            continue;
        }
        else{
            currCnt=1;
            lastSmaller=nums[i]; 
        }
        longest = max(longest,currCnt);
    }
    return longest;
}

int longestConsecutiveOptimal(vector<int> &nums){
    int n = nums.size();
    if(n==0){return 0;}
    unordered_set<int> st;
    int longest = 1;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(auto it: st){   
        if(st.find(it-1)==st.end()){
            int cnt =1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}

int main(){
    vector<int> x={1,2,3,4,100,200};
    cout<<longestConsecutive(x);
}