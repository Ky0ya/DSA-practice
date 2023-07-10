#include<bits/stdc++.h>
using namespace std;
//NxM MATRIX
vector<vector<int>> setZeroes(vector<vector<int>> &matrix, int n, int m){
    
    int col0 = matrix[0][0];
    //STEP 1: MATRIX TRAVERSAL AND MARKING 0'S
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0)
                matrix[0][j]=0;
                else
                col0 = 0;
            }
        }
    }
    //STEP 2: MAKING 0's OF CELLS FROM (1,1) TO (N-1,M-1)
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    //STEP 3: MAKING 1ST ROW AND 1ST COLUMN ZERO
    if(matrix[0][0]==0){
        for(int i=0;i<m;i++){
            matrix[0][i]=0;
        }
    }
    else if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    return matrix;
}
