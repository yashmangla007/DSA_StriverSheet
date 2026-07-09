//Problem: Count the number of set bits, for a given N;

#include<bits/stdc++.h>
using namespace std;

int countSetBits1(int N){
    int count = 0;
    while(N>0){
        N = N&(N-1);
        count++;
    }

    return count;
}

int main(){

    int N;
    cout<<"Enter a: ";
    cin>>N;

    cout<<N<<" has "<<countSetBits1(N)<<" set bits.";
    // cout<<N<<" has "<<__builtin_popcount(N)<<" set bits.";

    

    return 0;
}