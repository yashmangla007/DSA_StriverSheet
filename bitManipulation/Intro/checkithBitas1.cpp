//Problem: Check if ith bit is set or not, for a given N;

#include<bits/stdc++.h>
using namespace std;

bool isSet(int N, int i){
    if(N&(1<<i)) return true;
    else return false;
}

int main(){

    int N, i;
    cout<<"Enter a: ";
    cin>>N; 
    cout<<"Enter i: ";
    cin>>i;

    cout<<"ith bit is set: "<<isSet(N, i);
    

    return 0;
}