#include<bits/stdc++.h>
using namespace std;

void reversePart(string &s,int i,int j){

}

string reverseWords(string s){
    
    if(s[0]==' '){
        string x(s.begin()+1,s.end());
        s = x; 
    }
    if(s.back()==' '){
        s.pop_back();
    }
    
}

int main(){}