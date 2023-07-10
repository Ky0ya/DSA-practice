#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> a,pair<int,int> b){
    return (a.second<b.second);
}

int maxMeetings(int start[],int end[],int n){
    pair<int,int> v[n];
    for(int i=0;i<n;i++){
        v[i].first = start[i];
        v[i].second = end[i];
    }
    int ans = 1;
    int taken = 0;
    sort(v,v+n,mycmp);
    for(int i=1;i<n;i++){
        if(v[i].first>v[taken].second){
            taken = i;
            ans++;
        }
    }
    return ans;
}

int main(){
    int n = 6;
    int start[] = {1,3,0,5,8,5};
    int end[] = {2,4,6,7,9,9};
    maxMeetings(start,end,6);
}