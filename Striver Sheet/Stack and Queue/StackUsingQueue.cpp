#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public:
    queue<int> q1;
    queue<int> q2;
    MyStack(){}
    void push(int x){
        q1.push(x);
    }
    int pop(){
        return q1.front();
    }
    int top(){
        return q1.back();
    }
};

int main(){}