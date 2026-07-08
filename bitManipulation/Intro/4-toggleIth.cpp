//Problem: Toggle the ith bit, for a given N;

#include<bits/stdc++.h>
using namespace std;

int toggleIth(int N, int i){
    return ( N^(1<<i) );
}

int main(){

    int N, i;
    cout<<"Enter a: ";
    cin>>N; 
    cout<<"Enter i: ";
    cin>>i;

    cout<<"Ans: "<<toggleIth(N, i);
    

    return 0;
}