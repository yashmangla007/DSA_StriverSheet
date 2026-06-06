/*
Problem Description: Given an integer N, write a program to print your name N times.
*/

#include<iostream>
using namespace std;

int getN(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    return n;
}

void print1toN(int x){
    if(x==0) return;
    print1toN(x-1);
    cout<<x<<' ';
    return;
}

void printNto1(int x){
    if(x<=0) return;
    cout<<x<<' ';
    printNto1(x-1);
}

int sumN(int x){
    if(x==0) return 0;
    return x + sumN(x-1);
}

int main(){

    int n = getN();
    
    print1toN(n);
    cout<<"\n";
    printNto1(n);
    cout<<"\nSum of first N Numbers is: "<<sumN(n);

    return 0;
}