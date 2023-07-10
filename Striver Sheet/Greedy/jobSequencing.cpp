#include<bits/stdc++.h>
using namespace std;

struct Job { 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

static bool myCmp(Job a,Job b){
    if(a.dead==b.dead){
        return (a.profit>b.profit);
    }
    else{return a.dead>b.dead;}
}

vector<int> jobScheduling(Job arr[],int n){
    sort(arr,arr+n,myCmp);
    int taken_dead = arr[0].dead;
    int profit = arr[0].profit;
    int n_jobs = 1;
    for(int i=1;i<n;i++){
        if(arr[i].dead<taken_dead){
            profit = profit + arr[i].profit;
            n_jobs++;
            taken_dead = arr[i].dead;
        }
    }
    vector<int> v;
    v.push_back(n_jobs);
    v.push_back(profit);
    return v;
}

int main(){
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].id>>arr[i].dead>>arr[i].profit;
    }
    vector<int> v;
    v = jobScheduling(arr,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}