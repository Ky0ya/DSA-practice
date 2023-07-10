#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix,int target){
    int m = matrix[0].size();
    int n = matrix.size();
    int low = 0;
    int high = m*n-1;
    while(low<=high){
        int mid = (low + (high-low)/2);
        if(matrix[mid/m][mid%m]==target) return true;
        else if(matrix[mid/m][mid%m]>target) high = mid-1;
        else low = mid+1;
    }
    return false;
}

int main(){}