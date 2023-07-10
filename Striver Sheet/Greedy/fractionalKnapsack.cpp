#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool static myCmp(Item a,Item b){
    double x = (double)a.value/(double)a.weight;
    double y = (double)b.value/(double)b.weight;
    return (x>y);
}

double fractionalKnapsack(int W,Item arr[],int n){
    sort(arr,arr+n,myCmp);
    double profit = 0;
    for(int i=0;i<n;i++){
        if(W>arr[i].weight){
            profit += arr[i].value;
            W = W - arr[i].weight;
        }
        else{
            profit += double(arr[i].value*W)/arr[i].weight;
            break;
        }
    }
    return profit;
}

int main(){}