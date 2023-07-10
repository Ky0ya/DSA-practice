#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr){
    set<vector<int>> st;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            for(int k=(j+1);k<n;k++){
                long long sum = arr[i] +arr[j];
                sum += arr[k];
                if(sum==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> threeSumHashing(vector<int> &arr){
    set<vector<int>> st;
    int n = arr.size();
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=(i+1);j<n;j++){
            int third = -1*(arr[i]+arr[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int> temp = {arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> threeSumTwoPointer(vector<int> &arr){
    set<vector<int>> st;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int low = 0,high=n-1;
    for(int i=0;i<n;i++){
        low = i+1;high=n-1;
        int diff = (-1)*arr[i];
        while(low<high){
            int sum = arr[low]+arr[high];
            if(sum==diff){
                vector<int> temp = {arr[i],arr[low],arr[high]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
                low++;high--;
            }
            else if(sum>diff){high--;}
            else{low++;}
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main(){}