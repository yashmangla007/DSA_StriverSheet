//Problem: Check if ith bit is set or not, for a given N;

#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int N){
    if(N&(N-1)) return false;
    else return true;
}

bool isOdd(int n){
    if( n&1 ) return true;
    else false;
}

int main(){

    int N, i;
    cout<<"Enter a: ";
    cin>>N;

    cout<<"if N is a power of Two: "<<isPowerofTwo(N);
    cout<<"\nif N is an odd number: "<<isOdd(N);
    

    return 0;
}