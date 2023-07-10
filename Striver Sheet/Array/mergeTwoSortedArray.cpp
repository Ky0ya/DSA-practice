#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &num1,int m, vector<int> &num2,int n){
    if(n==0) return;
    if(m==0){
        for(int i=0;i<n;i++){
            num1[i] = num2[i];
        }
    }
    else{
        int x = m-1;
        int y = n-1;
        int z = m+n-1;
        while(x>=0 && y>=0){
            if(num1[x]>num2[y]){
                num1[z] = num1[x];
                num1[x] = 0;
                x--;
                z--;
            }
            else{
                num1[z] = num2[y];
                y--;
                z--;
            }
        }
        if(x<0 && z>=0){
            for(int i=0;i<n;i++){
                num1[i] = num2[i];
            }
        }
    }
    
}

int main(){

}