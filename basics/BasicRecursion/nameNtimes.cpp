/*
Problem Description: Given an integer N, write a program to print your name N times.
*/

#include<iostream>
using namespace std;

void printNtimes(int x){
    if (x==0) return;
    cout<<"Yash ";
    
    /*====BruteOption
    x--;
    printNtimes(x);*/

    printNtimes(x-1);   //No nedd for x--
}

int main(){

    int n;
    cout<<"n: ";
    cin>>n;

    printNtimes(n);

    return 0;
}