#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeX(vector<vector<int>> &intervals){
    int n = intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
        if(arr.empty() || arr.back()[1] < intervals[i][0]){
            arr.push_back(intervals[i]);
        }
        else{
            arr.back()[1] = max(arr.back()[1],intervals[i][1]);
        }
    }
    return arr;
}

int main(){
    vector<vector<int>> v = {{1,3},{2,6},{8,10},{15,18}};
    v = mergeX(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
    return 0;
}